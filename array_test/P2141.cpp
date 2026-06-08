#include <iostream>
using namespace std;

#define max 10001
int n;
int arr[101];
int number[max];
int mount=0;
int count=0;

bool ex(int x){
    for(int t=0;t<mount;t++){
        if(x==number[t]){
            return 1;
        }
    }
    return 0;
}

int main(){
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            int k=arr[i]+arr[j];
            if(ex(k)==0){
                number[mount++]=k;
            }
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<mount;j++){
            if(arr[i]==number[j]){
                count++;
            }
        }
    }
    cout<<count;
    return 0;
}