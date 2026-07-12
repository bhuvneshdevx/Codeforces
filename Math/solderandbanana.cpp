#include<iostream>
using namespace std ;

int main(){
    int cost;
    int k, n, w ;

    cin>>k>>n>>w ;

    cost = k*((w*(1 + w))/2);
    if(n>=cost){
         cout<<0;
    }else{
    int borrow = cost - n ;
    cout<<borrow;
    }  
}