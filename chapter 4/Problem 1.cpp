//Ask the user for two user's ages, and indicate who is older; behave differently if both are over 100

#include<iostream>
using namespace std;

int main(){
    int user1;
    int user2;
    cout << "Enter user 1 age: " << endl;
    cin >> user1;
    cout << "Ener user 2 age: " << endl;
    cin >> user2;
    if (user1 > 100 && user2 > 100){
        cout << "You are old" << endl;
    }
    else{
        cout << "You are young" <<endl;
    }
}
