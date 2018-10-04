#include<iostream>
using namespace std;

int main() {
    int n, depth, check;
    int groups=0;
   
    cin>>n;
    
    int superior[n+1];
    
    for (int i=1; i<n+1; i++) {
        cin>>superior[i];
    }
    
    for (int i=1; i<n+1; i++) {
		if(superior[i]==1)
			continue;
			
        depth=1;
        check=superior[i];
        
        while(check!=-1) {
           	depth++;
           	check=superior[check];
       	}
        
        groups=max(depth, groups);
    }
    cout<<groups<<endl;

    return 0;
}
