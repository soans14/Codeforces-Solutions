#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;
 
int main() {
    int t,count,n,temp,d;
    string s;
    cin>>t;
    for(int i=0;i<t;i++){
        cin>>n;
        s=to_string(n);
        count=0;
        temp=1;
        for(int i=0;i<s.size();i++){
            if(s[i]!='0'){
                count++;
            }
        }
        cout<<count<<endl;
        while(n>0){
            d=n%10;
            if(d!=0){
                cout<<d*temp<<" ";
            }
            temp*=10;
            n/=10;
        }
        cout<<endl;
        
    }
    return 0;
}