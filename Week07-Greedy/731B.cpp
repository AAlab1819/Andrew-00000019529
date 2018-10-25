#include<iostream>
using namespace std;

int main() {
    int n; bool check=true;

    cin>>n;
    
    int order[n];
    
    for (int i=0; i<n; i++) {
        cin>>order[i];
    }
  
    for (int i=0; i<n; i++) {
        if (order[i]<0) {
            check=false;
        }
        order[i+1]=order[i+1]-order[i]%2;
    }
    
    if (order[n-1]%2==1) {
        check=false;
    }

    if (check==true) {
        cout<<"YES"<<endl;
    }

    else {
        cout<<"NO"<<endl;
    }

    return 0;
}

