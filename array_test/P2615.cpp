#include<iostream>
using namespace std;

int n,k;
#define max 1601
int arr[max][max]; 

int main(){
    cin>>n;
    k=n*n;
    int a=0,b=n/2;
    arr[a][b]=1;
    for(int i=2;i<=k;i++){
        if(a==0&&b!=n-1){
            a=n-1;
            b=b+1;
        }
        else if(a!=0&&b==n-1){
            a=a-1;
            b=0;
        }
        else if(a==0&&b==n-1){
            a=1;
        }
        else if(a!=0&&b!=n-1){
            if(arr[a-1][b+1]==0){
                a=a-1;
                b=b+1;
            }
            else {
                a=a+1;
            }
        }
        arr[a][b]=i;
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<arr[i][j]<<' ';
        }
        cout<<endl;
    }
    return 0;
}