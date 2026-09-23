#include <iostream>
 
using namespace std;
 
int main() {
    int t,a,sum;
    char s;
    cin>>t;
    for(int i=0;i<t;i++){
        cin>>s;
        if(s=='c'||s=='o'||s=='d'||s=='e'||s=='f'||s=='r'||s=='s'){
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