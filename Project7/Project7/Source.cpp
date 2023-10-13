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

    string Name1;
    cout << "Input LastName" << endl;
    cin >> Name1;
    int Year1;
    cout << "Input Year" << endl;
    cin >> Year1;

    
    for (int i = 0; i < array; i++) {
        if (people[i].Search(Name1)) {
            cout << "Found people with the last name: " << people[i];
            break;
        }
        if (people[i].Search(Year1)) {
            cout << "Found people born in the year: " << people[i];
            break;
        }
    }
 
    return 0;
}
