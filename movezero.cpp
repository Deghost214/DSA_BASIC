#include<bits/stdc++.h>
using namespace std;
void move_zero_end(int arr[],int n){
  
    //task 1 j first is zero
    int j = -1;
    for(int i = 0; i < n; i++){
        if(arr[i]==0){
            j = i;
            break;
        }
    }
    // task 2
    if(j==-1){
        return;
    }
    //task 3
    for(int i = 0; i < n; i++){
        if(arr[i]!=0){
            swap(arr[i],arr[j]);
            j++;
        }
    }
    return;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }
    move_zero_end(arr,n);
    for(int num:arr){
        cout<<num<<" ";
    }
    return 0;
}