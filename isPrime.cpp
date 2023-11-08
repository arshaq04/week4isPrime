#include <iostream>

int main(){

  int number;
  std::cout << "Enter an integer: ";
  std::cin >> number;

  // test divisors of number, if a divisor other than 1 and number is
  // found, then number is not prime.
  bool isPrime = true;
  for (int i = 2; i*i <=number; i++)// to reduce the number of iterations, i*i will find out the square root number and iterate up to that number,
  // rather than iterating itself right up to the number itsel.
    if (number % i == 0) { //if the remainder is 0 then number is not a prime
      isPrime = false;
      break;
    }
     if (number <= 1) { // We exlcuded 0 and 1 otherwise the algorithm will say 0 and 1 are prime numbers.
        isPrime = false; 
  }
  if (isPrime)
    std::cout << "Prime\n";
  else
    std::cout << "Not prime\n";
  
  return 0;
}