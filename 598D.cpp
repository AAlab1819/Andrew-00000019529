#include<iostream>
#include<string.h>
using namespace std;

int pic=0;
bool checked[1000][1000];

void count(string wall[], int x, int y, int n,int m)
{	
	if (checked[x][y]==false&&x>=0&&x<=m&&y>=0&&y<=n){
		checked[x][y]=true;
		if(wall[x][y]=='*')
			return;
		else{
			if(wall[x+1][y]=='*')pic++;
			if(wall[x-1][y]=='*')pic++;	
			if(wall[x][y+1]=='*')pic++;	
			if(wall[x][y-1]=='*')pic++;
		}	
		count(wall,x+1,y,n,m);
		count(wall,x-1,y,n,m);
		count(wall,x,y+1,n,m);	
		count(wall,x,y-1,n,m);
	}
}

void reset(int n, int m)
{
	for(int j=0;j<n;j++)
		for(int k=0;k<m;k++)
			checked[j][k]=false;
	pic=0;
}

int main()
{
	int n,m,k;
	
	cin>>n>>m>>k;
	
	int x[k],y[k];
	string wall[n];
	
	for(int i=0;i<n;i++)
		cin>>wall[i];
	
	for(int i=0;i<k;i++)
		cin>>x[i]>>y[i];
	
	for(int i=0;i<k;i++){
		count(wall,x[i]-1,y[i]-1,n,m);
		cout<<pic<<endl;
		reset(n,m);
	}
}
