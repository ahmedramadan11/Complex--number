#include <iostream>
#include "Complex.h"


using namespace std;

int main()
{
    Complex number1;
    Complex number2;
    cin>>number1>>number2;
    cout<<"number1 = "<<number1<<endl<<"number2 = "<<number2<<endl;
    cout<<"number1+number2 = "<<(number1+number2)<<endl;
    cout<<"number1-number2 = "<<(number1-number2)<<endl;
    cout<<"number1*number2 = "<<(number1*number2)<<endl;
    if(number1==number2)
    {
        cout<<"number1==number2"<<endl;
    }
    else
        cout<<"number1!=number2"<<endl;


    return 0;
}
