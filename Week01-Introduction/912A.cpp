#include<iostream>
using namespace std;

int main(){
	int yeCrys,blCrys;
	int yeBall,grBall,blBall;
	int yeCrysNeeded,blCrysNeeded,totalCrysNeeded;
	
	cin>>yeCrys>>blCrys;
	cin>>yeBall>>grBall>>blBall;
	
	yeCrysNeeded=(2*yeBall+grBall)-yeCrys;
	blCrysNeeded=(3*blBall+grBall)-blCrys;
	
	totalCrysNeeded=(yeCrysNeeded<0?0:yeCrysNeeded)+(blCrysNeeded<0?0:blCrysNeeded);
	
	if(totalCrysNeeded>0)
		cout<<totalCrysNeeded;
	else
		cout<<"none";
		
	return 0;
}
