#include<iostream>
#include<cmath>
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

int main(){
	int l,n;
	float diff,d; //diff jarak antar lampu, d jangkauan penerangan
	
	cin>>n>>l;
	
	float a[n];
	
	for(int i=0;i<n;i++)
		cin>>a[i];
	
	heapSort(a,n);
	
	if(a[0]>(l-a[n-1]))
		d=a[0];
	else
		d=(l-a[n-1]);
	
	for(int i=0;i<n-1;i++)
	{
		diff=(abs(a[i]-a[i+1]))/2.0;
		
		if(diff>d)
			d=diff;
	}
		
	cout<<d;
}
