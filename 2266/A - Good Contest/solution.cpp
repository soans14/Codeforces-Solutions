#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
 
int main() {
    int t,n,temp,min;
    cin>>t;
    for(int i=1;i<=t;i++){
        cin>>n;
        min=100;
        for(int j=1;j<=3;j++){
            cin>>temp;
            if(temp<min){
                min=temp;
            }
        }
        cout<<n-min<<endl;
    }
    return 0;
}