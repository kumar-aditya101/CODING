// C++ program for the above approach
#include <bits/stdc++.h>
using namespace std;

// Function to check whether
// the string is palindrome
string isPalindrome(string S)
{
	// Stores the reverse of the
	// string S
	string P = S;

	// Reverse the string P
	reverse(P.begin(), P.end());

	// If S is equal to P
	if (S == P) {
		// Return "Yes"
		return "Yes";
	}
	// Otherwise
	else {
		// return "No"
		return "No";
	}
}

// Driver Code
int main()
{
	string S = "ABCDCBA";
	cout << isPalindrome(S);

	return 0;
}


//(2) Another Method...

// #include <iostream>
// using namespace std;

// int main(){
//     char string1[20];
//     int i, length;
//     int flag = 0;
    
//     cout << "Enter a string: "; cin >> string1;
    
//     length = strlen(string1);
    
//     for(i=0;i < length ;i++){
//         if(string1[i] != string1[length-i-1]){
//             flag = 1;
//             break;
//            }
//         }
    
//     if (flag) {
//         cout << string1 << " is not a palindrome" << endl; 
//     }    
//     else {
//         cout << string1 << " is a palindrome" << endl; 
//     }
//     system("pause");
//     return 0;
// }