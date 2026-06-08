#include<bits/stdc++.h>
using namespace std;

string s;
int cnt[26]={0};
int maxn,minn;
bool isp(int x){
    if(x<=1) return 0;
    if(x==2) return 1;
    for(int i=2;i*i<=x;i++){
        if(x%i==0) return 0;
    }
    return 1;
}


int main(){
    cin>>s;
    for(int i=0;i<s.length();i++){
        cnt[s[i]-'a']++;
    }
    maxn=0;
    minn=101;
    for(int i=0;i<26;i++){
        if(cnt[i]>0){
            if(cnt[i]>maxn) maxn=cnt[i];
            if(cnt[i]<minn) minn=cnt[i];
        }
    }
    int k=maxn-minn;
    if(isp(k)) cout<<"Lucky Word"<<endl<<k;
    else cout<<"No Answer"<<endl<<0;
    return 0;
}