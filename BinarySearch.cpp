#include<iostream>
#include<vector>
using namespace std;


int BinarySearch(vector<int> arr, int target){
    int st = 0; 
    int end = arr.size()-1;
    while(st <= end){
       int mid = st + (end-st)/2;
        if(target > arr[mid]){
            st = mid +1;
        }
        else if(target < arr[mid]){
            end = mid -1;
        }
        else{
            return mid;
        }
    }
    return -1;
}
int recBinarySearch(vector<int> arr,int st,int end, int target){
   
    if(st <= end){
       int mid = st + (end-st)/2;
        if(target > arr[mid]){
            return recBinarySearch(arr,target,mid+1,end);
        }
        else if(target < arr[mid]){
            return recBinarySearch(arr,target,st,mid-1);
        }
        else{
            return mid;
        }
    }
    return -1;
}



int main()
{
    vector<int> arr1 = {-1,0,3,5,7,9};
    int target1 = 7;
    cout<<BinarySearch(arr1,target1)<<endl;
    return 0;
}