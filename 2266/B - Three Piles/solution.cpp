#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
 
int main() {
    int t;
    cin>>t;
    long long a,b,c;
    for(int i=1;i<=t;i++){
        cin>>a>>b>>c;
        if(a>=b){
            cout<<a+c-b<<endl;
        }
        else{
            cout<<max(a+c-b,b-a)<<endl;
        }
    }
    return 0;
}