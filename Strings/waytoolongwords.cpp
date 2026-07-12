#include<iostream>
#include<string>
using namespace std ;

int main(){

    int t;
    cin >> t;

    while (t--) {
    string str;
    cin >> str;

        int n = str.size();

        if (n < 11) {
            cout << str << endl;
        } else {
            cout << str[0] ;
           cout << (n - 2);
            cout<< str[n - 1] << endl;
        } 
    }
    return 0;
}