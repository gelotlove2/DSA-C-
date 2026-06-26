#include<iostream>
using namespace std;
int ncr(int n,int r){
    int i=1,nfact=1,rfact=1,nrfact=1;

    for( i=1;i<=n;i++){
        nfact=nfact*i;
    }
    for( i=1;i<=r;i++){
        rfact=rfact*i;
    }
    for( i=1;i<=(n-r);i++){
        nrfact=nrfact*i;
    }
    int ncr=nfact/(rfact*(nrfact));
    return ncr;


}
int main(){
    cout<<ncr(99,2);
}