#include<bits/stdc++.h>
using namespace std;

bool visited[500];
int distanceToSource[500];
int adjMatrix[401][401];
int depart;

void BFS (bool train, int town, int route) {
    for(int i=0; i<500; i++) {
        distanceToSource[i]=INT_MAX;
        visited[i]=false;
    }
    queue<int> queues;
    queues.push(1);
    visited[1]=true;
    distanceToSource[1]=0;
    while(!queues.empty()) {
        depart=queues.front();
        queues.pop();
        for(int i=1; i<=town; i++) {
            if(train) {
                if(adjMatrix[depart][i]==1 && visited[i]==false) {
                    queues.push(i);
                    visited[i]=true;
                    distanceToSource[i]=distanceToSource[depart]+1;
                    if(i==town) {
                        return;
                    }
                }
            }
            else {
                if(adjMatrix[depart][i]==0 && visited[i]==false) {
                    queues.push(i);
                    visited[i]=true;
                    distanceToSource[i]=distanceToSource[depart]+1;
                    if(i==town) {
                        return;
                    }
                }
            }
        }
    }
}

int main() {
    int towns, routes, depart, arrival;
    int train, bus;
    cin>>towns>>routes;
    memset(adjMatrix, 0, sizeof(adjMatrix));
    for(int i=0; i<routes; i++) {
        cin>>depart>>arrival;
        adjMatrix[depart][arrival]=1;
        adjMatrix[arrival][depart]=1;
    }
    if(adjMatrix[1][towns]==1) {
        train=1;
        BFS(false, towns, routes);
        bus=distanceToSource[towns];
    }
    else {
        bus=1;
        BFS(true, towns, routes);
        train=distanceToSource[towns];
    }
    int answer=max(bus, train);

    if(answer==INT_MAX) {
        cout<<-1<<endl;
    }
    else {
        cout<<answer<<endl;
    }

    return 0;
}
