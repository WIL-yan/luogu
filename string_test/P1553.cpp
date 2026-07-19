#include<bits/stdc++.h>
#include<cstring>
using namespace std;

string s;

void solve_int(string a){
    while(a.back()=='0'&&a.size()>1){
        a.pop_back();
    }
    reverse(a.begin(),a.end());
    cout<<a;
}
void solve_double(string b){
    while(b.front()=='0'&&b.size()>1){
        b.erase(b.begin());
    }
    reverse(b.begin(),b.end());
    cout<<b;
}

int main(){
    cin>>s;
    int pos;
    pos=s.find('.');
    if(pos!=string::npos){
        string a=s.substr(0,pos);
        string b=s.substr(pos+1);
        solve_int(a);
        cout<<'.';
        solve_double(b);
        return 0;
    }
    pos=s.find('/');
    if(pos!=string::npos){
        string a=s.substr(0,pos);
        string b=s.substr(pos+1);
        solve_int(a);
        cout<<'/';
        solve_int(b);
        return 0;
    }
    pos=s.find('%');
    if(pos!=string::npos){
        string a=s.substr(0,pos);
        string b=s.substr(pos+1);
        solve_int(a);
        cout<<'%';
        return 0;
    }
    solve_int(s);
    return 0;
}