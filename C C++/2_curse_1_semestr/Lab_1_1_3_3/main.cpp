#include "Group.h"

int main (){
	Group group;
	char ch;
	do{
		group.addStudent () ;
		cout << "Enter next (y/n)?\n";
		cin >> ch ;
	}while(ch == 'y');
	group.display ();
	cout << "Number students: " << Student::snumber << endl;
// (a) �� ��������� ��'�� ���'�� �������� ��'���� ���� Student?
// - ���
// (b) �������� ������ ����������� � ���'�� ���� �� �����?
// - �
	return 0;
}
