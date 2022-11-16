#include <iostream>
using namespace std;

//Compiler version g++ 6.3.0

int main()
{
    int a,b;
    cin>>a>>b;
    if((a+b==6) || abs(a-b)==6)
    { cout<<"Love";
    }
    else{
      cout<<"Hate";
      }
      return 0;
}