#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
 
int main() {
    int t,n,count;
    cin>>t;
    string s;
    for(int i=0;i<t;i++){
        cin>>n>>s;
        count=0;
        int a[26]={0};
        for(int i=0;i<n;i++){
            a[s[i]-'A']++;
            if(a[s[i]-'A']==1){
                count+=2;
            }
            else{
                count++;
            }
        }
        cout<<count<<endl;
    }
    return 0;
}