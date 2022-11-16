#include <iostream>
using namespace std;

//Compiler version g++ 6.3.0

int main()
{
    char chLower , chUpper;
    int ascii;
    cin>>chLower;
    ascii = chLower;
    ascii = ascii-32;
    chUpper = ascii;
    cout<<chUpper;
    return 0;
}