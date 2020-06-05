#include <iostream>
#include "odc2.h"

using namespace std;

int ileUczniow, cukierki, x,y; // x to  lizba cukierków które maja dostac uczniowie , y to cukierki które zostaja

int main()
{//---------------------------------------------------------------------------
//    cout << "Ilu uczniow jest w twojej klasie: " ;
//    cin >> ileUczniow  ;
//    cout << "Ile cukierkow kupila mama ? ";
//    cin >> cukierki;
//    x = cukierki/(ileUczniow-1);
//    cout<< "Cukierków dla kazdego ucznia: "<< x<<endl;
//    y= cukierki-x*(ileUczniow-1);
//    cout << " Dla Jasia na wieczor zostalo :"<<y<<" cukierkow" << endl;
// -------------------------------------------------------------------------

//    Odc2 w;
//    w.show();
//    return a.exec();

//    string PIN;
//    cout <<"Drugie zadanie IF"<< endl;
//    cout <<"Witaj w naszym banku "<< endl;
//    cout <<"Podaj numer PIN: ";
//    cin>> PIN;

//    if(PIN=="1729")
//    {
//        cout<<"Poprawny pin!"<<endl;
//    }
//    else
//    {
//        cout<<"PIN ZLY!!!"<<endl;
//    }

//------------------------------------------------

cout<<"Zadanie 3 logowanie!"<<endl;

string login, haslo;

cout<<"Podaj Login: "<<endl;
cin>>login;


cout<<"Podaj haslo: "<<endl;
cin>>haslo;

if (login!="admin")
{
    cout<<"Zly login"<<endl; return 0;
}
else
{
    cout<<"Login poprawny "<<endl;
//if ((login=="admin)&& (haslo=="123"));
    if (haslo!="123")
    {
        cout<<"Halso nie poprawne"<<endl; return 0;
    }
    else
    {
        cout<<"Haslo rowniez poprawne. Dostep do konta: "<<endl;
    }

}



    //Odc2 okno2;
    //okno2.setModal(true);
    //okno2::main ;


    return 0;
}
