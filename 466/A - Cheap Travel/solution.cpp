#include <iostream>
using namespace std;
 
int main(){
    int n,m,a,b,r=0;
    cin>>n>>m>>a>>b;
    if(n>m){
        if(a<b && n%m==0){
            r=n*a;
        }
        else if(a<=b && n%m!=0){
            r=(n/m)*b+(n%m)*a;
        }
        else if(a>b && n%m!=0){
            r=(n/m+1)*b;
        }
        else if(a=b && n%m==0){
            r=(n/m)*b;
        }
    }
    else if(n<=m){
        if(n*a<=b){
            r=n*a;
        }
        else{
            r=b;
        }
    }
    cout<<r;
}