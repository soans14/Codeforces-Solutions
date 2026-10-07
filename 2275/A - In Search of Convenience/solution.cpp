#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
 
int main() {
    long long t,x,y,r;
    cin>>t;
    for(int i=1;i<=t;i++){
        cin>>x>>y>>r;
        cout<<x<<" "<<y+r<<endl;
    }
    return 0;
}