#include "contact.h"
void menu()
{
	cout << "----------------------------------------" << endl;
	cout << "--------1.add             2.show--------" << endl;
	cout << "--------3.del             4.search------" << endl;
	cout << "--------5.modify          6.emptify-----" << endl;
	cout << "--------0.exit            --------------" << endl;
	cout << "----------------------------------------" << endl;
}
int main(int argc, char* argv[])
{
	Contact con;
	con.size = 0;
	int input = 0;
	do
	{
		menu();
		cout << "Please Enter:" << endl;
		cin >> input;
		switch (input)
		{
		case ADD:
			Add(&con);
			break;
		case SHOW:
			Show(&con);
			break;
		case DEL:
			Del(&con);
			break;
		case SEARCH:
			Search(&con);
			break;
		case MODIFY:
			Modify(&con);
			break;
		case EMPTIFY:
			Emptify(&con);
			break;
		case EXIT:
			cout << "exit!" << endl;
			break;
		default:
			cout << "error input" << endl;
			break;
		}

	} while (input);
	system("pause");
	return 0;
}
