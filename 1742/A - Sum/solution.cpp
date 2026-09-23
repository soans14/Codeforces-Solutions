#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;
 
int main() {
    int n,a,b,c;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a>>b>>c;
        if(a==(b+c)||b==(a+c)||c==a+b){
            cout<<"YES
";
        }
        else{
            cout<<"NO
";
        }
    }
    return 0;
}