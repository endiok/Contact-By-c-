#include "contact.h"
void Add(Contact* con)
{
	if (con->size == MAX)
	{
		cout << "Contact was Full!" << endl;
		return;
	}
	else
	{
		cout << "Please Enter Name£º"<<endl;
		cin >> con->data[con->size].name;

		int sex;
		cout << "Please Enter Sex£º1-male 0-female" << endl;
		while (true)
		{
			cin >> sex;
			if (sex == 1 || sex == 0)
			{
				break;
			}
			else
				cout<<"error reEnter" << endl;
		}
		con->data[con->size].sex = sex;
		

		cout << "Please Enter Age£º" << endl;
		cin >> con->data[con->size].age;

		cout << "Please Enter Tele£º" << endl;
		cin >> con->data[con->size].tele;

		cout << "Please Enter Addr£º" << endl;
		cin >> con->data[con->size].addr;

		con->size++;;
		system("pause");
		system("cls");
	}
}

void Show(const Contact* con)
{
	if (con->size == 0)
	{
		cout << "THE CONTACT IS EMPTY" << endl;
	}
	else
	{
		cout << "NAME\tAGE\tSEX\tTELE\tADDR" << endl;
		for (int i = 0; i < con->size; i++)
		{
			cout << con->data[i].name << "\t" << (con->data[i].sex == 1 ? "ÄÐ" : "Å®") << "\t" << con->data[i].age << "\t" << con->data[i].tele << "\t" << con->data[i].addr << "\t" << endl;
		}
	}
	system("pause");
	system("cls");
}

int IsExist(const Contact* con,string name)
{
	for (int i=0;i<con->size;i++)
	{
		if (con->data[i].name == name)
		{
			return i;
		}
	}
	return -1;
}
void Del(Contact* con)
{
	string name;
	cout << "Enter The Name You Want Del:" << endl;
	cin >> name;
	int ret = IsExist(con, name);
	if (ret != -1)
	{
		for (int i = ret+1; i < con->size; i++)
		{
			con->data[i-1] = con->data[i];
		}
		con->size--;
		cout << "Delete Successfully!" << endl;
	}
	else
	{
		cout << "Del : Not Exist" << endl;
	}
	system("pause");
	system("cls");
	return;
}
void Search(const Contact* con)
{
	string name;
	cout << "Please Enter the Name:" << endl;
	cin >> name;
	int ret = IsExist(con,name);
	if (ret != -1)
	{
		cout << "NAME\tAGE\tSEX\tTELE\tADDR" << endl;
		cout << con->data[ret].name << "\t" << (con->data[ret].sex == 1 ? "ÄÐ" : "Å®") << "\t" << con->data[ret].age << "\t" << con->data[ret].tele << "\t" << con->data[ret].addr << "\t" << endl;
	}
	else
	{
		cout << "Search : Not Exist" << endl;
	}
	system("pause");
	system("cls");
}
void Modify(Contact* con)
{
	string name;
	cout << "Please Enter the Name:" << endl;
	cin >> name;
	int ret = IsExist(con, name);
	if (ret != -1)
	{
		cout << "Please Enter Name£º" << endl;
		cin >> con->data[ret].name;

		int sex;
		cout << "Please Enter Sex£º1-male 0-female" << endl;
		while (true)
		{
			cin >> sex;
			if (sex == 1 || sex == 0)
			{
				break;
			}
			else
				cout << "error reEnter" << endl;
		}
		con->data[ret].sex = sex;


		cout << "Please Enter Age£º" << endl;
		cin >> con->data[ret].age;

		cout << "Please Enter Tele£º" << endl;
		cin >> con->data[ret].tele;

		cout << "Please Enter Addr£º" << endl;
		cin >> con->data[ret].addr;
		
		cout << "Modify Successfully!" << endl;
	}
	else
	{
		cout << "Modify : Not Exist" << endl;
	}
	system("pause");
	system("cls");
}
void Emptify(Contact* con)
{
	con->size = 0;
	cout<<"Emptify Successfully!" << endl;
	system("pause");
	system("cls");
}
