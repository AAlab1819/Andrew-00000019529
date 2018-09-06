#include<iostream>
using namespace std;

int main(){
	int nStu,stuInTeam,rating[100],counter=0;
	bool index[100];
	
	cin>>nStu>>stuInTeam;
	
	for(int i=0;i<nStu;i++)
	cin>>rating[i];
	
	for(int i=0;i<nStu;i++)
	{
		index[i]=true;
		for(int j=i-1;j>=0;j--)
		{
			if(rating[i]==rating[j])
				index[i]=false;
		}
			if(index[i]==true)
				counter++;
	}

	if(counter==stuInTeam)
	{
		cout<<"Yes"<<endl;
		for(int i=0;i<nStu;i++)
		{
			if(index[i]==true)
			cout<<i+1<<" ";
		}
	}
	else
		cout<<"No";
		
	return 0;
}
