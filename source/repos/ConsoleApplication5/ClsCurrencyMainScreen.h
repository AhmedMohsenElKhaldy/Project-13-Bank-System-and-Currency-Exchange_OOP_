#pragma once
#include<iostream>
#include<iomanip>
#include"ClsScreen.h"
#include"ClsInputValidate.h"
#include"ClsCurrenciesListScreen.h"

class ClsCurrencyMainMenueScreen:protected ClsScreen
{
private:
 enum _EnCurrency
 {
 eListCurrency = 1 ,eFindCurrency = 2,
 eUpdateCurrency = 3, CurrencyCalculator = 4, eMainMeune = 5
 };
 
 static short _ReadCurrencyChoose()
 {
   short Number =  ClsInputValidate::ReadShortNumberBetween(1, 5,
        "Invalid Number Please Enter Number Bettwen 1 And 5: ");
   
   return Number;
 }
 static void _BackToMainMenue()
 {
     cout << setw(37) << left << "" << "\n\tPress any key to go back to Main Menue...\n";

     system("pause>0");

     ShowMainMenueScreen();
 }
 static void _ShowListCurrenciesScreen()
 {
     ClsCurrenciesListScreen::ShowClientList();
     //cout << "List currency Screen I'm Here\n";
 }
 static void _ShowFindCurrenciesScreen()
 {
     cout << "Find currenceies Screen I'm Here\n";
 }
 static void _ShowUpdateRatecurrenceiesScreen()
 {
     cout << "Update Rate currenceies Screen I'm Here\n";
 }
 static void _ShowCalculatorCurrenceiesScreen()
 {
     cout << "Calculator Currenceies Screen I'm Here\n";
 }
 static void _PerformCurrencyMainScreen(_EnCurrency OptrionCurrency)
 {
switch (OptrionCurrency)
{
case _EnCurrency::eListCurrency:

    system("cls");
    _ShowListCurrenciesScreen();
    _BackToMainMenue();
    break;

case _EnCurrency::eFindCurrency:

    system("cls");
    _ShowFindCurrenciesScreen();
    _BackToMainMenue();
    break;

case _EnCurrency::eUpdateCurrency:

    system("cls");
    _ShowUpdateRatecurrenceiesScreen();
    _BackToMainMenue();
    break;

case _EnCurrency::CurrencyCalculator:

    system("cls");
    _ShowCalculatorCurrenceiesScreen();
    _BackToMainMenue();
    break;

case _EnCurrency::eMainMeune:
    break;
}
 }

public:

static void ShowMainMenueScreen()
{
  system("cls");
  _DrawScreenHeader("Currency Exchange Main Screen");
  cout << setw(37) << left << "" << "===========================================\n";
  cout << setw(37) << left << "" << " \t\tCurrency Exchange Menue\n";
  cout << setw(37) << left << "" << "===========================================\n";
  cout << setw(37) << left << "" << " \t[1] List Currenties.\n";
  cout << setw(37) << left << "" << " \t[2] Find Currenties.\n";
  cout << setw(37) << left << "" << " \t[3] Update Currenties.\n";
  cout << setw(37) << left << "" << " \t[4] Currency Calculator.\n";
  cout << setw(37) << left << "" << " \t[5] Main Menue.\n";
  cout << setw(37) << left << "" << "===========================================\n";

  _PerformCurrencyMainScreen((_EnCurrency)_ReadCurrencyChoose());
 
 }

};


