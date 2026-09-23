#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;
 
int main() {
    int n,k,time=0,count=0;
    cin>>n>>k;
   
    for(int i=1;i<=n;i++){
        time+=5*i;
        if(time+k<=240){
            count++;
            if(i==n){
                cout<<count;
            }
        }
        else{
            cout<<count;
            break;
        }
    }
    return 0;
}