
#include <iostream>
#include <string>
using namespace std;


enum enShowMenu {Addition = 1 , MultiPlication = 2 , Division = 3 , Subtraction
 = 4 , Exit = 5};



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

void PrintAdditionTable()
{
    PrintTableHeader("Addition Table From 1 To 10");
    for (int i = 1; i <= 10; i++)
    {
        cout << " " << i << CoulmPrint(i);
        for (int j = 1; j <= 10; j++)
        {
            cout << "\t" << i + j;
        }
        cout << endl;
    }
}

void PrintDivisionTable()
{
    PrintTableHeader("Division Table From 1 To 10");
    for (int i = 1; i <= 10; i++)
    {
        cout << " " << i << CoulmPrint(i);
        for (int j = 1; j <= 10; j++)
        {
            cout << "\t" << i / j;
        }
        cout << endl;
    }
}

void PrintSubtractionTable()
{
    PrintTableHeader("Subtraction Table From 1 To 10");
    for (int i = 1; i <= 10; i++)
    {
        cout << " " << i << CoulmPrint(i);
        for (int j = 1; j <= 10; j++)
        {
            cout << "\t" << i - j;
        }
        cout << endl;
    }
}

enShowMenu PrintAllTables(enShowMenu ShowMenu)
{
    if (ShowMenu == enShowMenu::Addition)
    {
        PrintAdditionTable();
    }
    else if (ShowMenu == enShowMenu::Division)
    {
        PrintDivisionTable();
    }
    else if (ShowMenu == enShowMenu::MultiPlication)
    {
        PrintMultiPlicationTable();
    }
    else if (ShowMenu == enShowMenu::Subtraction)
    {
        PrintSubtractionTable();
    }
    else
    {
        cout << "We'r Not Have Menu\n";
    }
    return ShowMenu;
}


int ReadPositiveNumber(string Message)
{
    int Number = 0;
    do
    {
        cout << Message << endl;
        cin >> Number;
    } while (Number <= 0);

    return Number;
}



void ShoeTableMenu()
{
    int UserChoice = 0;
    do
    {
        system("cls");
        system("color 0A");
        cout << "\n=============================================================================================\n";
        cout << "   ( 1 ) Addition Table\n";
        cout << "   ( 2 ) Subtraction Table\n";
        cout << "   ( 3 ) Multiplication Table\n";
        cout << "   ( 4 ) Division Table\n";
        cout << "   ( 5 ) Print All Tables\n";
        cout << "   ( 5 ) Exit\n";
        cout << "\n=============================================================================================\n";
        
    
        cout << "\n=============================================================================================\n";
        UserChoice = (enShowMenu)ReadPositiveNumber("   Please Enter a Positive Number");

        if (UserChoice >= 1 && UserChoice <= 4)
        {
            PrintAllTables((enShowMenu)UserChoice);
            system("pause");
        }
        else if (UserChoice == 5)
        {
            cout << "\nExiting Program... Goodbye!\n";
        }
        else
        {
            cout << "\nInvalid Choice! Please try again.\n";
            system("color 4F");
            cout << "\a";
        }
        
    } while (UserChoice != 5);
}






int main()
{
    ShoeTableMenu();
}
