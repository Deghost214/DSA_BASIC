#include<bits/stdc++.h>
using namespace std;
int cnt_element(int arr[],int n){
    
    int maxiLeft = arr[0];
    int cnt = 1;
    for(int i = 1; i < n; i++){
        if(arr[i]>maxiLeft){
            cnt++;
            maxiLeft=arr[i];
        }
    }
    return cnt;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }
    int ans=cnt_element(arr,n);
    cout<< ans;
    return 0;
}