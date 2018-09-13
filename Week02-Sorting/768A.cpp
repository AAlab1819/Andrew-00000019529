#include<iostream>
using namespace std;

int getNextGap(int gap)
{
    gap = (gap*10)/13;
 
    if (gap < 1)
        return 1;
        
    return gap;
}

void combSort(int a[], int n)
{
    int gap = n;
 
    bool swapped = true;
 
    while (gap != 1 || swapped == true)
    {
        gap = getNextGap(gap);
 
        swapped = false;
 
        for (int i=0; i<n-gap; i++)
        {
            if (a[i] > a[i+gap])
            {
                swap(a[i], a[i+gap]);
                swapped = true;
            }
        }
    }
}
          
int main(){
	int n,min=0,max=0,counter=0;
	
	cin>>n;
	max=n;
	int a[n];
	
	for(int i=0;i<n;i++)
	cin>>a[i];
	
	combSort(a,n);
		
	for(int i=0;i<n;i++)
		if(a[i]>a[0]&&a[i]<a[n-1])
		counter++;
	
	cout<<counter;
	
	return 0;
}
