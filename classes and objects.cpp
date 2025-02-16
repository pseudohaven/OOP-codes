// A program to display the use classes and objects
/*
AUTHOR : Erick
REG NO : BSE-05-0162/2024
GROUP  : BSE GROUP 3
SCHOOL : Zetech univerzity
*/
#include<iostream>
using namespace std;

class car{
public :
string brand;
string model;
float price;
int milage;

car(string b, string m, float p, int mi){
brand = b;
model = m;
price = p;
milage = mi;
}

void display(){
cout<<"brand : "<<brand<<endl;
cout<<"model : "<<model<<endl;
cout<<"price : "<<price<<endl;
cout<<"milage : "<<milage<<"miles"<<endl;
}
void drive(int distance) {
milage += distance;
cout << "the updated Mileage is : " << milage << " miles" << endl;
}
};

int main(){
car mycar("Toyota", "Corolla", 20000, 5000);
cout<<"The car details are : "<<endl;
mycar.display();

cout<<"Driving the car for 150 miles,";
mycar.drive(150);

cout<<"Driving the car for 300 miles,";
mycar.drive(300);

return 0;
}