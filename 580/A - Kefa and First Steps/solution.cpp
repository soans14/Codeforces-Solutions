#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;
 
int main() {
    int t,max,count=1;
    cin>>t;
    int a[t];
    max=1;
    for(int i=0;i<t;i++){
        cin>>a[i];
    }
    for(int i=1;i<t;i++){
        if(a[i-1]<=a[i]){
            count++;
            if(count>max){
                max=count;
            }
        }
        else{
            count=1;
        }
    }
    cout<<max;
    return 0;
}