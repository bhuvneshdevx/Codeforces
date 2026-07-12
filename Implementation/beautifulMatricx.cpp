#include <iostream>
using namespace std;

int main(){

    int matrics[5][5];

    for(int i = 0 ; i<5 ; i++)
    {

        for(int z = 0 ; z<5 ; i++)
        {
            cin>>matrics[i][z];
            if((matrics[i][z])==1)
            {
                int output;
                output = (i - 2)+(z-2);
                cout<<output;

            }
        }

    }
    return 0;


}