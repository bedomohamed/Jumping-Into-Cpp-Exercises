#include<iostream>
#include<string>
using namespace std;
// 99 bottles of beer on the wall, 99 bottles of beer. 
// Take one down, pass it around, 98 bottles of beer on the wall...


int main(){
    int i = 99;
    while(i > 0){
       cout<< i << " bottles of beer on the wall, "<< i << " bottles of beer"<<endl;
       cout<< "Take one down, pass it around, " << --i << " bottles of beer on the wall..."<<endl;
    }
}
