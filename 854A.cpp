#include<iostream>
using namespace std;

int main(){
	int numb;
	int numerator,denumerator;
	  
	cin>>numb;
	
	if(numb%2==1)
		numerator=numb/2;
	else
		numerator=(numb/2)-1;
		
	denumerator=(numb/2)+1;	
	
	cout<<numerator<<" "<<denumerator;
	return 0;
}
