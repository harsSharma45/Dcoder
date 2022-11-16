#include <iostream>
#include<numeric>
using namespace std;

//Compiler version g++ 6.3.0

int main()
{
    
    
      int n;
      
      cin>>n;
      int array[n];
      for(int i=0;i<n;i++)
      { cin>>array[i];
      }
      int sum=0;
      sum=accumulate(array,array+n,sum);
      cout<<sum<<endl;
      
       
    return 0;
}