#include <iostream>
#include "Osoba.h" 

using namespace std;

int main()
{
    Osoba person1("Maksim", "Lavrov", 1995);
    Osoba person2("Vadim", "Lipa", 1996);

    cout << "Input LastName to search: " << endl;
    string searchLastName;
    cin >> searchLastName;


    try {
        if (person1.SearchLastName(searchLastName))
        {
            cout << "Person found!" << endl;
            cout << person1 << endl;
        }
        else if (person2.SearchLastName(searchLastName))
        {
            cout << "Person found!" << endl;
            cout << person2 << endl;
        }       
        else
        {
            throw "Not found";
        }
    }
    catch (const char* ex)
    {
        cout << ex << endl;
    }

    return 0;
}
