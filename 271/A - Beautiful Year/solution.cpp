#include <iostream>
using namespace std;
 
int main(){
    int year,temp,ans=0,n1,n2,n3,n4;
    cin>>year;
    year++;
    temp=year;
    n1=temp%10;
    temp/=10;
    n2=temp%10;
    temp/=10;
    n3=temp%10;
    temp/=10;
    n4=temp;
    while(n1==n2||n1==n3||n1==n4||n2==n3||n2==n4||n3==n4){
        year++;
        temp=year;
        n1=temp%10;
        temp/=10;
        n2=temp%10;
        temp/=10;
        n3=temp%10;
        temp/=10;
        n4=temp;
    }
    cout<<year;
    return 0;
}