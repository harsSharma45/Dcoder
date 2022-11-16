#include <iostream>
#include<cmath>
using namespace std;

//Compiler version g++ 6.3.0

int main()
{
    int n;
    cin>>n;
    int sum=0;
    int original=n;
    while(n>0){
      int lastdigit=n%10;
      sum+=pow(lastdigit,3);
      n=n/10;
    }
    if(sum==original){
      cout<<"YES";
    }
    else{
      cout<<"NO";
    }
    return 0;
}