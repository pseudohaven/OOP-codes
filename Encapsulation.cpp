//A program showing the use of Encapsulation 
/*
AUTHOR : Erick
REG NO : BSE-05-0162/2024
GROUP : 3
DATE : SUNDAY 16th FEBRUARY
*/
#include <iomanip>
#include<iostream>
using namespace std;

class BankAccount{
    private:

    string accountHolder;
    double balance;

    public : 

    BankAccount(string name, double initialBalance){
        accountHolder = name;
        balance = initialBalance : 0;
    }
    string getaccountHolder()const{
        return accountHolder;
    }
    void setaccountHolder(const string& name){
        accountHolder = name;
    }
    double getBalance()const{
        return balance;
    }
    void deposit(double amount){
        if(amount>0){
            balance += amount;
            cout<<"Deposited : "<<fixed<<setprecision(2)<<amount<<endl;
        }else{
            cout<<"Invalid amount please put the correct amount!"<<endl;
        }
    }
    bool withdraw(double amount){
        if(amount<=0){
            cout<<"Invalid withdrawal amount!"<<endl;
            return false;
        }
        if(amount > balance){
            cout<<"You have insufficient funds"<<endl;
            return false;
        }
        if(balance>amount){
            cout<<"Confirmed withdrawal of : "<<fixed<<setprecision(2)<<amount<<endl;
            return true;
        }
    }
};

int main(){
    BankAccount account("Thomas Shelby", 1000.0);
    cout<<"Account Holder : "<<account.getaccountHolder()<<endl;
    cout<<"Initial Balance : "<<fixed<<setprecision(2)<<account.getBalance()<<endl;

    account.deposit(500);
    account.withdraw(300);
    account.withdraw(1500);

    cout << "Final Balance: $" << fixed << setprecision(2) << account.getBalance() << endl;

    return 0;
}