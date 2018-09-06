#include<iostream>
using namespace std;

int main(){
	int nStu,stuInTeam,rating[100],counter1=0,counter2=0;
	bool index[100];
	
	cin>>nStu>>stuInTeam;
	
	for(int i=0;i<nStu;i++)
	cin>>rating[i];
	
	for(int i=0;i<nStu;i++)
	{
		index[i]=true;
		for(int j=i-1;j>=0;j--){
			if(rating[i]==rating[j])
				index[i]=false;
		}
			if(index[i]==true)
				counter1++;
	}

	if(counter1>=stuInTeam){
		cout<<"Yes"<<endl;
		for(int i=0;i<nStu;i++){
			if(index[i]==true){
				cout<<i+1<<" ";
				counter2++;
			}
			if(counter2==stuInTeam)
				break;
		}
	}
	else
		cout<<"No";
		
	return 0;
}
