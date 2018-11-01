#include<iostream>
#include<math.h>
using namespace std;

void heapify(float arr1[],float arr2[],float arr3[], int n, int i) 
{ 
    int largest = i; 
    int l = 2*i + 1; 
    int r = 2*i + 2;
   
    if (l < n && arr1[l] > arr1[largest]) 
        largest = l; 
  
    if (r < n && arr1[r] > arr1[largest]) 
        largest = r; 
  
    if (largest != i) 
    { 
        swap(arr1[i], arr1[largest]); 
  		swap(arr2[i], arr2[largest]);
  		swap(arr3[i], arr3[largest]); 
        heapify(arr1,arr2,arr3, n, largest); 
    } 
} 
  
void heapSort(float arr1[],float arr2[],float arr3[], int n) 
{  
    for (int i = n / 2 - 1; i >= 0; i--) 
        heapify(arr1,arr2,arr3, n, i); 
  
    for (int i=n-1; i>=0; i--) 
    { 
        swap(arr1[0], arr1[i]); 
  		swap(arr2[0], arr2[i]);
  		swap(arr3[0], arr3[i]);
        heapify(arr1,arr2,arr3, i, 0); 
    } 
} 
void printArray(float arr[], int n) 
{ 
    for (int i=0; i<n; ++i) 
        cout << arr[i] << " "; 
    cout << "\n"; 
} 

int main()
{
	int n,L,literLeft;
	
	cin>>n>>L;
	
	literLeft=L;
	
	float cost[n],ratio[n],literPerBottle[n],totalCost=0;
	
	for(int i=0;i<n;i++)
	{
		cin>>cost[i];
		literPerBottle[i]=pow(2,i);
		ratio[i]=cost[i]/literPerBottle[i]; //reverse ratio
	}
	
	heapSort(ratio,literPerBottle,cost,n);
	
	for(int i=0;literLeft>0;i++)
	{
		totalCost+=cost[i];
		literLeft-=literPerBottle[i];
		
		if(literLeft>=literPerBottle[i])
			i--;
	}
	
	cout<<totalCost;
}
