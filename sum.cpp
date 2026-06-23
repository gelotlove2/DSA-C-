#include<iostream>
using namespace std;

int sum(int n){
    int sam=0;
    for(int i=0;i<=n;i++) {
    sam=sam+i;
    }
    return sam;
    
}
int main(){
int a=sum(9);
cout<<a;
}