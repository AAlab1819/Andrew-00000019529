#include<iostream>
using namespace std;

int main(){
	int k,l,m,n,d,poorDragon=0;
	
	cin>>k>>l>>m>>n>>d;
	
	if(k!=1&&l!=1&&m!=1&&n!=1)
	{
		for(int i=0;i<d;i++)
			if(i%k==0||i%l==0||i%m==0||i%n==0)
				poorDragon++;
	}
	else
		poorDragon=d;
		
	cout<<poorDragon;
}
