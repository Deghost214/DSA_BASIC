// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     int n;
//     cout<<"Enter the no of Rows: ";
//     cin>>n;

//     for(int i = 1; i <= n; i++){
//         for(int j = 1; j <= n; j++){
//             if(j == i || j == n - i + 1){
//                 cout<<"*";
//             }
//             else{
//                 cout<<" ";
//             }

//         }
//         cout<<endl;
//     }
//     return 0;
// }
//Same 
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"Enter the no of Rows: ";
    cin>>n;

    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            if(i == j || i + j == n + 1){
                cout<<"* ";
            }
            else{
                cout<<"  ";
            }
        }
        cout<<endl;
    }
    return 0;
}