#include<iostream>
using namespace std;

void shellSort(int arr[], int n)
{
    for (int gap = n/2; gap > 0; gap /= 2)
    {
        for (int i = gap; i < n; i += 1)
        {
            int temp = arr[i];
            int j;            
            for (j = i; j >= gap && arr[j - gap] > temp; j -= gap)
                arr[j] = arr[j - gap];
             
            arr[j] = temp;
        }
    }
}

int main(){
	int n,counter=0;
	
	cin>>n;
	
	int id[n];
	
	for(int i=0;i<n;i++)
	cin>>id[i];
	
	shellSort(id,n);
	
	if(n!=1)
	for(int i=0;i<n;i++){
		if(id[i]==id[i+1]&&id[i]==id[i+2]){
			counter=-1;
			break;
		}
		else if(id[i]==id[i+1]){
			counter++;
			i++;
		}
	}
	cout<<counter;
	
	return 0;
}
