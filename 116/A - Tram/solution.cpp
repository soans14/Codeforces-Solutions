#include <iostream>
 
using namespace std;
 
int main() {
    int n,a,b,p=0,min=0;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a>>b;
        p-=a;
        p+=b;
        if(p>min){
            min=p;
        }
    }
    cout<<min;
    return 0;
}