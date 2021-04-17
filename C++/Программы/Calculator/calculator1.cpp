#include <iostream>
#include <cmath>
using std::cout;
using std::cin;
using std::endl;

int main()
{
setlocale(LC_ALL, "Russian");
double X, Y, F;
char Z;
char D[6] = {'+', '-', '*', '/', '%', 'l'};
do
{
	X = 0; Y = 0; F = 0;
	cin >> X;
	cin >> Z;
	if(Z == 'n')
	{
		F = X;
		break;
	}
	if(Z != D[6])
	{
		cout<<"введите корректный символ";
		F = X;
		break;
	}
	cin >> Y;
	if(Z == '%')
	{
		if(X < 0)
			cout <<"подкоренное выражение не может быть отрецательным"<<endl;
		else
		{
			F = pow(X,(pow(Y,-1)));
			cout <<"="<< F <<endl;
		}
	}
	else
	{
		switch(Z)
		{	
			case '+':F = X + Y; cout <<"="<< F <<endl; break;
			case '-':F = X - Y; cout <<"="<< F <<endl; break;
			case '*':F = X * Y; cout <<"="<< F <<endl; break;
			case '/':F = X / Y; cout <<"="<< F <<endl; break;
			case '^':F = pow(X, Y); cout <<"="<< F <<endl; break;
			case 'l':F = log(X) / log(Y); cout <<"="<< F <<endl; break;
		}	
	}
	do{
		cin >> Z;
		if(Z == 'c')
		{
			cout <<"Результат:"<< F <<endl;break;
		}	
		if(Z != D[6]){cout<<"введите корректный символ";break;
		}
			cin >> Y;
			if(Z == '%')
			{
				if(Y < 0)
					cout <<"подкоренное выражение не может быть отрецательным"<<endl;
				else
				{
					F = pow(F,(pow(Y,-1)));
					cout<<"="<< F <<endl;
				}
			}
		else
		{
			switch(Z)
			{	
				case '+':F = F + Y; cout <<"="<< F <<endl; break;
				case '-':F = F - Y; cout <<"="<< F <<endl; break;
				case '*':F = F * Y; cout <<"="<< F <<endl; break;
				case '/':F = F / Y; cout <<"="<< F <<endl; break;
				case '^':F = pow(F, Y); cout <<"="<< F <<endl; break;
				case 'l':F = log(F) / log(Y); cout <<"="<< F <<endl; break;
			}	
		}	
	}
	while(true);
	cout << endl;
}
while(true);
cout<<"конечный результат: "<< F <<endl;
return 0;
}







