#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;
    int a,ans = 0;
    cin>>a;
    unordered_map<string,int> mp;
    mp["sun"]=0;
    mp["mon"]=1;
    mp["tue"]=2;
    mp["wed"]=3;
    mp["thu"]=4;
    mp["fri"]=5;
    mp["sat"]=6;
    int start = mp[s.substr(0,3)];
    int first_sunday = (7-start)%7;
    if(first_sunday<a) ans=1+(a-first_sunday-1)/7;
    cout<< ans;
    return 0;
}