#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;
 
int main() {
    int t;
    string s;
    cin>>t;
    char temp;
    for(int i=0;i<t;i++){
        cin>>s;
        if(s=="abc"||s=="cba"||s=="bac"||s=="acb"){
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