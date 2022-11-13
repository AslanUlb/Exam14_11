#include<iostream>
#include "..\\classes\admins.h"
#include "..\\classes\user.h"
using namespace std;


void mainMenu() {
	string choise;
	admin adm;
	user us;
	operator op;

	do {
		system("cls");

		cout << "1 user: add" << endl;
		cout << "2 user: del" << endl;
		cout << "3 user: edit" << endl;
		cout << "4 user: results" << endl;

		cout << "5 stat: category" << endl;
		cout << "6 stat: test" << endl;

		cout << "7 test: add category" << endl;
		cout << "8 test: add test" << endl;
		cout << "9 test: add question" << endl;
		cout << "0 exit" << endl;


		cout << "#";
		cin >> choise;

		switch (choise[0])
		{
		case '1': u.add();  break;
		case '2': u.del(); break;
		case '3': u.edit(); break;

		case '5': t.printcategories(); break;
		case '6': stattests(); break;


		case '7': t.addcategory();  break;
		case '8': t.addtest();  break;
		case '9': t.addquestion();  break;
		}

	} while (choise[0] != '0');
}
