#include<bits/stdc++.h>
using namespace std;

int main(){
    // Code Here..
    int n;
    cout<<"Enter the number of Rows: ";
    cin>>n;
    for(int i = 1; i <= n; i++){
        
        for(int j = i; j < n+i; j++){
            if(i%2!=0){
                cout<< "1" << " ";
            }
            else cout<< "0" << " ";
            
        }
        cout<<endl;
    }

    return 0;
}


