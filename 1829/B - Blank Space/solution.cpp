#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;
 
int main() {
    int t,n,temp,max;
    cin>>t;
    for(int i=0;i<t;i++){
        cin>>n;
        max=0;
        temp=0;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
            if(a[i]==0){
                temp++;
                if(temp>max){
                    max=temp;
                }
            }
            else{
                temp=0;
            }
        }
        cout<<max<<endl;
    }
    return 0;
}