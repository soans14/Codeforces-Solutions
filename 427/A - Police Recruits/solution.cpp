#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;
 
int main() {
    int n,p=0,ans=0,temp;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>temp;
        if(temp<0){
            if(p==0){
                ans++;
            }
            else{
                p--;
            }
        }
        else{
            p+=temp;
        }
    }
    cout<<ans;
    return 0;
}