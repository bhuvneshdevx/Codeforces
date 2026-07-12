#include<iostream>
using namespace std;

int main(){
    int clear = 0;
    int t, p;
    cin>>p>>t;
    int arr[50];
    for(int i = 0; i<p; i++){
    
      cin>>arr[i];
    }
 for(int i=0 ; i<p; i++){
       
      if((arr[i]>=arr[t-1])&&(arr[i]>0)){
        clear = clear+ 1;
      }
 }
  cout<<clear;
}