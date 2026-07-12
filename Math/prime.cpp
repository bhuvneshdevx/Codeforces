#include<iostream>
using namespace std;

int main(){

    int n;
    cin>>n;
    int i ;

    for(i= 2; i*i<n; i++){

         if(n%i== 0){
            cout<<"the number is not prime"<<endl;
        
         }else{ 
            cout<<"the number is prime"<<endl;
         }
}
    


}