#include <iostream>
using namespace std;

//Compiler version g++ 6.3.0

int main()
{
    int n;
    int fact=1;
    cin>>n;
    
    for(int i=1;i<(n+1);i++)
    fact=fact*i;
    cout<<fact;
    return 0;
}