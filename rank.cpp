#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    vector<int> arr(n);
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    // copy into temp
    vector<int> temp = arr;

    // sort temp
    sort(temp.begin(), temp.end());

    map<int,int> mp;
    int rank = 1;

    for(int i = 0; i < n; i++){
        if(mp.find(temp[i]) == mp.end()){  // avoid duplicate ranks
            mp[temp[i]] = rank;
            rank++;
        }
    }

    // print result
    for(int i = 0; i < n; i++){
        cout << mp[arr[i]] << " ";
    }

    return 0;
}