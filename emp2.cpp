#include <iostream>
#include <string>
using namespace std;

class employee {
private:
    int empid;
    string name;
    float basicsalary;
    float bonus;
    float totalsalary;

public:
    // Default constructor
    employee() {
        empid = 0;
        name = "Unknown";
        basicsalary = 0;
        bonus = 0;
        totalsalary = 0;
    }

    // Parameterized constructor
    employee(int id, string n, float salary, float b) {
        empid = id;
        name = n;
        basicsalary = salary;
        bonus = b;
        calculatetotalSalary();
    }

    void calculatetotalSalary() {
        totalsalary = basicsalary + bonus;
    }

    void display() {
        cout << "Employee ID: " << empid << endl;
        cout << "Name: " << name << endl;
        cout << "Basic Salary: " << basicsalary << endl;
        cout << "Bonus: " << bonus << endl;
        cout << "Total Salary: " << totalsalary << endl;
    }
};

int main() {
    // using default constructor
    employee emp1;
    cout << "default constructor-employee 1:" << endl;
    emp1.display();

    cout << "\n--------------" << endl;

    // using parameterized constructor
    employee emp2(101, "john", 50000, 10000);
    cout << "parameterized constructor - employee 2:" << endl;
    emp2.display();

    cout << "\n--------------" << endl;

   int id;
   string name;
   float salary, bonus;
   cout << "enter emp id: ";
   cin >> id;
   cin.ignore();
   cout << "enter the name: ";
   getline(cin,name);
   cout << "enter basic salary: ";
   cin >> salary;
   cout << "enter bonus: ";
   cin >> bonus;
   
   employee emp3(id, name, salary, bonus);
   cout << "\nemployee 3 details: " << endl;
   emp3.display();
   
   cout << "\n--------------" << endl;
   
   return 0;
}




















