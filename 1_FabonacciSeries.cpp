#include<iostream>
using namespace std;


    void fib(int n){
        int f[n];
        int i;
        f[0]=0;
        f[1]=1;
        for(i=2;i<n;i++){
            f[i]= f[i-1] + f[i-2];
        }
         for(i=0;i<n;i++){
            cout<<f[i]<<" ";
         }
    }

int main() {
    int n=10;
    fib(n);
    getchar();
    return 0;
}


// The fibonacci series contains numbers in which each term is the sum of the previous two terms. This creates the following integer sequence −

// 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144, 233, 377…….
// The recurrence relation that defines the fibonacci numbers is as follows −

// F(n) = F(n-1) + F(n-2) F(0)=0 F(1)=1
