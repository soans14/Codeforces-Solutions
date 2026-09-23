#include <iostream>
using namespace std;
 
int main(){
    int k,n,w,b,cost=0;
    cin>>k>>n>>w;
    for(int i=1;i<=w;i++){
        cost+=i*k;
    }
    if(cost>n){
        b=cost-n;
    }
    else{
        b=0;
    }
    cout<<b;
}