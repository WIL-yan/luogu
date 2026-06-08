#include<iostream>
#include<string>
using namespace std;
string s;
string number[10][5] = {
    {"XXX", "X.X", "X.X", "X.X", "XXX"}, 
    {"..X", "..X", "..X", "..X", "..X"}, 
    {"XXX", "..X", "XXX", "X..", "XXX"}, 
    {"XXX", "..X", "XXX", "..X", "XXX"}, 
    {"X.X", "X.X", "XXX", "..X", "..X"}, 
    {"XXX", "X..", "XXX", "..X", "XXX"}, 
    {"XXX", "X..", "XXX", "X.X", "XXX"}, 
    {"XXX", "..X", "..X", "..X", "..X"}, 
    {"XXX", "X.X", "XXX", "X.X", "XXX"}, 
    {"XXX", "X.X", "XXX", "..X", "XXX"}  
};

int main(){
    int a;
    cin>>a;
    cin>>s;
    for(int i=0;i<5;i++){
        for(int j=0;j<a;j++){
            if(j!=0) cout<<'.';
            cout<<number[s[j]-'0'][i];
        }
        cout<<endl;
    }
    return 0;
}