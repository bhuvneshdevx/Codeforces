#include<iostream>
using namespace std;

int main(){
    
    int n , h ;
    cin>>n>>h;
    int width = 0;
    int a;
    
    for(int i=0;  i<n; i++){
            cin>>a;
         if(a>h){
            width = width + 2;
        }else{
            width = width + 1;
        }
    }
    cout<<width;
    return 0;

}