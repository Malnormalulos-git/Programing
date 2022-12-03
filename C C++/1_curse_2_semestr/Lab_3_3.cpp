#include <iostream>
using namespace std;

class Worker{
	float MoneyOfWorker; // Капітал працівника
	static float MoneyOfFirm; //оголошення статичного члена класу, капітал фірми
	float k_W, k_F;
	public:
		Worker(float);// конструктор
		void work(float); //прототип методу підрахунку капіталу працівника і фірми
		void Set_k_W(float);
		void Set_k_F(float);
		void display(){ // метод виведення капіталу працівника
			cout << MoneyOfWorker << endl;
		}
		void display_Firm(){ //метод виведення капіталу фірми
			cout << MoneyOfFirm << endl;
		}
};

Worker::Worker(float m = 30){ // конструктор
		MoneyOfWorker = m;
		k_W = 2;
		k_F = 10;
	} 

void Worker::work(float period){ // метод підрахунку капіталу працівника і фірми
	MoneyOfWorker += k_W*period;
	MoneyOfFirm += k_F*period;
}

void Worker::Set_k_W(float k){
	k_W = k;
}

void Worker::Set_k_F(float k){
	k_F = k;
}
		
float Worker::MoneyOfFirm = 1000; //ініціалізація статичного члена


int main(){
	const int n = 5;// кількість працівників
	Worker M[n]={50, 28, 35, 45}; //Визначення масиву об'єктів класу і їх ініціалізація
	float a, b;
	cout << "Initial worker's money:\n";
	for(int i = 0; i < n; i++){
		cout << "worker " << i + 1 << ": ";
		M[i].display(); // виведення капіталу працівників
	}
	cout << "Initial company's money:\n";
	M[0].display_Firm(); // виведення капіталу фірми
	
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
		M[i].display(); // виведення капіталу а працівників
	}
	cout << "Final company's money:\n";
	M[0].display_Firm();// виведення капіталу фірми
	return 0;
}

