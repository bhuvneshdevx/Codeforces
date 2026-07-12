#include <iostream>
using namespace std;

int main() {
    
    int a,b;
    cin>>a>>b;
    int year=0;
    int count = 0 ;
    while(a<=b){

         a *= 3;
         b *= 2;
         count += 1 ;
    }
cout<<count<<endl;
return 0 ;

}
