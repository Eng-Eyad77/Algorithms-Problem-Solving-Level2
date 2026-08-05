/* 
Write a Program to print all perfect numbers from 1 to N
input: 
500

output:
6
28
496
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


void PrintPerfectNumbersFrom1ToN(int Number)
{
    
   for(int i = 1; i < Number; i++)
   {
    if(isPerfectNumber(i))
    {
        cout << i << endl;
    }
      
   }
       
    
}

int main()
{
    PrintPerfectNumbersFrom1ToN(ReadPositiveNumber("Please Enter a Positive Number: "));
    return 0;
}


