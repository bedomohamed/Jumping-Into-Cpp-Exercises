#include<iostream>
#include<string>

using namespace std;

int add(int x, int y);
int substract(int x, int y);
int divsion(int x, int y);
int multiplication(int x, int y);

int main(){
    int num1;
    int num2;
    char operation;
    cout<< "Please enter the first number: " << endl;
    cin  >> num1;
    cout << "Please enter the second number: " << endl;
    cin >> num2;
    cout << "Please enter the operation you want to apply: " << endl;
    getline(cin, operation, '\n');

    if(operation == '+'){
        cout << add(num1, num2) << endl;
    } 
    if(operation == '-'){
        cout << substract(num1, num2) <<endl;
    } 
    if(operation == '*'){
        cout << multiplication(num1, num2) <<endl;
    } 
    if(operation == '/'){
        cout << divsion(num1, num2) <<endl;
    }

}


int add(int x, int y){
    return x + y;
}    
int substract(int x, int y){
    return x - y;
}
int divsion(int x, int y){
    return x / y;
}
int multiplication(int x, int y){
    return x * y;   
}
