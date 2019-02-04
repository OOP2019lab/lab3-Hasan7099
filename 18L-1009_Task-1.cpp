#include <iostream>
#include <fstream>
#include <conio.h>
#include <string>
#include "Task-1.h"

using namespace std;

void main()
{
	int option;
	int user_count = 4;
	string user;
	github_user * users;
	github_user * backup_arr;
	users = new github_user[user_count];
	backup_arr = new github_user[user_count];
	read_data("sample.txt", users);
	cout << "Enter the username : ";
	cin >> user;
	int index = search_user(users, user_count, user);
	if (index != -1)
	{
		menu();
		cout << "Enter Option : ";
		cin >> option;
		while (option != 5)
		{
			if (option == 1)
				set_education(users[index]);
			else if (option == 2)
				display(users[index]);
			else if (option == 3)
				remove_education(users[index]);
			else if (option == 4)
				backup(users, backup_arr, user_count);
			else
				cout << "\nInvalid Input\n";
			cout << "Done \n Enter Option : ";
			cin >> option;
		}
	}
	else
		cout << "User not found. \n";
	
	//display(users[01]);

	system("pause");
}