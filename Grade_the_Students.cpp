#include <iostream>
using namespace std;

//Compiler version g++ 6.3.0

int main()
{
    int testcases;
    cin>>testcases;
    while(testcases--){ 
    int a ,b ;
    cin>>a;
    cin>>b;
    if(a>70 && b>50){
      cout<<"Pass"<<endl;
      }
      else{
       cout<<"Fail"<<endl;
       }
       }
       return 0;
}