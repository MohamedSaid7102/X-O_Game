#include<iostream>
#include<cstring>

using namespace std;

char x1 = '1', x2 = '2', x3 = '3', x4 = '4',
x5 = '5', x6 = '6', x7 = '7', x8 = '8', x9 = '9',__1='\0', __2='\0',player1='X', player2 = 'O';

void Print()
{
	cout <<endl<< "\t\t\t\t\t\t" << x1 << "\t" << x2 << "\t" << x3 << endl << endl
			   << "\t\t\t\t\t\t" << x4 << "\t" << x5 << "\t" << x6 << endl << endl
			   << "\t\t\t\t\t\t" << x7 << "\t" << x8 << "\t" << x9 << endl << endl;
}

char _1()
{
	cout << endl << "\t\t\t\t Player \' 1 \' : ";
	cin>>__1; cout << endl;
	if ((__1 !='1')&&( __1 != '2')&&( __1 != '3')&&( __1 != '4')&& (__1 != '5')&& (__1 != '6')&&(__1 != '7')&& (__1 != '8')&& (__1 != '9'))
	{
		cout << "\t\tInnvalid..!" << endl;
		_1();
	}
	else
	{
		return __1;
	}
}

char _2()
{
	cout << endl << "\t\t\t\t Player \' 2 \' : ";
	cin >> __2; cout << endl;
	if ((__2 != '1') && (__2 != '2') && (__2 != '3') && (__2 != '4') && (__2 != '5') && (__2 != '6') && (__2 != '7') && (__2 != '8') && (__2 != '9'))
	{
		cout << "Innvalid..!" << endl;
		_2();
	}
	else
	{
		return __2;
	}
}

void Turn_1()
{
	
	switch (_1())
	{
	case '1':
	{
			if (x1=='O')
			{
				cout << "\t\tThis Plase Token Allready...!" << endl; Turn_1();
			}
			else
			{
				x1 = 'X';
				system("cls");
				Print();
			}
			break;
	}
	case '2':
	{
		if (x2 == 'O')
		{
			cout << "\t\tThis Plase Token Allready...!" << endl; Turn_1();
		}
		else
		{
			x2 = 'X';
			system("cls");
			Print();
		}
		break;
	}
	case '3':
	{
		if (x3 == 'O')
		{
			cout << "\t\tThis Plase Token Allready...!" << endl; Turn_1();
		}
		else
		{
			x3 = 'X';
			system("cls");
			Print();
		}
		break;
	}
	case '4':
	{
		if (x4 == 'O')
		{
			cout << "\t\tThis Plase Token Allready...!" << endl; Turn_1();
		}
		else
		{
			x4 = 'X';
			system("cls");
			Print();
		}
		break;
	}

	case '5':
	{
		if (x5 == 'O')
		{
			cout << "\t\tThis Plase Token Allready...!" << endl; Turn_1();
		}
		else
		{
			x5 = 'X';
			system("cls");
			Print();
		}
		break;
	}

	case '6':
	{
		if (x6 == 'O')
		{
			cout << "\t\tThis Plase Token Allready...!" << endl; Turn_1();
		}
		else
		{
			x6 = 'X';
			system("cls");
			Print();
		}
		break;
	}

	case '7':
	{
		if (x7 == 'O')
		{
			cout << "\t\tThis Plase Token Allready...!" << endl; Turn_1();
		}
		else
		{
			x7 = 'X';
			system("cls");
			Print();
		}
		break;
	}

	case '8':
	{
		if (x8 == 'O')
		{
			cout << "\t\tThis Plase Token Allready...!" << endl; Turn_1();
		}
		else
		{
			x8 = 'X';
			system("cls");
			Print();
		}
		break;
	}

	case '9':
	{
		if (x9 == 'O')
		{
			cout << "\t\tThis Plase Token Allready...!" << endl; Turn_1();
		}
		else
		{
			x9 = 'X';
			system("cls");
			Print();
		}
		break;
	}

	}
}

void Turn_2()
{

	switch (_2())
	{
	case '1':
	{
		if (x1 == 'X')
		{
			cout << "\t\tThis Plase Token Allready...!" << endl; Turn_2();
		}
		else
		{
			x1 = 'O';
			system("cls");
			Print();
		}
		break;
	}
	case '2':
	{
		if (x2 == 'X')
		{
			cout << "\t\tThis Plase Token Allready...!" << endl; Turn_2();
		}
		else
		{
			x2 = 'O';
			system("cls");
			Print();
		}
		break;
	}
	case '3':
	{
		if (x3 == 'X')
		{
			cout << "\t\tThis Plase Token Allready...!" << endl; Turn_2();
		}
		else
		{
			x3 = 'O';
			system("cls");
			Print();
		}
		break;
	}
	case '4':
	{
		if (x4 == 'X')
		{
			cout << "\t\tThis Plase Token Allready...!" << endl; Turn_2();
		}
		else
		{
			x4 = 'O';
			system("cls");
			Print();
		}
		break;
	}

	case '5':
	{
		if (x5 == 'X')
		{
			cout << "\t\tThis Plase Token Allready...!" << endl; Turn_2();
		}
		else
		{
			x5 = 'O';
			system("cls");
			Print();
		}
		break;
	}

	case '6':
	{
		if (x6 == 'X')
		{
			cout << "\t\tThis Plase Token Allready...!" << endl; Turn_2();
		}
		else
		{
			x6 = 'O';
			system("cls");
			Print();
		}
		break;
	}

	case '7':
	{
		if (x7 == 'X')
		{
			cout << "\t\tThis Plase Token Allready...!" << endl; Turn_2();
		}
		else
		{
			x7 = 'O';
			system("cls");
			Print();
		}
		break;
	}

	case '8':
	{
		if (x8 == 'X')
		{
			cout << "\t\tThis Plase Token Allready...!" << endl; Turn_2();
		}
		else
		{
			x8 = 'O';
			system("cls");
			Print();
		}
		break;
	}

	case '9':
	{
		if (x9 == 'X')
		{
			cout << "\t\tThis Plase Token Allready...!" << endl; Turn_2();
		}
		else
		{
			x9 = 'O';
			system("cls");
			Print();
		}
		break;
	}

	}
}

void Result()
{
	if    (((x1=='O') && (x2=='O') && (x3=='O'))
		|| ((x4=='O') && (x5=='O') && (x6=='O'))
		|| ((x7=='O') && (x8=='O') && (x9=='O'))
		|| ((x1=='O') && (x4=='O') && (x7=='O'))
		|| ((x2=='O') && (x5=='O') && (x8=='O'))
		|| ((x3=='O') && (x6=='O') && (x9=='O'))
		|| ((x1=='O') && (x5=='O') && (x9=='O'))
		|| ((x3=='O') && (x5=='O') && (x7=='O')))
	{
		cout << "\t\t\t\t\t\t##########################" << endl
			 << "\t\t\t\t\t\t# - Player \" 2 \" Won - #" << endl
			 << "\t\t\t\t\t\t##########################" << endl;
	}
	else if (((x1=='X') && (x2 == 'X') && (x3 == 'X'))
		|| ((x4 == 'X') && (x5 == 'X') && (x6 == 'X'))
		|| ((x7 == 'X') && (x8 == 'X') && (x9 == 'X'))
		|| ((x1 == 'X') && (x4 == 'X') && (x7 == 'X'))
		|| ((x2 == 'X') && (x5 == 'X') && (x8 == 'X'))
		|| ((x3 == 'X') && (x6 == 'X') && (x9 == 'X'))
		|| ((x1 == 'X') && (x5 == 'X') && (x9 == 'X'))
		|| ((x3 == 'X') && (x5 == 'X') && (x7 == 'X')))
	{
		cout << "\t\t\t\t\t\t##########################" << endl
			 << "\t\t\t\t\t\t# - Player \" 1 \" Won - #" <<endl
			 << "\t\t\t\t\t\t##########################" <<endl;
	}
}
int main()
{
	int x = 0;
	Print();
	for (int i = 1; i < 5; i++)
	{
		if (((x1 == 'O') && (x2 == 'O') && (x3 == 'O'))
			|| ((x4 == 'O') && (x5 == 'O') && (x6 == 'O'))
			|| ((x7 == 'O') && (x8 == 'O') && (x9 == 'O'))
			|| ((x1 == 'O') && (x4 == 'O') && (x7 == 'O'))
			|| ((x2 == 'O') && (x5 == 'O') && (x8 == 'O'))
			|| ((x3 == 'O') && (x6 == 'O') && (x9 == 'O'))
			|| ((x1 == 'O') && (x5 == 'O') && (x9 == 'O'))
			|| ((x3 == 'O') && (x5 == 'O') && (x7 == 'O')))
		{
			x = 2;
			cout << "\t\t\t\t\t    ##########################" << endl
			 	 << "\t\t\t\t\t    #  - Player \" 2 \" Won -  #" << endl
				 << "\t\t\t\t\t    ##########################" << endl << endl;
			cout << "\t\t\t\t\t\t   -------------" << endl
			     << "\t\t\t\t\t\t   ##Nice Game##" << endl
			     << "\t\t\t\t\t\t   -------------" << endl;
			system("stop");
			break;
		}
		else if (((x1 == 'X') && (x2 == 'X') && (x3 == 'X'))
			|| ((x4 == 'X') && (x5 == 'X') && (x6 == 'X'))
			|| ((x7 == 'X') && (x8 == 'X') && (x9 == 'X'))
			|| ((x1 == 'X') && (x4 == 'X') && (x7 == 'X'))
			|| ((x2 == 'X') && (x5 == 'X') && (x8 == 'X'))
			|| ((x3 == 'X') && (x6 == 'X') && (x9 == 'X'))
			|| ((x1 == 'X') && (x5 == 'X') && (x9 == 'X'))
			|| ((x3 == 'X') && (x5 == 'X') && (x7 == 'X')))
		{
			x = 1;
			cout << "\t\t\t\t\t    ##########################" << endl
				 << "\t\t\t\t\t    #  - Player \" 1 \" Won -  #" << endl
				 << "\t\t\t\t\t    ##########################" << endl << endl;
			cout << "\t\t\t\t\t\t   -------------" << endl
				<< "\t\t\t\t\t\t   ##Nice Game##" << endl
				<< "\t\t\t\t\t\t   -------------" << endl;
			system("stop");
			break;
		}
		Turn_1();
		if (((x1 == 'O') && (x2 == 'O') && (x3 == 'O'))
			|| ((x4 == 'O') && (x5 == 'O') && (x6 == 'O'))
			|| ((x7 == 'O') && (x8 == 'O') && (x9 == 'O'))
			|| ((x1 == 'O') && (x4 == 'O') && (x7 == 'O'))
			|| ((x2 == 'O') && (x5 == 'O') && (x8 == 'O'))
			|| ((x3 == 'O') && (x6 == 'O') && (x9 == 'O'))
			|| ((x1 == 'O') && (x5 == 'O') && (x9 == 'O'))
			|| ((x3 == 'O') && (x5 == 'O') && (x7 == 'O')))
		{
			x = 2;
			cout << "\t\t\t\t\t    ##########################" << endl
				 << "\t\t\t\t\t    #  - Player \" 2 \" Won -  #" << endl
				 << "\t\t\t\t\t    ##########################" << endl << endl;
			cout << "\t\t\t\t\t\t   -------------" << endl
				<< "\t\t\t\t\t\t   ##Nice Game##" << endl
				<< "\t\t\t\t\t\t   -------------" << endl;
			system("stop");
			break;
		}
		else if (((x1 == 'X') && (x2 == 'X') && (x3 == 'X'))
			|| ((x4 == 'X') && (x5 == 'X') && (x6 == 'X'))
			|| ((x7 == 'X') && (x8 == 'X') && (x9 == 'X'))
			|| ((x1 == 'X') && (x4 == 'X') && (x7 == 'X'))
			|| ((x2 == 'X') && (x5 == 'X') && (x8 == 'X'))
			|| ((x3 == 'X') && (x6 == 'X') && (x9 == 'X'))
			|| ((x1 == 'X') && (x5 == 'X') && (x9 == 'X'))
			|| ((x3 == 'X') && (x5 == 'X') && (x7 == 'X')))
		{
			x = 1;
			cout << "\t\t\t\t\t    ##########################" << endl
			     << "\t\t\t\t\t    #  - Player \" 1 \" Won -  #" << endl
				 << "\t\t\t\t\t    ##########################" << endl << endl;
			cout << "\t\t\t\t\t\t   -------------" << endl
				<< "\t\t\t\t\t\t   ##Nice Game##" << endl
				<< "\t\t\t\t\t\t   -------------" << endl;
			system("stop");
			break;
		}
		Turn_2();
		if (((x1 == 'O') && (x2 == 'O') && (x3 == 'O'))
			|| ((x4 == 'O') && (x5 == 'O') && (x6 == 'O'))
			|| ((x7 == 'O') && (x8 == 'O') && (x9 == 'O'))
			|| ((x1 == 'O') && (x4 == 'O') && (x7 == 'O'))
			|| ((x2 == 'O') && (x5 == 'O') && (x8 == 'O'))
			|| ((x3 == 'O') && (x6 == 'O') && (x9 == 'O'))
			|| ((x1 == 'O') && (x5 == 'O') && (x9 == 'O'))
			|| ((x3 == 'O') && (x5 == 'O') && (x7 == 'O')))
		{
			x = 2;
			cout << "\t\t\t\t\t    ##########################" << endl
				<< "\t\t\t\t\t    #  - Player \" 2 \" Won -  #" << endl
				<< "\t\t\t\t\t    ##########################" << endl << endl;
			cout << "\t\t\t\t\t\t   -------------" << endl
				<< "\t\t\t\t\t\t   ##Nice Game##" << endl
				<< "\t\t\t\t\t\t   -------------" << endl;
			system("stop");
			break;
		}
		else if (((x1 == 'X') && (x2 == 'X') && (x3 == 'X'))
			|| ((x4 == 'X') && (x5 == 'X') && (x6 == 'X'))
			|| ((x7 == 'X') && (x8 == 'X') && (x9 == 'X'))
			|| ((x1 == 'X') && (x4 == 'X') && (x7 == 'X'))
			|| ((x2 == 'X') && (x5 == 'X') && (x8 == 'X'))
			|| ((x3 == 'X') && (x6 == 'X') && (x9 == 'X'))
			|| ((x1 == 'X') && (x5 == 'X') && (x9 == 'X'))
			|| ((x3 == 'X') && (x5 == 'X') && (x7 == 'X')))
		{
			x = 1;
			cout << "\t\t\t\t\t    ##########################" << endl
				<< "\t\t\t\t\t    #  - Player \" 1 \" Won -  #" << endl
				<< "\t\t\t\t\t    ##########################" << endl << endl;
			cout << "\t\t\t\t\t\t   -------------" << endl
				<< "\t\t\t\t\t\t   ##Nice Game##" << endl
				<< "\t\t\t\t\t\t   -------------" << endl;
			system("stop");
			break;
		}
	}
		Turn_1();
		cout << "\t\t\t\t\t    ##########################" << endl
			 << "\t\t\t\t\t    #         Withdraw       #" << endl
			 << "\t\t\t\t\t    ##########################" << endl<<endl;
		cout << "\t\t\t\t\t\t   -------------" << endl
		     << "\t\t\t\t\t\t   ##Nice Game##" << endl
		     << "\t\t\t\t\t\t   -------------" << endl;
	return 0;
}