#include<iostream>
#include<string>
#include<vector>
using namespace std;

string longestPrifix(string s1,string s2){
    string prefix;
    for(int i=0,j=0; i<s1.size() && j<s2.size(); i++,j++){
        if(s1[i] != s2[j]){
            break;
        }
        prefix.push_back(s1[i]);
    }
    return prefix;
}

string longestCommonPrefix(vector<string>& strs) {
    if(strs.size() == 0) return "";
    if(strs.size() == 1) return strs[0];
    string pre = strs[0];
    for(int i=1;i<strs.size();i++){
        if(pre.empty()==1){
            break;
        }else{
            pre = longestPrifix(pre,strs[i]);
        }
    }
    return pre;
}


int main(){

    string arr[] = {"geeksfor","geeks","geezer","geek","geejjd"};
    vector<string> str;
//    int s = sizeof(arr) / sizeof(arr[0]);
//    for(int i=0;i<s;i++){
//        //str.push_back(arr[i]);
//    }
    str.push_back("hello");
    cout<<longestCommonPrefix(str);





    return 0;
}
