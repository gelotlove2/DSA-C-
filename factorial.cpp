#include<iostream>
using namespace std;

int factorial(int x){
    int fact=1;
    for(int i=1;i<=x;i++){
        fact=fact*i;

    }
    return fact;
}
int main(){
    cout<<factorial(7);
}