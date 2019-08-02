#include<iostream>
using namespace std;

int main(){
    int password1; 
    int password2;
    int password;
    cout << "Please enter your first password: "<<endl;
    cin >> password1;
    cout << "Please enter your second password: "<<endl;
    cin  >> password2;

    cout << "Enter any password to enter one or two: " << endl;
    cin >>password;
    if (password1 == password || password2 == password){
        cout << "Access allowed" <<endl;
    } else{
        cout << "Access Denied" << endl;
    }
}
