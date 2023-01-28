#include<iostream>
using namespace std;
int main ()
{
    int A[10], B[10], n, i, j, k = 0;
    cout << "Enter size of array : ";
    cin >> n;
    cout << "Enter elements of array : ";
    for (i = 0; i < n; i++)
        cin >> A[i];    
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < k; j++)
        {
            if (A[i] == B[j])
                break;
        }
        if (j == k)
        {
            B[k] = A[i];
            k++;
        }
    }
    cout << "Repeated elements after deletion : ";
    for (i = 0; i < k; i++)
        cout << B[i] << " ";
    return 0;
}


// Method 2..

// C++ program to remove the
// duplicate elements from the array
// using STL in C++

// #include <bits/stdc++.h>
// using namespace std;

// // Function to remove duplicate elements
// void removeDuplicates(int arr[], int n)
// {

// 	int i;

// 	// Initialise a set
// 	// to store the array values
// 	set<int> s;

// 	// Insert the array elements
// 	// into the set
// 	for (i = 0; i < n; i++) {

// 		// insert into set
// 		s.insert(arr[i]);
// 	}

// 	set<int>::iterator it;

// 	// Print the array with duplicates removed
// 	cout << "\nAfter removing duplicates:\n";
// 	for (it = s.begin(); it != s.end(); ++it)
// 		cout << *it << ", ";
// 	cout << '\n';
// }

// // Driver code
// int main()
// {
// 	int arr[] = { 4, 2, 3, 3, 2, 4 };

// 	int n = sizeof(arr) / sizeof(arr[0]);

// 	// Print array
// 	cout << "\nBefore removing duplicates:\n";
// 	for (int i = 0; i < n; i++)
// 		cout << arr[i] << " ";

// 	// call removeDuplicates()
// 	removeDuplicates(arr, n);

// 	return 0;
// }
