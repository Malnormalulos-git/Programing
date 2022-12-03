#include <stdlib.h>
#include <iostream>
#include <fstream>    // �������� ��� ������ � �������
#include <string.h>   // �������� ��� ������ � �������
using namespace std;
int main(){
 char filename[20]="My_fail.txt"; //����� ��������� � ����������
//���������� ������ ��� ������ out � ��'�������� ���� � ������
 ofstream out(filename);
 if(!out) {cerr<<"Error:\n"; return 1;} //�������� �������� �����
// ���������� �� ����������� ����� � �����
 int num1[5]={1,2,3,4,5}; // ���������� �����
 char str1[5][30]={"Ukraine","France","England","Italy","Albania"}; // ����� �����
 char str2[5][30]={"Kiev","Paris","London","Rome","Tirana"};//����� �������
 int num2[5]={2,3,6,3,1}; // ������� ��������� � �������
//����� ����� � ������������� � ����� � ����� � ���� 
for(int i=0;i<5;i++)
 {out.write((char*)(&num1[i]),sizeof(int));//����� � ���� ������ � ������������� � �����
  out.write(str1[i], strlen(str1[i])); //����� � ���� ����� � ������ �����
  out.write(str2[i], strlen(str2[i])); // ����� � ���� ����� � ������ �������
  out.write((char*)(&num2[i]),sizeof(int));//����� � ���� ������� ���������
  //out.put('\n'); //����� � ���� ������� \n
 }
out.close();  // �������� �����
// ���������� ������ ��� ������ in � ��'�������� ���� � ������
 ifstream in(filename);
 if(!in) //�������� �������� �����
   {cerr<<"Error:\n"; return 1;}
  // ������������ ���'�� ��� ����� �� �����
 int num1_c[5]; // �� ���������� �����
 char str1_c[5][30]; //��  ����� �����
 char str2_c[5][30]; // �� ����� �������
 int num2_c[5]; // �� ������� ���������
 int istr; // �� ������� ������� � �����

// ������� � ����� ����� � ������������� � ��� �������� ����
for(int i=0;i<5;i++)
 {in.read((char*)(&num1_c[i]),sizeof(int));//������� � ����� ����� � ������������� � int
  in.read(str1_c[i],strlen(str1[i])); // ������� � ����� ����� � ������ ����� 
  istr=in.gcount(); // ������� ���������� ������� � �����
  str1_c[i][istr]='\0'; // ������� ����-������ � ����� �����
  in.read(str2_c[i],strlen(str2[i])); // ������� � ����� ����� � ������ �������
  istr=in.gcount(); // ������� ���������� ������� � �����
  str2_c[i][istr]='\0'; // ������� ����-������ � ����� �����
  in.read((char*)(&num2_c[i]),sizeof(int));//������� � ����� ����� � ������������� � int
  //in.get(); //������� � ����� ������� \n
}
//��������� ���������� ����� �� �����
 cout<<"----In fail----\n";
 cout<<"    Country    Capital  Airports\n";
 for(int i=0;i<5;i++)
  { cout<<num1_c[i]<<") ";  //���������� �����
    cout.width(8);  cout<<str1_c[i] <<"  ";  //����� �����
    cout.width(8);  cout<<str2_c[i] <<"  ";  //����� ������� 
    cout.width(5);  cout<<num2_c[i]<<endl;// ������� ���������
  }
in.close(); //�������� �����
return 0;}

