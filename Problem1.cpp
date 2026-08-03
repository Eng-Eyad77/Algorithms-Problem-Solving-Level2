/* 
Write a Program to print the multiplication table from 1 to 10
*/

#include <iostream>
#include <cmath>
using namespace std;



void PrintTableHeader()
{
    cout << "\n\n\t\t\tMultiplication Table From 1 to 10\n\n" << endl;
    cout << "\t";

    for(int i = 1; i <= 10; i++)
    {
        cout << i << "\t";
    }
    cout << "\n____________________________________________________________________________________\n";
}

string ColumSperator(int i)
{
    if(i < 10)
    return "  |";
    else
    return " |";
}

void PrintMultiplicationTable()
{
    PrintTableHeader();

    for(int i = 1; i <= 10; i++)
  {
        cout  << " " << i << ColumSperator(i) << "\t";
    for(int j = 1; j <= 10; j++)
    {
        cout << j * i << "\t";
    }
    cout << endl;
  }

}


int main() {
    PrintMultiplicationTable();
    
    return 0;
}