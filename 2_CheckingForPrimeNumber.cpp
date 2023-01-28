#include<iostream>
using namespace std;


bool check_prime(int);

int main() {

  int n;

  cout << "Enter a positive  integer: ";
  cin >> n;

  if (check_prime(n))
    cout << n << " is a prime number.";
  else
    cout << n << " is not a prime number.";

  return 0;
}

bool check_prime(int n) {
  bool is_prime = true;

  // 0 and 1 are not prime numbers
  if (n == 0 || n == 1) {
    is_prime = false;
  }

  for (int i = 2; i <= n / 2; ++i) {
    if (n % i == 0) {
      is_prime = false;
      break;
    }
  }

  return is_prime;
}

// (2) Another method...
// #include <iostream>
// using namespace std;
// void isPrime(int n) {
//    int i, flag = 0;
//    for(i=2; i<=n/2; ++i) {
//       if(n%i==0) {
//          flag=1;
//          break;
//       }
//    }
//    if (flag==0)
//    cout<<n<<" is a prime number"<<endl;
//    else
//    cout<<n<<" is not a prime number"<<endl;
// }
// int main() {
//    isPrime(17);
//    isPrime(20);
//    return 0;
// }