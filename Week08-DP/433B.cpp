#include<iostream>
using namespace std;

void heapify(int arr[], int n, int i) 
{ 
    int largest = i; 
    int l = 2*i + 1; 
    int r = 2*i + 2;
   
    if (l < n && arr[l] > arr[largest]) 
        largest = l; 
  
    if (r < n && arr[r] > arr[largest]) 
        largest = r; 
  
    if (largest != i) 
    { 
        swap(arr[i], arr[largest]); 
  
        heapify(arr, n, largest); 
    } 
} 
  
void heapSort(int arr[], int n) 
{  
    for (int i = n / 2 - 1; i >= 0; i--) 
        heapify(arr, n, i); 
  
    for (int i=n-1; i>=0; i--) 
    { 
        swap(arr[0], arr[i]); 
  
        heapify(arr, i, 0); 
    } 
} 

int main()
{
	int nStone,nQuestion,type,l,r;
	
	cin>>nStone;
	
	int stone[nStone],sortedStone[nStone];
	
	for (int i=0;i<nStone;i++)
	{
		cin>>stone[i];
		sortedStone[i]=stone[i];
	}
	
	heapSort(sortedStone,nStone);
	
	cin>>nQuestion;
	
	int sum[nStone];
	
	for(int i=0;i<nQuestion;i++)
	{
		sum[i]=0;
		cin>>type>>l>>r;
		l--;
		r--;
		
		if(type==1)
		{
			for(int j=l;j<=r;j++)
			{
				sum[i]=sum[i]+stone[j];	
			}
		}
		else
		{
			for(int j=l;j<=r;j++)
			{
				sum[i]=sum[i]+sortedStone[j];	
			}
		}
	}
	
	for(int i=0;i<nQuestion;i++)
	{
		cout<<sum[i]<<endl;
	}
	return 0;
}
