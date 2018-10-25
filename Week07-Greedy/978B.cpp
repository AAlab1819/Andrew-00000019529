#include<iostream>
using namespace std;

int main() {
    int n, count=0;
    string str;

    cin>>n;
    cin>>str;

    for (int i=1; i<n-1; i++) {
        if (str[i-1]=='x' && str[i]=='x' && str[i+1]=='x') {
            count++;
        }
    }

    cout<<count<<endl;

    return 0;
}
