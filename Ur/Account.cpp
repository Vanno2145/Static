#include "Account.h"
#include <iostream>

using namespace std;

int Account::a_counts = 0;

void Account::All()
{
	cout << "Users: " << a_counts;
}

Account::Account()
{
	surname = nullptr;

	number = 0;
	perc = 0;
	money = 0;

	a_counts++;
}

Account::Account(const char* f)
{
	surname = new char[strlen(f) + 1];
	strcpy_s(surname, strlen(f) + 1, f);
}

Account::Account(const char* f, int n):Account(f)
{
	number = n;
}

Account::Account(const char* f, int n, int p):Account(f, n)
{
	perc = p;
}

Account::Account(const char* f, int n, int p, int m):Account(f, n, p)
{
	money = m;
}

void Account::Money_euro()
{
	money = money / 45;
	cout << "Your money will change into euro" << money;
}

void Account::Money_dollar()
{
	money = money / 40;
	cout << "Your money will change into dollar" << money;
}

void Account::Add_perc()
{
	int p;
	cout << "Enter percent which you want add: ";
	cin >> p;

	perc += p;
}

void Account::Change_s()
{
	char* n = new char[10];
	cout << "Enter surname: ";
	cin >> n;

	surname = new char[strlen(n) + 1];
	strcpy_s(surname, strlen(n) + 1, n);
}

void Account::Add_money()
{
	int m;
	cout << "Enter money which you want add: ";
	cin >> m;

	money += m;
}

void Account::Spend_money()
{
	int m;
	cout << "Enter money which you want spend: ";
	cin >> m;

	if (money - m < 0) {
		cout << "Too much money you want spend";
	}
	else {
		money -= m;
	}
}

void Account::Init()
{
	char* n = new char[10];
	cout << "Enter surname: ";
	cin >> n;

	surname = new char[strlen(n) + 1];
	strcpy_s(surname, strlen(n) + 1, n);

	number = rand() % 9000000000 + 1000000000;
	cout << "Your account number: " << number << endl;

	perc = rand() % 11;
	cout << "Your percent: " << perc << endl;

	int m;
	cout << "Enter your money: ";
	cin >> m;

	money = m;
}

void Account::Copy(const Account& a)
{
	surname = a.surname;

	number = a.number;
	perc = a.perc;
	money = a.money;
}

void Account::Print()
{
	cout << "Surname: " << surname << endl
		<< "Account numbers: " << number << endl
		<< "Percents: " << perc << endl
		<< "Your money: " << money;

}

Account::~Account()
{
	delete[] surname;
}

