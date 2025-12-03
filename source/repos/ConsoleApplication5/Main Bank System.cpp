#include <iostream>
#include"ClsLoginScreen.h"
#include"Global.h"
#include"ClsString.h"
//#include"ClsCurrencise.h"

using namespace std;


int main()
{
	while (true)
	{
		if (!ClsLoginScreen::ShowLoginScreen())
		{
			break;
		}
	}

	system("pause");
}
