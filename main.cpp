#include <iostream>
#include <string.h>
using namespace std;
struct BankAccount{
    int AccountNumber =0;
    string NameofOwner;
    double BankBalance =0;

};
void ChangeBalance(BankAccount & stru){
    cout << "Введи новый баланс\n";
    cin>>stru.BankBalance;
}
int main()
{
    setlocale (LC_ALL,"Rus");
    BankAccount bank;
    cout << "Привет, заполни пожалуйста данные счета в банке\n";
    cout << "Введи номер счета\n" ;
    cin>> bank.AccountNumber;
    cout << "Введи имя владельца \n";
    cin.ignore();
    getline(cin,bank.NameofOwner);
    cout<< "Введи баланс на счете\n";
    cin>> bank.BankBalance;
    cout<< "Ваш счет: " <<  bank.NameofOwner<< ", "
        << bank.AccountNumber<< ", "<< bank.BankBalance << endl;
    ChangeBalance(bank);
    cout<< "Ваш счет: " <<  bank.NameofOwner<< ", "
        << bank.AccountNumber<< ", "<< bank.BankBalance << endl;


}