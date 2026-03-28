#include<bits/stdc++.h>
using namespace std;
//Main Function Starting point.
int main(){
    string sen;
    getline(cin, sen);
    for(char &ch:sen){
        ch=tolower(ch);
    }
    set<char> s;
    for(char ch:sen){
        if(ch>='a' && ch<='z'){
            s.insert(ch);
        }
    }
    vector<char> res;
    for(char ch='a';ch<='z';ch++){
        if(s.find(ch)==s.end()){
            res.push_back(ch);
        }
    }
    for(char ch:res){
        cout<< ch <<"";
    }
    return 0;
}