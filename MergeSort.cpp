#include <iostream>
using namespace std;

void printArray(int arr[], int n) {
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void merge(int arr[], int st, int mid, int end) {
    int temp[end - st + 1];
    int i = st;      // Left iterator
    int j = mid + 1; // Right iterator
    int k = 0;       // Temp tracker

    while(i <= mid && j <= end) {
        if(arr[i] < arr[j]) {
            temp[k] = arr[i];
            i++;
        } else {
            temp[k] = arr[j];
            j++;
        }
        k++;
    }

    while(i <= mid) {
        temp[k] = arr[i];
        i++,k++;
    }

    while(j <= end) {
        temp[k] = arr[j];
        k++,j++;
    }

    // Copy temp to original array
    for(k = 0, i = st; k < (end - st + 1); k++, i++) {
        arr[i] = temp[k];
    }
}

void mergeSort(int arr[], int st, int end) {
    if(st >= end) return;

    int mid = st + (end - st) / 2;
    mergeSort(arr, st, mid);       // Left call
    mergeSort(arr, mid + 1, end);  // Right call
    merge(arr, st, mid, end);
}

int main() {
    int arr[] = {6, 5, 8, 2, 3, 9};
    int n = sizeof(arr) / sizeof(arr[0]);

    mergeSort(arr, 0, n - 1);
    printArray(arr, n);

    return 0;
}
