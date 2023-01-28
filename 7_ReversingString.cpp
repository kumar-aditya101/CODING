#include <iostream>
#include <string.h>
using namespace std;

// function definition of the revstr()
void revstr(char *str1) {
    // declare variable
    int i, len, temp;
    len = strlen(str1);

    // use strlen() to get the length of str string
    // use or loop to iterate the string
    for(i = 0;i < len/2;i++)
    {
        //temp variable use to temporary hold the string
        temp = str1[i];
        str1[i] = str1[len - i - 1];
        str1[len - i - 1] = temp;
    }
}
int main()
{
    char str[50] = "Priyanka";
    cout << "Before reversing the string: " << str;

    revstr(str);
    
    cout<< "\nAfter reversing the string: " << str;
    return 0;
}



// Mathod 2..We can also reverse the string using some build in functions:-

// #include <iostream>
// #include <string.h>
// #include <algorithm>
// using namespace std;

// int main()
// {
//     // declare string
//     string str = "PrepInsta";
    
//     cout << "Before Reversal: " << str;
    
//     // reverse which is defined under the header file 
//     // algorithm #include
//     // str.begin() denotes the start 
//     // and str.end() denotes end
    
//     reverse(str.begin(), str.end());
    
//     cout << "\nAfter Reversal: "<< str;
    
//     return 0;
// }


