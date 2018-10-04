#include<bits/stdc++.h>
using namespace std;

int main() {
    map <string, int> database;

	int n;
	
	cin>>n;
	 
	string username[n];
	bool check[n];
  
    for (int i=0;i<n;i++) {
      
        cin>>username[i];
       
        if (database[username[i]]==0) {	
            database[username[i]]++;
            check[i]=true;
        }
        
        else {
            username[i]=username[i]+to_string(database[username[i]++]);
            check[i]=false;
        }
    }
	
	for (int i=0;i<n;i++) {
      	
      	if(check[i]){
			cout<<"OK";
      	}
        else {
            cout<<username[i];
        }
        cout<<endl;
    }
    return 0;
}
