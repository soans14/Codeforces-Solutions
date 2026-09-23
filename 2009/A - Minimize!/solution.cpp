#include <iostream>
 
using namespace std;
 
int main(){
    int t,a,b,c,min;
    cin>>t;
    for(int i=1;i<=t;i++){
        cin>>a>>b;
        c=a;
        min=(c-a)+(b-c);
        for(int c=a+1;c<=b;c++){
            if((c-a)+(b-c)<min){
                min=(c-a)+(b-c);
            }
        }
        cout<<min<<endl;
    }
    return 0;
}