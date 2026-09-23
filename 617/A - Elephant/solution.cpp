#include <iostream>
using namespace std;
 
int main(){
    int num,count=0;
    cin>>num;
    while(num>5){
        num-=5;
        count++;
    }
    cout<<count+1;
}