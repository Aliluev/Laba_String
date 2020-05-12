#include"Header.h"
#include<iostream>
using namespace std;

int main()
{
  MyString A("Primer_Primera");//конструктор инициализатор
  MyString B("Prekrasno");////конструктор инициализатор
  MyString C;//конструктор по умолчанию
  cout << "MyString A=" << A;//cout MyString
  cout << "MyString B=" << B;//cout MyString
  cout << "MyString C=" << C;//cout MyString
  cout << "Dostup k protected polem" << "\n";
  cout << "Size A=" << A.GetSize()<<"\n";//Доступ к защищённым полям
  cout << "Slovo A=" << A.GetString()<<"\n";//Доступ к защищённым полям
  cout << "function Set Set_Slovo,cin,cout<<" << "\n";
  MyString D;
  cin >> D;
  cout << "vveli=" << D << "\n";
  cout << "operacia +" << "\n";
  cout << "A+B" << "\n";
  C = A + B;
  cout << C<<"\n";
  cout << "operacia =" << "\n";
  cout << "A=B" << "\n";
  A=B;
  cout << A << "\n";


  cout << "operacia ==" << "\n";
  MyString E("Ravno li");
  MyString F("Net");
  cout << "E==F" << "\n";
  cout << "MyString E=" << E;//cout MyString
  cout << "MyString B=" << F;//cout MyString
  int r = 0;
  r = (E == F);
  cout << "0-net,1-yes" << "\n";
  cout <<"otvet "<<r << "\n\n";


  cout << "operacia <" << "\n";
  cout << "E<F" << "\n";
  cout << "MyString E=" << E;//cout MyString
  cout << "MyString B=" << F;//cout MyString
  int e = 0;
  e = (E < F);
  cout << "0-net,1-yes" << "\n";
  cout << "otvet " << e << "\n\n";


  cout << "operacia >" << "\n";
  cout << "E>F" << "\n";
  cout << "MyString E=" << E;//cout MyString
  cout << "MyString B=" << F;//cout MyString
  int p = 0;
  p = (E > F);
  cout << "0-net,1-yes" << "\n";
  cout << "otvet " << p << "\n\n";

  cout << "operacia []" << "\n";
  cout << "slovo E="<<E;
  cout << "E[3]=";
  cout << E[3] << "\n\n";

  cout << "poisk pervogo vxozhdenia podslova" << "\n";
  MyString T("Privet_vsem");
  cout << "MyString T=" << T;
  cout << "est li slovo VE?" << "\n";
  int y = 0;
  y = T.PoiskPodstroki("ve");
  cout << y << "\n" << "\n";


  cout << "poisk pervogo vxozhdenia simvola" << "\n";
  MyString O("ishu_simvol");
  cout << "MyString O=" << O;
  cout << "est li simvol M?" << "\n";
  int w = 0;
  w = T.PoiskSimvola('m');
  cout << w << "\n" << "\n";


  cout << "razbienie na podslova po simvoly" << "\n";
  MyString U("privet_privet_privet");
  cout << "MyString U=" << U;
  cout << "razbienie na podslova po simvoly e" << "\n";
  T.Razbienie('e');
  cout << T << "\n" << "\n";


  cout << "metod dubliruushi stroku k raz" << "\n";
  MyString Q("tri_raza");
  cout << "MyString Q=" << Q ;
  cout << "dubliruushi stroku 3 raz" << "\n";
  Q.Dublirovanie_Strok(3);
  cout << Q << "\n";

  return 0;
}