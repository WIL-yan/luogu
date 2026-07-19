#include<bits/stdc++.h>
using namespace std;


int n;
char op;
string s;
int main(){
    cin>>n;
    cin.ignore();
    while(n--){
        getline(cin,s);
        if(s.front()=='a'){
            op='+';
            s.erase(0,2);
        }
        if(s.front()=='b'){
            op='-';
            s.erase(0,2);
        }
        if(s.front()=='c'){
            op='*';
            s.erase(0,2);
        }
        size_t pos=-1;
        pos=s.find(' ');
        string a=s.substr(0,pos);
        string b=s.substr(pos+1);
        int a_int=stoi(a);
        int b_int=stoi(b);
        int c_int;
        if(op=='+') c_int=a_int+b_int;
        else if(op=='-') c_int=a_int-b_int;
        else if(op=='*') c_int=a_int*b_int;
        string c=to_string(c_int);
        string ss=a+op+b+'='+c;
        cout<<ss<<endl<<ss.length()<<endl;
    }
    return 0;
}