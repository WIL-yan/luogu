#include<bits/stdc++.h>
using namespace std;

string s,temp;
int pos;

void cout_number(){
    int sum=0;
    for(int i=pos-1;i>=0;i--){
        sum=temp[i]-'0'+sum*10;
    }
    if(pos){
        cout<<sum;
    }
    sum=0;
    pos=0;
}

int main(){
    cin>>s;
    for(int i=0;i<s.length();i++){
        if(s[i]>='0'&&s[i]<='9'){
            temp[pos++]+=s[i];
        }
        else if(s[i]=='/'||s[i]=='%'||s[i]=='.'){
            cout_number();
            cout<<s[i];
        }
    }
    cout_number();
    return 0;
}
