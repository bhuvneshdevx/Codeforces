#include <iostream>
using namespace std;

int main() {

	int n ;
    cin>>n;

    int step5= n/5;
    n -= step5*5;
    int step4 = n/4;
    n -= step4*4;
    int step3= n/3;
    n -= step3*3;
    int step2= n/2;
    n -=step2*2 ;
    int step1= n/1;

    int Tsteps = step1 + step2+ step3 + step4 + step5 ;
    cout<<Tsteps<<endl;

}
