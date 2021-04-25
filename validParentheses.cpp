#include<iostream>
#include<string>
using namespace std;
string getString(string s){
    string st ="";
        for(int i=1; i<s.size();i++){
        if(s[i-1] == '(' && s[i] == ')' ||
           s[i-1] == '{' && s[i] == '}' ||
           s[i-1] == '[' && s[i] == ']' ){
               //cout<<st<<i<<s[i-1]<<s[i]<<"\n";
            st = s.erase(i-1,2);
            break;
        }
        else if(i == s.size()-1){
            st = "notNull";
        }
    }
    return st;
}

bool isValid(string s){
    string str=s;
    bool isv;

    while(true){
        if(str.size()==0){
            isv = true;
            break;
        }
        else if(str.compare("notNull") == 0 || str.size() == 1){
            isv = false;
            break;
        }
        str = getString(str);
    }

    return isv;
}


int main(){

    cout <<"Enter parentheses: "<<endl;
    string value;
    cin>> value;
    cout <<"result "<<isValid(value);
    //cout<<value.length();

//    for(int i=0; i<value.size()-1;i++){
//            //cout<<i<<" "<<value[i]<<"\n";
//        if(value[i] == '(' && value[i+1] == ')'){
//                cout<< i<< i+1<<"\n";
//           cout << getString(value,i);
//        }
//    }


    return 0;
}
