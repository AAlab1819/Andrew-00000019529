#include <bits/stdc++.h>
using namespace std;

struct Topic {
    int id;
    long long int oldZ;
    long long int newZ;
    long long int difference;
};

vector<Topic> heapify(vector<Topic> topicList) {
    for(int i=topicList.size()/2; i>=0; i--) {
        int parent = i;
        int left = (2*i)+1;
        int right = (2*i)+2;
        if(left < topicList.size()) {
            if(topicList[parent].id < topicList[left].id) {
                swap(topicList[parent], topicList[left]);
            }
        }
        if(right < topicList.size()) {
            if(topicList[parent].id < topicList[right].id) {
                swap(topicList[parent], topicList[right]);
            }
        }
    }
    return topicList;
}

vector<Topic> heapsort(vector<Topic> topicList) {
    vector<Topic> sortedTopic;
    for(int i=0; i<topicList.size(); i++) {
        sortedTopic.push_back(topicList[0]);
        topicList[0].id = -1;
        topicList = heapify(topicList);
    }
    return sortedTopic;
}
int main() {
    map<int,vector<Topic>,greater<int> > heap;
    int n;
    cin >> n;
    int id, z, p, l, c, s;
    Topic newTopic;

    for (int i=0; i<n; i++) {
        cin >> id >> z >> p >> l >> c >> s;
        newTopic.id = id;
        newTopic.oldZ = z;
        newTopic.newZ = (p*50) + (l*5) + (c*10) + (s*20);
        newTopic.difference = newTopic.newZ - newTopic.oldZ;
        heap[newTopic.difference].push_back(newTopic);
    }
    
    map<int,vector<Topic>,greater<int> >::iterator it;
    
    for(it=heap.begin(); it!=heap.end(); it++) {
        it->second = heapsort(it->second);
    }
	
	cout<<endl;
    int counter = 1;
    for(it=heap.begin(); it!=heap.end(); it++) {
        for(int i=0; i<(it->second).size(); i++) {
            cout << (it->second)[i].id << " " << (it->second)[i].newZ << endl;
            counter++;
            if(counter > 5) {
                break;
            }
        }
        if(counter > 5) {
            break;
        }
    }
    return 0;
}
