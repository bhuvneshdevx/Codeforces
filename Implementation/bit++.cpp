#include<iostream>
using namespace std;

int main(){

    int n ;
    cin>>n;
      string c ;
       int x = 0 ;
      for(int i = 0; i<n; i++){
      cin>>c;
   
     if(c[1]=='+'){
       x++ ;
      
    }else{
        x--;
    }
}
    cout<<x<<endl;
return 0;

}