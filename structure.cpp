//A BANKING SYSTEM - CUSTOMER MANAGEMENT CODE INCLUDING USE OF A STRUCTURE
/*
AUTHOR: Erick
REG NO: Bse-05-0162/2024
GROUP : BSE Group 3
*/
#include<iostream>
using namespace std;

struct Customer{
    string name;
    double AccountBalance;
    string Lasttransaction;
};
void displayCustomer(const Customer &c){
    cout << "Name: " << c.name << endl;
    cout << "Account Balance: " << c.AccountBalance << endl;
    cout << "Last Transaction: " << c.Lasttransaction << endl;
}
int main(){
    Customer c1;
    c1.name = "Erick Kabiru";
    Customer customer1 = {"Erick Kabiru", 1000.00, "Deposit"};
    Customer customer2 = {"James lee", 2000.00, "Withdrawal"};

    displayCustomer(customer1);
    displayCustomer(customer2);

    Customer customer3;

    cout<<"Enter the name of the customer: ";
    cin>>customer3.name;

    cout<<"Enter the account balance of the customer: ";
    cin>>customer3.AccountBalance;
    cin.ignore();

    cout<<"Enter the last transaction of the customer: ";
    getline(cin, customer3.Lasttransaction);

    displayCustomer(customer3);

    return 0;
}