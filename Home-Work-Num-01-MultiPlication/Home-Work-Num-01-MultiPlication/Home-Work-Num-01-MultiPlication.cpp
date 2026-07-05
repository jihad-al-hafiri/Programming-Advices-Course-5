
#include <iostream>
#include <string>
using namespace std;




void PrintTableHeader(string Message)
{
    cout << "\n-------------------------------------------------------------------------------------\n";

    cout << "\n\n\t\t\t" << Message << "\n\n";
    for (int i = 1; i <= 10; i++)
    {
        cout << "\t" << i;
    }
    cout << "\n-------------------------------------------------------------------------------------\n";

}

string CoulmPrint(int i)
{
    if (i < 10)
    {
        return "  |";
    }
    else
    {
        return " |";
    }
}

void PrintMultiPlicationTable()
{
    PrintTableHeader("MultiPlication Table From 1 To 10");
    for (int  i = 1; i <= 10; i++)
    {
        cout << " " << i << CoulmPrint(i);
        for (int j = 1; j <= 10; j++)
        {
            cout << "\t" << i * j;
        }
        cout << endl;
    }
}


int main()
{
    PrintMultiPlicationTable();
}
