#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;
 
int main() {
    int t,k,num=0;
    cin>>t;
    for(int i=0;i<t;i++){
        cin>>k;
        num=0;
        while(k--){
            num++;
            if(num%3==0){
                num++;
            }
            if(num%10==3){
                num++;
            }
            if(num%3==0){
                num++;
            }
        }
        cout<<num<<endl;
    }
    return 0;
}