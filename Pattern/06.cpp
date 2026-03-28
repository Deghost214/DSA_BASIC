#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"Enter size (n): ";
    cin>>n;

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){

            if(i < 2 || i >= n-2 || j < 2 || j >= n-2){
                cout << "* ";
            }
            else{
                cout << "  ";
            }
        }
        cout << endl;
    }

    return 0;
}