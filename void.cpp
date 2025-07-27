#include<iostream>
using namespace std;
//functions are set of instruction to perform a specifc task .
//it is used to modularise code .
//function is used to increase readibility of code.
//it is used to use code multiple time .
//void 
//return
//parameterized
void printname(string name){
    cout<<"hey "<<name;
}
int main(){
    string  name;
    cin>>name;
    printname(name); // function call

    string  name2;
    cin>>name2;
    printname(name2);

}