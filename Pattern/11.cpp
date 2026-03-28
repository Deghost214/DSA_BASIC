#include<bits/stdc++.h>
using namespace std;

int main(){
    // Code Here..
    int n;
    cout<<"Enter the no of Rows:";
    cin>>n;
    int mid = n/2+1;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            if(j==1 && i<=mid ||i==1 && j>=mid|| i==mid||j==mid||(j==n && i>=mid)||(i==n && j<=mid)){
                cout<<"* ";
            }
            else {
                cout<< "  ";
            }
        }
        cout<<endl;
    }

    return 0;
}