#include<iostream>
using namespace std;

int main(){
    int size=6;
    int smallest=INT64_MAX;
    int largest=INT64_MIN;
    int arr[size]={1,-12,56,74,45,2};
    for(int i=0;i<size;i++){
       smallest=min(arr[i],smallest);
       largest=max(arr[i],largest);
    }
    cout<<"Smallest Number : "<<smallest<<endl;
    cout<<"Largest Number  : "<<largest<<endl; 
}