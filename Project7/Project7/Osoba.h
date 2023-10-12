#include <iostream>
#include <string>
#include <fstream>


using namespace std;

class Osoba						
{

private:
	string LastName;
	string Name;
	int Year;

public:
	Osoba() : LastName(""), Name(""), Year(0) {}
	Osoba(const string& Name1, const string& LastName1, int Year1):Name(Name1), LastName(LastName1), Year(Year1){}

	friend istream& operator>>(istream& input, Osoba& Osoba)
	{
		cout << "Input LastName" << endl;
		input >> Osoba.LastName;

		cout << "Input Name" << endl;
		input >> Osoba.Name;

		cout << "Input Year" << endl;
		input >> Osoba.Year;

		return input;
	}

	friend ostream& operator<<(ostream& output, Osoba& Osoba)
	{
		output << "SurnName:" << Osoba.LastName << endl;
		output << "Name:" << Osoba.Name << endl;
		output << "Year:" << Osoba.Year << endl;
		return output;
	}

	bool SearchLastName(const string& LastName1)
	{
		return LastName == LastName1;
	}



};