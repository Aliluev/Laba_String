#include"Header.h"
MyString::MyString()
{
  size = 1;
  slovo = new char[1];
  slovo[0] = 0;
}
MyString::MyString(const char*A)
{
  slovo = nullptr;
  if (strlen(A) > 0)
  {
    size = strlen(A) + 1;
    slovo = new char[size];
    for (int i = 0; i < size-1; i++)
    {
      slovo[i] = A[i];
    }
    slovo[size-1] = 0;
  }
  //else throw "Nevern";
}
MyString::MyString(char b)
{
  size = 2;
  slovo = new char[size];
  slovo[0] = b;
  slovo[1] = 0;
}
char* MyString::GetString()
{
  return slovo;
}
int MyString::GetSize()
{
  return size;
}
MyString::MyString(MyString& c)
{
  slovo = nullptr;
  size = c.GetSize();
  slovo = new char[size];
  for (int i = 0; i < (size); i++)
  {
    slovo[i] = c.GetString()[i];
    //slovo[i] = c.GetString()[i];
  }
}

MyString::~MyString()
{
  
  if (slovo != 0)
  {
    delete[] slovo;
  }
  size = 0;
}

void MyString::SetSize(int k)
{
  size = k;
}
void MyString::SetSlovo(const char* f)
{
  if (strlen(f) > 0)
  {
    size = strlen(f) + 1;
    slovo = new char[size];
    for (int i = 0; i < size-1; i++)
    {
      slovo[i] = f[i];
    }
    slovo[size-1] = 0;
  }
  //else throw "Nevern dannue";
}

MyString MyString::operator+(MyString& S)
{
  MyString K;
  K.SetSize(size + S.GetSize() - 1);
  K.slovo = new char[K.GetSize()];
  for (int i = 0; i < size-1; i++)
  {
    K.slovo[i] = slovo[i];
  }
  for (int c = (size-1); c < (K.GetSize()-1); c++)
  {
    K.slovo[c] = S.slovo[c - (size-1)];
  }
  K.slovo[K.GetSize()-1] = 0;
  return K;
}

MyString& MyString::operator=(const MyString& N)
{
  if (&N == this)
  {
    return *this;//проверка на самокопирование
  }
  if (slovo!=nullptr)
  {
    delete[] slovo;
  }
  this->size = N.size;
  this->slovo = nullptr;
  this->slovo = new char[size];
  for (int r = 0; r < (size - 1); r++)
  {
    slovo[r] = N.slovo[r];
  }
  slovo[size - 1] = 0;
  return *this;
}
bool operator==(const MyString& J, const MyString& H)
{
  int A = J.size;
  int B = H.size;
  int k = 0;
  if (A == B);
  {
    for (int i = 0; i < A - 1; i++)
    {
      if (J.slovo[i] == H.slovo[i])
      {
        k++;
      }
    }
    if (k == A - 1)
    {
      return 1;
    }
    else return 0;
  }
  return 0;
}

char& MyString::operator[](int i)
{
  return slovo[i];
}

bool operator>(const MyString& J, const MyString& H)
{
  int A = J.size;
  int B = H.size;
  int k = 0;
  if (A > B);
  {
    for (int i = 0; i < A - 1; i++)
    {
      if (J.slovo[i] > H.slovo[i])
      {
        return 1;
      }
      if (J.slovo[i] < H.slovo[i])
      {
        return 0;
      }
      /*if (J.slovo[i] == H.slovo[i])
      {
        return 0;
      }*/
    }
    return 0;
  }
  if (A < B);
  {
    for (int i = 0; i < B - 1; i++)
    {
      if (J.slovo[i] > H.slovo[i])
      {
        return 1;
      }
      if (J.slovo[i] < H.slovo[i])
      {
        return 0;
      }
      /*if (J.slovo[i] == H.slovo[i])
      {
        return 0;
      }*/
    }
    return 0;
  }
  if (A = B);
  {
    for (int i = 0; i < A - 1; i++)
    {
      if (J.slovo[i] > H.slovo[i])
      {
        return 1;
      }
      if (J.slovo[i] < H.slovo[i])
      {
        return 0;
      }
      
      /*if (J.slovo[i] == H.slovo[i])
      {
        return 0;
      }*/
    }
    return 0;

  }
}
bool operator<(const MyString& J, const MyString& H)
{
  int A = J.size;
  int B = H.size;
  int k = 0;
  if (A > B);
  {
    for (int i = 0; i < A - 1; i++)
    {
      if (J.slovo[i] > H.slovo[i])
      {
        return 0;
      }
      if (J.slovo[i] < H.slovo[i])
      {
        return 1;
      }
      /*if (J.slovo[i] == H.slovo[i])
      {
        return 0;
      }*/
    }
    return 0;
  }
  if (A < B);
  {
    for (int i = 0; i < B - 1; i++)
    {
      if (J.slovo[i] > H.slovo[i])
      {
        return 0;
      }
      if (J.slovo[i] < H.slovo[i])
      {
        return 1;
      }
      /*if (J.slovo[i] == H.slovo[i])
      {
        return 0;
      }*/
    }
    return 0;
  }
  if (A = B);
  {
    for (int i = 0; i < A - 1; i++)
    {
      if (J.slovo[i] > H.slovo[i])
      {
        return 0;
      }
      if (J.slovo[i] < H.slovo[i])
      {
        return 1;
      }

      /*if (J.slovo[i] == H.slovo[i])
      {
        return 0;
      }*/
    }
    return 0;

  }
}
std::ostream& operator<<(ostream& out, MyString& X) {
  for (int i = 0; i < X.GetSize()-1; i++) {
    out << X.GetString()[i];
  }
  out << "\n";

  return out;
}

std::istream& operator>>(istream& in, MyString& Y) {
  char l[256];
  in.getline(l, 256);
  MyString e(l);
  Y = e;
  return in;
}
int MyString::PoiskPodstroki(const char* O)//Поиск первого вхождения подстроки
{
  int kol=0;//счётчик вхождений

  int size_podstroki = strlen(O);
  for (int i = 0; i < size - size_podstroki + 1; i++)
  {
    int kol = 0;
    for (int k = 0; k < size_podstroki; k++)
    {
      if (slovo[i+k] == O[k])
      {
        kol++;
        if (kol == size_podstroki)
        {
          return 1;
        }
      }
    }
  }
  return 0;
}
int MyString::PoiskSimvola(const char Y)
{
  int kol = 0;//счётчик вхождений

  //int size_podstroki = strlen(O);
  for (int i = 0; i < size; i++)
  {
      if (slovo[i] == Y)
      {
       return 1;
      }   
  }
  return 0;
}
MyString MyString::CopyMassive(int e)//метод копирования массива с памятью на 1 больше для метода разбиения
{
  char* massiv;
  massiv = 0;
  int dlina=size+1;
  massiv = new char[dlina];
  for (int i = 0; i < e+1; i++)//копирывание старого массива со сдвигом на 1
  {
    massiv[i] = slovo[i];
  }
  for (int w = e + 2; w < dlina; w++)
  {
    massiv[w] = slovo[w-1];//сдвиг у позиции пробела
  }
  massiv[e+1] = ' ';
  massiv[dlina] = 0;

  if (slovo != 0)//удаляем старый массив
  {
    delete[] slovo;
  }
  size = 0;//удаляем размер
  SetSlovo(massiv);//устанавливаем новое слово, где автоматически выделяется память и считается длина

  return *this;
}
void MyString::Razbienie(const char U)//разбиение на подслава по символу
{
  //MyString A(*this);
  int i = 0;
  while (i < size)
  {
    if (slovo[i] == U)
    {
      this->CopyMassive(i);
      i++;//увеличиваем счётчик
    }
    i++;//увеличиваем счётчик
  }
}

void MyString::Dublirovanie_Strok(int k) //дублирование строк k раз
{
  int new_size = size * k+1;//ни надо ничего вычетать потому что у нас будут пробелы
  char* new_massiv = 0;
  new_massiv = new char[new_size];
  for (int s = 0; s < k; s++)
  {
    for (int i = s; i < size - 1 + s; i++)
    {
      new_massiv[s * (size - 1) + i] = slovo[i - s];
      new_massiv[s * (size - 1) + i + 1] = ' ';//создаём 
      new_massiv[s * (size - 1) + i + 1 + 1] = 0;
    }
  }
  if (slovo != 0)//удаляем старый массив
  {
    delete[] slovo;
  }
  size = 0;//удаляем размер
  SetSlovo(new_massiv);//устанавливаем новое слово, где автоматически выделяется память и считается длина
}
