#include<iostream>
#include<vector>
using namespace std;

int Rotated_Sorted_Array(vector<int> A,int tar){
    int st = 0; int end = A.size()-1;
    while(st <= end){
        int mid = st + (end-st)/2;
        if (A[mid]==tar)
        {
            return mid;
        }
        if(A[st]<= A[mid]){
            if(A[st]<=tar && tar <= A[mid]){
                end = mid-1;
            }else{
                st = mid+1;
            }
        }else{
            if(A[mid]<=tar && tar<=A[end]){
                st = mid+1;
            }else{
                end = mid-1;
            }
        }
    }
    return -1;
}

int main(){
    vector<int> A1 = {4,5,6,7,0,1,2};
    int tar1 = 0;
    int result = Rotated_Sorted_Array(A1,tar1);
    cout<<result<<endl;
    return 0;
}