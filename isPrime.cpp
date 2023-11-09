#include <iostream>
using namespace std;

int main()
{

  int number;
  cout << "Enter an integer: ";
  cin >> number;

  // test divisors of number, if a divisor other than 1 and number is
  // found, then number is not prime.

  bool isPrime = true;
  if (number >= 2){
    for (int i = 2; i < number; i++){
      if (number % i == 0){
        isPrime = false;
        break;
      }
      if (i == number - 1){
        isPrime = true;
      }
    }
  } else {
    isPrime = false;
    }
    if (isPrime) {
    cout << number << " is prime\n";
  } else {
    cout << number << " is not prime\n";
  }

  return 0;
}