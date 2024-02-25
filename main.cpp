#include <iostream>
using namespace std;
int main()
{
 float SP;
 float SK;
 float IP;
 float P;
 float S;
 cout<< " podaj Stan poczatkowy: "<<endl;
 cin>>SP;
   cout<<"Podaj Stan koncowy: "<<endl;
   cin>>SK;
   cout<<"podaj ilosc paliwa: "<<endl;
    cin>>IP;
   P = SK - SP;
   S = 100*(IP/P);

  cout<<"ilosc spalania na 100km wychodzi: "<<S;

  return (0);
};


