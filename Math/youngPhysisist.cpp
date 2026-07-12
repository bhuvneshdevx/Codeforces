#include <iostream>
using namespace std;

int main() {

    int n;
    cin>>n;
    int a , b , c ,anet=0, bnet=0 , cnet= 0 ;
    int sum = 0 ;
    for(int i = 0; i<n; i++){
        
        cin>>a>>b>>c;
        anet += a;
        bnet += b;
        cnet += c;
         

    }
if (anet == 0 && bnet == 0 && cnet == 0) {
        cout << "YES";
    } else {
        cout << "NO";
    }
}
