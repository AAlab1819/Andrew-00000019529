#include<iostream>
using namespace std;

int main(){
	int n,p,q,counter=0;
	
	cin>>n;
	bool check[n];
	
	for(int i=0;i<n;i++)
		check[i]=false;
	
	cin>>p;
	int a[p];
	
	for(int i=0;i<p;i++){
		cin>>a[i];
		check[a[i]-1]=true;
	}
	
	cin>>q;
	int b[q];
	
	for(int i=0;i<q;i++){
		cin>>b[i];
		check[b[i]-1]=true;
	}
	
	for(int i=0;i<n;i++)
		if(check[i])
			counter++;
	
	if(counter==n)
		cout<<"I become the guy.";
	else
		cout<<"Oh, my keyboard!";
}
