#include <iostream>
using namespace std;
 
int main() {
    int n,b=0;
    cin>>n;
    while(n>0){
        if(n>=100){
            b+=(n/100);
            n%=100;
        }
        else if(n>=20){
            b+=(n/20);
            n%=20;
        }
        else if(n>=10){
            b+=(n/10);
            n%=10;
        }
        else if(n>=5){
            b+=(n/5);
            n%=5;
        }
        else{
            n--;
            b++;
        }
    }
    cout<<b;
    return 0;
}