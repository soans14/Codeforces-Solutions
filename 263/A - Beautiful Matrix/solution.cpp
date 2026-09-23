#include <iostream>
using namespace std;
 
int main(){
    int a[5][5],m,n;
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            cin>>a[i][j];
        }
    }
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            if(a[i][j]==1){
                m=i;
                n=j;
            }
        }
    }
    if(m<2){
        m=2-m;
    }
    else if(m>2){
        m=m-2;
    }
    else if(m==2){
        m=0;
    }
    if(n<2){
        n=2-n;
    }
    else if(n>2){
        n=n-2;
    }
    else if(n==2){
        n=0;
    }
    cout<<m+n;
}