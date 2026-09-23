#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;
 
int main() {
    int t,a,b,c;
    cin>>t;
    for(int i=0;i<t;i++){
        cin>>a>>b>>c;
        if(a+b==c){
            cout<<'+'<<endl;
        }
        else{
            cout<<'-'<<endl;
        }
    }
    return 0;
}