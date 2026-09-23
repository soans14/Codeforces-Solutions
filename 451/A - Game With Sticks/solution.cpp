#include <iostream>
 
using namespace std;
 
int main() {
    int n,m,temp=0;
    cin>>n>>m;
    while(n*m>0){
        n--;
        m--;
        temp++;
    }
    if(temp%2==0){
        cout<<"Malvika";
    }
    else{
        cout<<"Akshat";
    }
    return 0;
}