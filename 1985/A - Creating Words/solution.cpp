#include <iostream>
 
#include <string>
 
using namespace std;
 
int main() {
    int t;
    string a,b;
    cin>>t;
    char temp;
    for(int i=0;i<t;i++){
        cin>>a>>b;
        temp=a[0];
        a[0]=b[0];
        b[0]=temp;
        cout<<a<<' '<<b<<endl;
    }
    return 0;
}