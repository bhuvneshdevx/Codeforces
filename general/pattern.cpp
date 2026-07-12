#include<iostream>
using namespace std;

int main(){

    int n;
    cin>>n;
    int v;
    
    for( int i = 0; i<n; i++){
             for(int j = 1; j<n; j++){
                v = i + 1;
                cout<<v;
            }        
            cout<<endl;
    }

}