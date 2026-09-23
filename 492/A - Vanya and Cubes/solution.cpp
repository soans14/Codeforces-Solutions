#include <iostream>
 
using namespace std;
 
int main() {
    int n,i=1;
    cin>>n;
    while(n>0){
        if(n-i*(i+1)/2>=0){
            n-=i*(i+1)/2;
            i++;
        }
        else{
            break;
        }
    }
    cout<<i-1;
    return 0;
}