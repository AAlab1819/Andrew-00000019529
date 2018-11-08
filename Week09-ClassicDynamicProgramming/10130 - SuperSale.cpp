#include<bits/stdc++.h>
using namespace std;

int main() {
    int test;
    cin>>test;
    while (test>0) {
    
        int limt, nObjects, nPeople;
        int totalValue=0;
        int dp[31]={0};
       
        cin>>nObjects;
        int weight[nObjects], value[nObjects];
        
        for (int i=0; i<nObjects; i++) {
            cin>>value[i]>>weight[i];
        }
        for (int i=0; i<nObjects; i++) {
           
            for (int j=30; j>=0; j--) {
                if (weight[i]<=j && dp[j]<dp[j-weight[i]]+value[i]) {
                    dp[j]=dp[j-weight[i]]+value[i];
                }
            }
        }

        cin>>nPeople;
        for (int i=0; i<nPeople; i++) {
            cin>>limt;
    
            totalValue=totalValue+dp[limt];
        }
    
        cout<<totalValue<<endl;
   
        test--;
    }
    return 0;
}

