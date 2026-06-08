#include<iostream>

using namespace std;
#define max 8
int rate[max];
int number[max];
int main(){
    int i;
    cin>>i;
    for(int j=0;j<7;j++){
        cin>>number[j];
        rate[j]=0;
    }
    int temp;
    while(i--){
        int pos=0;
        for(int j=0;j<7;j++){
            cin>>temp;
            for(int k=0;k<7;k++){
                if(number[k]==temp){
                    ++pos;
                }
            }
        }
        ++rate[7-pos];
    }
    for(int j=0;j<7;j++){
        cout<<rate[j]<<' ';
    }
    return 0;
}