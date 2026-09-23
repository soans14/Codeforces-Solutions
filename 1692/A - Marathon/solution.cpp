#include <iostream>
 
using namespace std;
 
int main() {
    int t,a[4],count;
    cin>>t;
    for(int i=0;i<t;i++){
        count=0;
        for(int i=0;i<4;i++){
            cin>>a[i];
        }
        for(int i=1;i<4;i++){
            if(a[i]>a[0]){
                count++;
            }
        }
        cout<<count<<endl;
    }
    return 0;
}