#include <iostream>
#include "Osoba.h" 

using namespace std;

int main()
{
    const int array = 3;
    Osoba people[array] =
    {
        Osoba("Petrov", "Maksim", 1985),
        Osoba("Lavrov", "Danil",1999),
        Osoba("Hhhchc","Jjcjc",1954)
    };
    Osoba g;

    string Name1;
    cout << "Input LastName" << endl;
    cin >> Name1;
    int Year1;
    cout << "Input Year" << endl;
    cin >> Year1;

    bool found = false;
    for (int i = 0; i < array; i++)
    {
        if (people[i].GetLastName() == Name1 && people[i].GetYear() == Year1)
        {
            found = true;
            cout << "Found people" << endl;
            cout << people[i];
        }
    }
    if (!found)
    {
        cout << "Not found" << endl;
    }




    
    
    
 

    return 0;
}
