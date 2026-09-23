#include <iostream>
using namespace std;
 
int main(){
    char str[101];
    cin>>str;
    int count=0;
    for(int i=0;str[i]!='\0';i++){
        count++;
        for(int j=0;j<i;j++){
            if(str[j]==str[i]){
                count--;
                break;
            }
        }
    }
    if(count%2==0){
        cout<<"CHAT WITH HER!";
    }
    else{
        cout<<"IGNORE HIM!";
    }
}