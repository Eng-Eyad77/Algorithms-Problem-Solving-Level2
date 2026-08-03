/* 
Write a Program to check if the number is perfect or not?
Note: Perfect number = sum(all divisors)
ex: 28 = 1 + 2 + 4 + 7 + 14
6 = 1 + 2 + 3

Input: 
28 
12

output:
28 is perfect
12 is not perfect
*/
#include <iostream>
#include <cmath>
using namespace std;

// enum enPerfectNumberOrNot { Perfect = 1, NotPerfect = 2};

float ReadPositiveNumber(string Message)
{
    int Number = 0;

    do
    {
        cout << Message << endl;
        cin >> Number;
    } while (Number <= 0);

    return Number;
}


bool isPerfectNumber(int Number)
{
   int sum = 0;

   for(int i = 1; i < Number; i++)
   {
    if(Number % i == 0)
    sum += i;   
   }

    return Number == sum;
    
}


void PrintResult(int Number)
{
    
    if(isPerfectNumber(Number))
        cout << Number << " is Perfect Number" << endl;
        else
        cout << Number << " is Not a Perfect Number" << endl;
    
}

int main()
{
    PrintResult(ReadPositiveNumber("Please Enter a Positive Number: "));
    return 0;
}