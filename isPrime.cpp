#include <iostream>

int main(){

  int number;
  std::cout << "Enter an integer: ";
  std::cin >> number;

  // test divisors of number, if a divisor other than 1 and number is
  // found, then number is not prime.
  bool isPrime = true;
  if ( (number == 1) || (number == 0) )
    std::cout <<"Not Prime" << std::endl;
  else {
  for (int i = 2; i < number; i++) {
    if ( (number % i) == 0 ) {
      isPrime = false;
      break;
    }
  }
  if (isPrime)
    std::cout << "Prime\n";
  else
    std::cout << "Not prime\n";
  }
  return 0;
}

