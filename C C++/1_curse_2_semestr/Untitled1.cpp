#include <stdlib.h>
#include <iostream>
#include <fstream>    // бібліотека для роботи з файлами
#include <string.h>   // бібліотека для роботи з рядками
using namespace std;
int main(){
 char filename[20]="My_fail.txt"; //назва вводиться з клавиатури
//визначення потоку для запису out і зв'язування його з файлом
 ofstream out(filename);
 if(!out) {cerr<<"Error:\n"; return 1;} //перевірка відкриття файла
// визначення та ініціалізація зміних і рядків
 int num1[5]={1,2,3,4,5}; // порядковий номер
 char str1[5][30]={"Ukraine","France","England","Italy","Albania"}; // назва країни
 char str2[5][30]={"Kiev","Paris","London","Rome","Tirana"};//назва столиці
 int num2[5]={2,3,6,3,1}; // кількість аеропортів в столиці
//запис зміних з перетворенням в рядок і рядків в файл 
for(int i=0;i<5;i++)
 {out.write((char*)(&num1[i]),sizeof(int));//запис в файл номеру з перетворенням в рядок
  out.write(str1[i], strlen(str1[i])); //запис в файл рядків з назвою країни
  out.write(str2[i], strlen(str2[i])); // запис в файл рядків з назвою столиці
  out.write((char*)(&num2[i]),sizeof(int));//запис в файл кількості аеропортів
  //out.put('\n'); //запис в файл символу \n
 }
out.close();  // закриття файлу
// визначення потоку для запису in і зв'язування його з файлом
 ifstream in(filename);
 if(!in) //перевірка відкриття файла
   {cerr<<"Error:\n"; return 1;}
  // резервування пам'яті для зміних та рядків
 int num1_c[5]; // під порядковий номер
 char str1_c[5][30]; //під  назву країни
 char str2_c[5][30]; // під назву столиці
 int num2_c[5]; // під кількість аеропортів
 int istr; // під кількість символів в рядку

// читання з файлу рядків з перетворенням в зміні заданого типу
for(int i=0;i<5;i++)
 {in.read((char*)(&num1_c[i]),sizeof(int));//читання з файлу рядка з перетворенням в int
  in.read(str1_c[i],strlen(str1[i])); // читання з файлу рядка з назвою країни 
  istr=in.gcount(); // кількість прочитаних символів в рядку
  str1_c[i][istr]='\0'; // занести нуль-символ у кінець рядка
  in.read(str2_c[i],strlen(str2[i])); // читання з файлу рядка з назвою столиці
  istr=in.gcount(); // кількість прочитаних символів в рядку
  str2_c[i][istr]='\0'; // занести нуль-символ у кінець рядка
  in.read((char*)(&num2_c[i]),sizeof(int));//читання з файлу рядка з перетворенням в int
  //in.get(); //читання з файлу символу \n
}
//виведення прочитаних зміних на екран
 cout<<"----In fail----\n";
 cout<<"    Country    Capital  Airports\n";
 for(int i=0;i<5;i++)
  { cout<<num1_c[i]<<") ";  //порядковий номер
    cout.width(8);  cout<<str1_c[i] <<"  ";  //назва країни
    cout.width(8);  cout<<str2_c[i] <<"  ";  //назва столиці 
    cout.width(5);  cout<<num2_c[i]<<endl;// кількість аеропортів
  }
in.close(); //закриття файлу
return 0;}

