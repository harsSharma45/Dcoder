#include <iostream>
using namespace std;

//Compiler version g++ 6.3.0

int main()
{
    int testcases;
    cin>>testcases;
    while(testcases--)
    {
      int a,b;
      cin>>a>>b;
      for(int i=1;i<10;i++)
      {
        if((a*i)%b==0)
          cout<<i;
          break;
      }
    }
    
    return 0;
    
}