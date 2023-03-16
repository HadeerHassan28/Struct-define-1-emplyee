#include <iostream>
#include<string>

using namespace std;
//struct user 1
struct Address{
    string city;
    int st_no,b_no;
};

struct Employee {
    int code,age;
    string name;
    float gross,bouns,tax;
    Address emp_add;
};
int main()
{
    float netSal=0.0;
    Employee emp1;
    //input:
    cout << "Enter the emplyoee data" << endl;
    cout << "\n please enter the code" << endl;
    cin >>emp1.code;

    cout << "\n please enter the name" << endl;
    cin >>emp1.name;

    cout << "\n please enter the age" << endl;
    cin >>emp1.age;

    cout << "\n please enter street number" << endl;
    cin >> emp1.emp_add.st_no;

    cout << "\n please enter building number" << endl;
    cin >>emp1.emp_add.b_no;

    cout << "\n please enter the city" << endl;
    cin >>emp1.emp_add.city;

    cout << "\n please enter the gross" << endl;
    cin >>emp1.gross;

    cout << "\n please enter the bouns" << endl;
    cin >>emp1.bouns;

    cout << "\n please enter the tax" << endl;
    cin >>emp1.tax;

    netSal= emp1.gross + emp1.bouns  - emp1.tax;

    cout << "\n the code is" << emp1.code << endl;
    cout << "\n the name is" << emp1.name << endl;
    cout << "\n the age is" << emp1.age << endl;
    cout << "\n the street number is" << emp1.emp_add.st_no << endl;
    cout << "\n the building number is" << emp1.emp_add.b_no<< endl;
    cout << "\n the the city is" << emp1.emp_add.city << endl;
    cout << "\n the gross is" << emp1.gross << endl;
    cout << "\n the bouns is" << emp1.gross << endl;
    cout << "\n the tax is" << emp1.tax << endl;
    cout <<"\n the salary is" << netSal << endl;

    return 0;
}
