#include <iostream>
using namespace std;

void Palindrome(int n)
{
    int rev = 0;
    int r;
    int m = n;

    //write a loop to find reverse of a number
    //check it is a palindrome

    while (n > 0)
    {
        r = n % 10;
        n = n / 10;
        rev = rev * 10 + r;
    }

    if (rev == m) {
        cout << "palindrome" << endl;
    }
    else {
        cout << "not a palindrome" << endl;


    }

}
int main()
{
 
    Palindrome(12121);
    Palindrome(12345);
}

/*
if n = 12321 & m = 12321

Iteration 1:   r = 1        n = 1232     rev = 1
Iteration 2:   r = 2        n = 123      rev = 12
Iteration 3:   r = 3        n = 12       rev = 123
Iteration 4:   r = 2        n = 1        rev = 1232
Iteration 5:   r = 1        n = 0        rev = 12321
*/
