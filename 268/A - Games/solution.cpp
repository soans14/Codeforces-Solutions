#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;
 
int main() {
    int t,count=0;
    cin>>t;
    int h[t],g[t];
    for(int i=0;i<t;i++){
        cin>>h[i]>>g[i];
    }
    for(int i=0;i<t;i++){
        for(int j=0;j<t;j++){
            if(h[i]==g[j]){
                count++;
            }
        }
    }
    cout<<count;
    return 0;
}