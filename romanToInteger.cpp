#include <iostream>
#include <string>
#include <unordered_map>
#include <bits/stdc++.h>
using namespace std;

int romanToInt(string s) {
unordered_map<char, int> romVale;
        romVale['I']=1;
        romVale['V']=5;
        romVale['X']=10;
        romVale['L']=50;
        romVale['C']=100;
        romVale['D']=500;
        romVale['M']=1000;

        int result=0, n = s.size();

        for(int i=0; i<n; i++) {
            if(i<n && romVale[s[i]] < romVale[s[i+1]]) {
                result= result+ romVale[s[i+1]]-romVale[s[i]];
                i=i+1;
            }else {
                result+= romVale[s[i]];
            }
        }
        return result;

    }
int main(){
    string value;
    //cout<< "Enter a Roman String"<< endl;
    //cin>>value;
    //int vv=romanToInt(value);
    //cout<< vv <<endl;

    int v = 0,m=0;

    if(m==0){
        v -= 1;
        cout<< v;
        if(v> -20) m=1;
    }else{
        v += 20;
        cout<< v;
        if(v < -2 ) m=0;
    }

    return 0;
}
