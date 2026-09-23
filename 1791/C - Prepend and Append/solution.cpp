#include <iostream>
using namespace std;
 
int main() {
    int t,n,a,j;
    cin>>t;
    for(int i=1;i<=t;i++){
        cin>>n;
        char s[n];
        a=n;
        cin>>s;
        j=0;
        while(s[j]!=s[n-1] && j<n){
            j++;
            n--;
            a-=2;
        }
        cout<<a<<endl;
    }
    return 0;
}