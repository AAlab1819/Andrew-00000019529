#include<iostream>
using namespace std;

int main(){
	int numb;
	int numerator,denumerator;
	float diff;
	  
	cin>>numb;
	
	if(numb%2==1)
		diff=0.5;
	else
		diff=1;	
		
	numerator=(numb/2)-diff;
	denumerator=(numb/2)+diff;	
	
	cout<<numerator<<" "<<denumerator;
	
	return 0;
}
