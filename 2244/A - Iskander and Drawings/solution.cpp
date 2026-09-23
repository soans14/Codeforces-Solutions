#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;
 
int main() {
    int t,n,max,count;
    string s;
    cin>>t;
    for(int i=0;i<t;i++){
        cin>>n>>s;
        max=count=0;
        for(int i=0;i<n;i++){
            if(s[i]=='#'){
                count++;
            }
            else if(s[i]=='*'){
                count=0;
            }
            if(count>=max){
                max=count;
            }
        }
        if(max%2==0){
            cout<<max/2<<endl;
        }
        else{
            cout<<max/2+1<<endl;
        }
    }
    return 0;
}