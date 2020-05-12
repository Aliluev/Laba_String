#pragma once
#include<iostream>
using namespace std;
class MyString
{protected:
  int size;
  char* slovo;
public:
  MyString();
  MyString(const char* A);
  MyString(char b);
  MyString(MyString& c);
  ~MyString();
  int GetSize();
  char* GetString();
  void SetSize(int k);
  void SetSlovo(const char* f);
  MyString operator+(MyString& S);
  char& operator[](int i);
  MyString& operator=(const MyString& N);
  MyString& operator=(char l);
  friend bool operator==(const MyString& J, const MyString& H);
  friend bool operator<(const MyString& J, const MyString& H);
  friend bool operator>(const MyString& J, const MyString& H);
  friend std::ostream& operator <<(ostream& out, MyString& X);
  friend std::istream& operator >>(istream& in, MyString& Y);
  int PoiskPodstroki(const char* O);
  int PoiskSimvola(const char Y);
  void Razbienie(const char U);
  MyString CopyMassive(int e);
  void Dublirovanie_Strok(int k);
};
