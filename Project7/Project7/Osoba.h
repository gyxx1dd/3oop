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
	Osoba()
	{

	}
	Osoba(const string& LastName, const string& Name, const int Year)
	{
		this->LastName = LastName;
		this->Name = Name;
		this->Year = Year;
	}

	string GetName()
	{
		return Name;
	}

	string GetLastName()
	{
		return LastName;
	}

	int GetYear()
	{
		return Year;
	}

	

	Osoba& operator=(const Osoba& other) {
		if (this == &other) {
			return *this;
		}
		LastName = other.LastName;
		Name = other.Name;
		Year = other.Year;

		return *this;
	}

	friend istream& operator>>(istream& input, Osoba& Osoba)
	{
		try {
			cout << "Input LastName" << endl;
			input >> Osoba.LastName;

			cout << "Input Name" << endl;
			input >> Osoba.Name;

			cout << "Input Year" << endl;
			input >> Osoba.Year;
			if (input.fail()) {
				throw "Invalid input";
			}
		}
		catch (const char* ex)
		{
			cout << ex << endl;
		}
		return input;
	}

	friend ostream& operator<<(ostream& output, Osoba& Osoba)
	{
		output << "SurnName:" << Osoba.LastName << endl;
		output << "Name:" << Osoba.Name << endl;
		output << "Year:" << Osoba.Year << endl;
		return output;
	}


};