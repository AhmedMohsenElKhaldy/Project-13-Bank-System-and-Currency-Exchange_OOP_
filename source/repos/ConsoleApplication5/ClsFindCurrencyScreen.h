#pragma once
#include<iostream>
#include"ClsScreen.h"
#include"ClsCurrency.h"
#include"ClsInputValidate.h"
#include"ClsString.h"
using namespace std;

class ClsFindCurrencyScreen : protected ClsScreen
{
private:

	static void _PrintCurrencyData(clsCurrency C1)
	{
		cout << "Currency Card:\n";
		cout << "____________________________\n";

		cout << "Country  :" << C1.Country() << endl;
		cout << "Code     :" << C1.CurrencyCode() << endl;
		cout << "Country  :" << C1.CurrencyName() << endl;
		cout << "Rate     :" << C1.Rate() << endl;
		cout << "____________________________\n";

	}
	static void _showResult(clsCurrency C1)
	{
		if (!C1.IsEmpty())
		{
			cout << "Currency Is Found :-)\n";
			_PrintCurrencyData(C1);
		}
		else
		{
			cout << "Currency Not Found\n";
		}
	}

public:
	static void ShowFindScreen()
{
	ClsScreen::_DrawScreenHeader("\tFind Currency Screen");

	cout << "Find By: [1]Code , [2]Country?\n";
	short Answer = ClsInputValidate::ReadShortNumberBetween(1, 2, "Invaled Number , Please Enter Bettwem 1 And 2");
	
		if (Answer == 1)
	{
		cout << "Please Enter Currency Code \n";
		string CurrrecyCode = ClsInputValidate::ReadString();
		clsCurrency C1 = clsCurrency::FindByCode(CurrrecyCode);
		_showResult(C1);
	}
	else
	{
	   cout << "Please Enter Currency Country \n";
	   string CurrrecyCode = ClsInputValidate::ReadString();
	   clsCurrency C1 = clsCurrency::FindByCountry(CurrrecyCode);
	   _showResult(C1);
	}
}

};
