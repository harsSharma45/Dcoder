#include <iostream>
#include <string>
#include <map>
using namespace std;

map<string, int> reference;

string ones[] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine", "ten"};

void storeOnes(){
    for(int i = 0; i < 11; i++){
        reference[ones[i]] = i;
    }
}

int main(){
    //set up
    storeOnes();
    string test = "onetwothreetwofour";
    string buffer;


    for(int i = 0; i < test.length(); i++){
        buffer.push_back(test.at(i));
        map<string, int>::iterator it = reference.find(buffer);
        if(it != reference.end()){
            cout << (*it).second;
            buffer = "";
        }
    }
    cout << endl << endl;
    system("pause");
    return 0;
}