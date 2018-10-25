#include<iostream>
using namespace std;
using std::max;

int main() {
    
    int n,B=0,C=0;
    
    cin>>n;
    
    int arr[n];
    for(int i=0;i<n;i++)
    {
    	cin>>arr[i];
	}
    	
    for(int i = 0; i <n; i++)
    {
        if(arr[i]<0)
		 	C+=arr[i];
		 
		else
			B+=arr[i];            
    }
    
    cout<<B-C;
    
    return 0;
}
