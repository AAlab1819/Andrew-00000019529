#include<iostream>
using namespace std;

void heapify(int arr1[],int arr2[], int n, int i)
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
		
        heapify(arr1,arr2, n, largest);
    }
}
 
void heapSort(int arr1[],int arr2[], int n)
{
    for (int i = n / 2 - 1; i >= 0; i--)
        heapify(arr1,arr2, n, i);
 
    for (int i=n-1; i>=0; i--)
    {
        swap(arr1[0], arr1[i]);
 		swap(arr2[0], arr2[i]);
 		 
        heapify(arr1,arr2, i, 0);
    }
}
int main(){
	int s,n;
	bool check=true;
	
	cin>>s>>n;
	
	int x[n],y[n];
	
	for(int i=0;i<n;i++)
	cin>>x[i]>>y[i];
	
	heapSort(x,y,n);
	
	for(int i=0;i<n;i++){
		if(s>x[i])
			s+=y[i];
		else{
			check=false;
			break;
		}
	}
	
	if(check)
		cout<<"YES";
	else
		cout<<"NO";
		
	return 0;
}
