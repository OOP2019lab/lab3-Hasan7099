#pragma once
#include <iostream>
#include <fstream>
#include <conio.h>
#include <string>

using namespace std;

// struct declaration
struct github_user
{
	string first_name;
	string user_name;
	string email;
	string password;
	string * institute;
	string * qualification;

};

bool exists(string user_A, github_user user)
{
	//string temp = user_A.user_name;
	int len_A = strlen(user_A.c_str());			//length of  username
	string user_B;
	user_B = (user.user_name);
	int len_B = strlen(user.user_name.c_str());		// length of username

	bool flag = true;
	if (len_A == len_B)								//same as i comparison function 
	{
		for (int i = 0; i < len_A && flag == true; i++)
		{

			if (user_A[i] != user_B[i])
			{
				flag = false;
			}
		}
	}
	else
		flag = false;
	return flag;
}

bool comparison(string user_A, github_user user_B)
{
	int len_A = strlen(user_A.c_str());						//length of username
	int len_B = strlen(user_B.user_name.c_str());		// length of username

	bool flag = true;
	if (len_A == len_B)						//checks if lengths are same then starts comparing
	{
		for (int i = 0; i < len_A && flag == true; i++)
		{

			if (user_A[i] != user_B.user_name[i])					//checks letters index by index
			{
				flag = false;					// flag equals false if not matched
			}
		}
	}
	else
		flag = false;
	return flag;
}

int  search_user(github_user * users, int size, string username)
{
	int flag = 0;
	int index;
	for (int i = 0; i < size && flag == 0; i++)
	{
		if (comparison(username, users[i]) == true)					// with a loop, it compares the username index by index in the array of struct
		{
			flag = true;
			index = i;
		}
	}
	if (flag == 1)
		return index;
	else
		return -1;
}

void menu()
{
	cout << "You can choose from following options : \n";
	cout << "1. Provide education backround. \n";
	cout << "2. Display information. \n";
	cout << "3. Remove education backround. \n";
	cout << "4. Backup data. \n";
	cout << "5. Exit \n";
	cout << endl;
}

void set_education(github_user & user)
{
	string inst;
	string qual;
	cout << "Enter Instituion Name : ";
	cin >> inst;
	cout << "Enter Qualification : ";
	cin >> qual;
	//user.institute = new string;
	*user.institute = inst;
	*user.qualification = qual;
}

void display(github_user & user)
{
	cout << "First Name : " << user.first_name << endl;
	cout << "Username : " << user.user_name << endl;
	cout << "Email : " << user.email << endl;
	cout << "Institute : " << user.institute << endl;
	cout << "Qualification : " << user.qualification << endl;
}

void remove_education(github_user & user)
{
	*user.institute = "";
	*user.qualification = "";
}

void backup(github_user original[], github_user backup[], int user_count)
{
	for (int i = 0; i < user_count; i++)
	{
		backup[i] = original[i];
	}
}

void read_data(string file_path, github_user * users)
{
	ifstream file;
	file.open(file_path);

	int size;
	file >> size;

	for (int i = 0; i < size; i++)
	{
		file >> users[i].first_name;
		file >> users[i].user_name;
		file >> users[i].email;
	}
}
