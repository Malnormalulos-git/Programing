#include <iostream>
using namespace std;

class Worker{
	float MoneyOfWorker; // ������ ����������
	static float MoneyOfFirm; //���������� ���������� ����� �����, ������ �����
	float k_W, k_F;
	public:
		Worker(float);// �����������
		void work(float); //�������� ������ ��������� ������� ���������� � �����
		void Set_k_W(float);
		void Set_k_F(float);
		void display(){ // ����� ��������� ������� ����������
			cout << MoneyOfWorker << endl;
		}
		void display_Firm(){ //����� ��������� ������� �����
			cout << MoneyOfFirm << endl;
		}
};

Worker::Worker(float m = 30){ // �����������
		MoneyOfWorker = m;
		k_W = 2;
		k_F = 10;
	} 

void Worker::work(float period){ // ����� ��������� ������� ���������� � �����
	MoneyOfWorker += k_W*period;
	MoneyOfFirm += k_F*period;
}

void Worker::Set_k_W(float k){
	k_W = k;
}

void Worker::Set_k_F(float k){
	k_F = k;
}
		
float Worker::MoneyOfFirm = 1000; //����������� ���������� �����


int main(){
	const int n = 5;// ������� ����������
	Worker M[n]={50, 28, 35, 45}; //���������� ������ ��'���� ����� � �� �����������
	float a, b;
	cout << "Initial worker's money:\n";
	for(int i = 0; i < n; i++){
		cout << "worker " << i + 1 << ": ";
		M[i].display(); // ��������� ������� ����������
	}
	cout << "Initial company's money:\n";
	M[0].display_Firm(); // ��������� ������� �����
	
	cout << "\nEnter k_W for Worker_5: ";
	cin >> a;
	M[4].Set_k_W(a);
	cout << "Enter k_F for Worker_5: ";
	cin >> b;
	M[4].Set_k_F(b);
	
	cout << "\nFinal worker's money:\n";
	for(int i = 0; i < n; i++){
		M[i].work(10); // period=10
		cout << "worker " << i + 1 << ": ";
		M[i].display(); // ��������� ������� � ����������
	}
	cout << "Final company's money:\n";
	M[0].display_Firm();// ��������� ������� �����
	return 0;
}

