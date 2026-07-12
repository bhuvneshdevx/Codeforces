#include<iostream>
using namespace std;

int main(){
    int totalbook ,redbook, greenbook, bluebook;
    int k, n;
    cin>>n>>k;

    redbook = ((2*n)+k-1)/k ;
    greenbook = ((5*n)+k-1)/k;
    bluebook = ((8*n)+k-1)/k;


    totalbook = (redbook + greenbook + bluebook);
     cout<<totalbook;

}