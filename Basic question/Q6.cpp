#include <iostream>
using namespace std;

int main() {
    int num1, num2;
    cout << "Enter the number1 = ";
    cin>>num1;
    cout << "Enter the number2 = ";
    cin>>num2;
    num1 = num1 + num2;
    num2 = num1 - num2;
    num1 = num1 - num2;
    cout<<"num1:"<<num1<<endl;
    cout<<"num2:"<<num2;
}
