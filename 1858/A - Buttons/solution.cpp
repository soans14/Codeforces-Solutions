#include <iostream>
using namespace std;
 
int main() {
    int t,a,b,c;
    cin>>t;
    for(int i=1;i<=t;i++){
        cin>>a>>b>>c;
        if(a+c>b+c){
            cout<<"First
";
        }
        else if(a+c<b+c){
            cout<<"Second
";
        }
        else{
            if(c%2==1){
                cout<<"First
";
            }
            else{
                cout<<"Second
";
            }
        }
    }
    return 0;
}