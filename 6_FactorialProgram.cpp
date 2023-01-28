#include <iostream>
using namespace std;

int main() {
    int n;
    long factorial = 1.0;

    cout << "Enter a positive integer: ";
    cin >> n;

    if (n < 0)
        cout << "Error! Factorial of a negative number doesn't exist.";
    else {
        for(int i = 1; i <= n; ++i) {
            factorial *= i;
        }
        cout << "Factorial of " << n << " = " << factorial;    
    }

    return 0;
}
// Factorial of a number:
// 4! = 4*3*2*1 = 24  
// 6! = 6*5*4*3*2*1 = 720 


// Factorial of a number using Function..

// C++ program to find
// factorial of given number
// #include <iostream>
// using namespace std;

// // Function to find factorial
// // of given number
// unsigned int factorial(unsigned int n)
// {
// 	if (n == 0 || n == 1)
// 		return 1;
// 	return n * factorial(n - 1);
// }

// // Driver code
// int main()
// {
// 	int num = 5;
// 	cout << "Factorial of "
// 		<< num << " is " << factorial(num) << endl;
// 	return 0;
// }

