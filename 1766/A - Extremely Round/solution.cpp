#include <iostream>
using namespace std;
 
int main() {
    int t,a;
    unsigned int n;
    cin>>t;
    for(int i=1;i<=t;i++){
        cin>>n;
        a=0;
        if(n<10){
            a=n;
        }
        else if(n>=10 && n<=100){
            a=9+(n/10);
        }
        else if(n>100 && n<=1000){
            a=18+(n/100);
        }
        else if(n>1000 && n<=10000){
            a=27+(n/1000);
        }
        else if(n>10000 && n<=100000){
            a=36+(n/10000);
        }
        else{
            a=45+(n/100000);
        }
        cout<<a<<endl;
    }
    return 0;
}