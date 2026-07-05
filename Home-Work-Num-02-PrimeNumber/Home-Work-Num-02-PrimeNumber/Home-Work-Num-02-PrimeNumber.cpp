

#include <iostream>
#include <string>
using namespace std;

enum enPrimeNotPrime{Prime = 1 , NotPrime =2};

int ReadPositiveNumber(string Message)
{
    int Number = 0;
	do
	{
		cout << Message << endl;
		cin >> Number;
	} while (Number <=0);

	return Number;

}


enPrimeNotPrime CheckPrime(int Number)
{
    int M = round(Number / 2);
    for (int Counter = 2; Counter <= M; Counter++)
    {
        if (Number % Counter == 0)
            return enPrimeNotPrime::NotPrime;

    }
    return enPrimeNotPrime::Prime;
}

void PrintNumberType(int Number)
{
    for (int i = 1; i <= Number; i++)
    {
        if(CheckPrime(i) == enPrimeNotPrime::Prime)
            {
         
                cout << " " << i << "  The Number Is Prime" << endl;
               

             }
    }
    
}


int main()
{
    PrintNumberType(ReadPositiveNumber("Please Enter a Positive Number"));

}
