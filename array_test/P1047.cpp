#include<iostream>
using namespace std;

#define max 10001

int arr[max];

int main(){
    int total,i;
    cin>>total>>i;
    for(int j=0;j<=total;j++){
        arr[j]=1;
    }
    while(i--){
        int a,b;
        cin>>a>>b;
        for(int j=a;j<=b;j++){
            arr[j]=0;
        }
    }
    int count=0;
    for(int j=0;j<=total;j++){
        if(arr[j]) ++count;
    }
    cout<<count;
}

