#pragma once
#include<iostream>
#include"ClsCurrency.h"
#include"ClsScreen.h"
#include"ClsInputValidate.h"

class ClsUpdateCurrencyScreen : protected ClsScreen
{
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
	static void _ReadNewRateToCurrency(clsCurrency& C1)
	
	{
		cout << "Update Currecny Rate: \n";
	    cout << "------------------------\n";
		
		cout << "Enter The New Rate: ";
		float NRate = ClsInputValidate::ReadFloNumber();
		C1.UpdateRate(NRate);
	}
public:
	static void ShowUpdateScreen()
	{
	    cout << "Please Enter Currency Code: \n";
		string CuCode = ClsInputValidate::ReadString();

		while (!clsCurrency::IsCurrencyExistByCode(CuCode))
		{
			cout << "Code Not Exist Enter Another Currency Code?\n";
			CuCode = ClsInputValidate::ReadString();
		}

		clsCurrency C1 = clsCurrency::FindByCode(CuCode);
		_PrintCurrencyData(C1);

		char A;
		cout << "Are You Sure You Want To Update The Rate Of This Currecny?\n";
		cin >> A;

		if (A = toupper(A))
		{
			_ReadNewRateToCurrency(C1);
			cout << "Rate Is Update Succssfuly\n";
			_PrintCurrencyData(C1);
		}
		else
		{
			cout << "Rate Not Updated\n";
		}
	}

};
