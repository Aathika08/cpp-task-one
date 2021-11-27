/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    int age;
    cout<<"Enter  Your age:";
    cin>>age;
    switch(age>=18)
    {
        case 1:cout<<"You Are Eligible";
        break;
        default:
        case 2:cout<<"You Are  Not Eligible";
    }
    return 0;
}
