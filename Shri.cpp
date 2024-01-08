// Check number is pallinodrome or not ?

// #include <iostream>
// using namespace std;

// int main() {
//     int num, originalNum, reversedNum = 0, remainder;
//     cout << "Enter an integer: ";
//     cin >> num;
//     originalNum = num;  
//     while (num > 0) {
//         remainder = num % 10;
//         reversedNum = reversedNum * 10 + remainder;
//         num /= 10;
//     }
//     if (originalNum == reversedNum) {
//         cout << originalNum << " is a palindrome." << endl;
//     } else {
//         cout << originalNum << " is not a palindrome." << endl;
//     }
//     return 0;
// }




// print prime number between particular range ?

// #include <iostream>
// using namespace std;

// bool isPrime(int n) {
//   for (int i = 2; i * i <= n; i++) {
//     if (n % i == 0) {
//       return false;
//     }
//   }
//   return true;
// }

// int main() {
//   int n1, n2;
//   cout << "Enter two numbers: ";
//   cin >> n1 >> n2;
//   cout << "Prime numbers between " << n1 << " and " << n2 << " are: ";
//   for (int i = n1; i <= n2; i++) {
//     if (isPrime(i)) {
//       cout << i << " ";
//     }
//   }
//   cout << endl;
//   return 0;
// }




// check number is armstrong or not ?

// #include <iostream>
// using namespace std;

// int main() {
//     int num, originalNum, remainder, result = 0;
//     cout << "Enter a three-digit integer: ";
//     cin >> num;
//     originalNum = num;

//     while (originalNum != 0) {
//         remainder = originalNum % 10;
//         result += remainder * remainder * remainder;   
//         originalNum /= 10;
//     }
//     if (result == num)
//         cout << num << " is an Armstrong number.";
//     else
//         cout << num << " is not an Armstrong number.";

//     return 0;
// }




// write code to find factorial using recursive function ?

// #include <iostream>
// using namespace std;

// int factorial(int n) {
//     return (n == 0 || n == 1) ? 1 : n * factorial(n - 1);
// }

// int main() {
//     int num;
//     cout << "Enter a non-negative integer: ";
//     cin >> num;
//     cout << "Factorial of " << num << " is: " << factorial(num) << endl;
//     return 0;
// }




// sum of N natural number using do whike look ?

// #include <iostream>
// using namespace std;

// int main() {
//   int n, sum = 0, i = 1;
//   cout << "Enter a positive integer: ";
//   cin >> n;
//   do {
//     sum += i;
//     i++;
//   } while (i <= n);
//   cout << "The sum of first " << n << " natural numbers is " << sum << endl;
//   return 0;
// }




// write a code to find compound interest using function and without any inbuilt function ?


// #include <iostream>
// #include <cmath>
// using namespace std;

// double calculateCompoundInterest(double principal, double rate, int time) {
//     const int n = 12; 
//     double amount = principal * pow(1 + rate / (n * 100), n * time);
//     return amount - principal;
// }

// int main() {
//     double principal, rate;
//     int time;
//     cout << "Enter principal amount: ";
//     cin >> principal;
//     cout << "Enter annual interest rate (in percentage): ";
//     cin >> rate;
//     cout << "Enter time in years: ";
//     cin >> time;
//     double compoundInterest = calculateCompoundInterest(principal, rate, time);
//     cout << "Compound Interest: " << compoundInterest << endl;
//     return 0;
// }





// c++ program to find LCM ?

// #include <iostream>
// using namespace std;

// int gcd(int a, int b) {
//     while (b != 0) {
//         int temp = b;
//         b = a % b;
//         a = temp;
//     }
//     return a;
// }
// int lcm(int a, int b) {
//     return (a * b) / gcd(a, b);
// }
// int main() {
//     int num1, num2;
//     cout << "Enter two integers: ";
//     cin >> num1 >> num2;
//     cout << "LCM: " << lcm(num1, num2) << endl;
//     return 0;
// }





// c++ program to finonacci series ?

// #include <iostream>
// using namespace std;

// int main() {
//   int n, a = 0, b = 1, c;
//   cout << "Enter the number of terms: ";
//   cin >> n;
//   cout << "The Fibonacci series is: ";
//   for (int i = 0; i < n; i++) {
//     c = a + b;
//     cout << c << " ";
//     a = b;
//     b = c;
//   }
//   return 0;
// }