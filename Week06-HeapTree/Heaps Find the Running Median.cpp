#include<iostream> 
using namespace std; 

void heapify(float arr[], int n, int i) 
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
   
void heapSort(float arr[], int n) 
{ 
    for (int i = n / 2 - 1; i >= 0; i--) 
        heapify(arr, n, i); 
  
    for (int i=n-1; i>=0; i--) 
    { 
        swap(arr[0], arr[i]); 
  
        heapify(arr, i, 0); 
    } 
} 

void printArray(float arr[], int n) 
{ 
    for (int i=0; i<n; ++i) 
        cout << arr[i] << endl; 
    cout << "\n"; 
} 

int main()
{
	int n;
	
	cin>>n;
	
	float numb[n],med[n];
	
	for(int i=0;i<n;i++)
	{
		cin>>numb[i];
		heapSort(numb,i+1);
		
		if((i+1)%2==1)
			med[i]=numb[i/2];
		else
			med[i]=(numb[i/2]+numb[(i/2)+1])/2;
	}
	cout<<endl;
	printArray(med,n);
}
  

