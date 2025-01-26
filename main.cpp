//A c++ program to determine age for voting
/*
    Author :ERICK
    Reg no :BSE-05-0162/2024
    Group  :BSE Group 3
    School :ZETECH UNIVERSITY
*/

#include <iostream>
#include<string>
using namespace std;

int main(){
string name;
int age;
    
    //prompt the user to enter his/her name
    cout << "Input your name : ";
    cin >> name;
    cout<< "Enter your age : ";
    cin >> age;
    if (age<18){
    cout<< "Error! You must be above 18 years to vote"<< endl;
    }else{
    cout<< "You can proceed with the voting" <<endl;
    }
    return 0;
}
