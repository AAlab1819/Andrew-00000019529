#include <bits/stdc++.h>

using namespace std;

int main() {
  int n;
  
  cin >> n;
  
  vector<int> p(n), deg(n),leaves(n);
  
  for (int i = 1; i < n; i++){
    cin >> p[i];
    deg[--p[i]]++;
  }
    
  for (int i = 0; i < n; i++) {
    if (deg[i] == 0) {
      leaves[p[i]]++;
    }
  }
  
  for (int i = 0; i < n; i++) {
    if (deg[i] > 0 && leaves[i] < 3) {
      	cout<<"NO";
      	break;
    }
    else if(i==n-1){
		cout<<"YES";	
	}
  }
    return 0;
}
