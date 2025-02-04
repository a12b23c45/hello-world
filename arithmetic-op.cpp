// section-8
//arithmetic operator 

#include <iostream>
using namespace std;

int main() {
     int num1{100}; 
     int num2{200};
     
     cout << num1 << "+" << num2 << "=" << num1+ num2 << endl;//other way
      cout << "sum of 2 numbers= " << num1+num2 << endl;
      
      int result{0};//another way using result
      result=num1*num2; 
       cout << "multiplication of 2 numbers: " << result << endl;
       cout << "division of 2 numbers: " << num1/num2 << endl;
       cout << "modulo of 2 numbers: " << num1%num2 << endl; //remainder
       cout << "=====" << endl;
       
       num1=10;
       num2=3;
       result=num1%num2;
       cout << "remainder is: " << result << endl;
       
       cout << 5/10 << endl;
       cout << 5.0/10.0 << endl;
      
     
    return 0;
}