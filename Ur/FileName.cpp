#include <iostream>
#include "Account.h";

using namespace std;



int main() {

	Account first;
	
	first.Init();

	first.Add_money();
	first.Add_perc();

	first.Change_s();

	first.Print();

	cout << endl;

	first.All();
}