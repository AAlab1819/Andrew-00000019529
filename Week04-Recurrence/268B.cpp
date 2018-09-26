#include<iostream>
using namespace std;

int buttons(int n,int trial,int pos,int choice)
{
	if(pos==n)
	return trial;
	
	else if(choice!=1)
	return buttons(n,(trial+1)+pos,pos,choice-1);

	else if(choice==1)
	return buttons(n,trial+1,pos+1,n-(pos+1));
}

int main(){
	int n,trial;
	cin>>n;
	trial=buttons(n,0,0,n);
	cout<<trial;
}
