#pragma once

class Account
{
	char* surname;
	long long number;
	int perc;
	int money;
public:
	static int a_counts;

	static void All();

	Account();

	Account(const char* f);
	Account(const char* f, int n);
	Account(const char* f, int n, int p);
	Account(const char* f, int n, int p, int m);

	void Money_euro();
	void Money_dollar();
	void Add_perc();
	void Change_s();
	void Add_money();
	void Spend_money();
	void Init();
	void Copy(const Account& a);

	void Print();

	~Account();
};

