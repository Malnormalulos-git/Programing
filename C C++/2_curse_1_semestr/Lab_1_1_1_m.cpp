#include <iostream>
using namespace std;

class Food{
public :
	string name;
	float price;
	
	Food(string s, float p, float w){
		name = s;
		price = p;
		weight = w;
	}

	float getWeight(){
		return weight;
	}
private:
	float weight;
};

int main(){
	float totalWeight = 0;
	float totalPrice = 0;

	Food orange1("Valencia", 	21, 	96);
	Food orange2("Tarocco", 	22, 	105);
	cout <<"totalPriceOranges = " << orange1.price + orange2.price << endl;
	cout <<"totalWeightOranges = " << orange1.getWeight() + orange2.getWeight() << endl << endl;

	Food apple [3]={ 	Food("Golden", 		10.50, 	112), 
						Food("McIntosh", 	11.99, 	100), 
						Food("Jonathan", 	12, 	120)	};
	for(int i = 0; i < 3; i++){
		totalPrice += apple[i].price;
		totalWeight += apple[i].getWeight();
	}
	cout <<"totalPriceApples = " << totalPrice << endl;
	cout <<"totalWeightApples = " << totalWeight << endl << endl;
	
	Food banana1("daTerra", 27, 156);
	Food banana2("Orinoco", 31, 127);
	cout <<"totalPriceBananas = " << banana1.price + banana2.price << endl;
	cout <<"totalWeightBananas = " << banana1.getWeight() + banana2.getWeight() << endl << endl;
	
	totalPrice += orange1.price + orange2.price + banana1.price + banana2.price;
	totalWeight +=  orange1.getWeight() + orange2.getWeight() + banana1.getWeight() + banana2.getWeight();
	cout <<"totalPrice = " << totalPrice << endl;
	cout <<"totalWeight = " << totalWeight << endl << endl;
	
	cout << "sizeof(Food) = " << sizeof(Food) << endl;// string(8 байт) + float(4 байти) + float(4 байти) = 16 байт виділено на поля класу, на методи пам'ять не виділяється
	cout << "sizeof(banana1) = " << sizeof(banana1) << endl;// string(8 байт) + float(4 байти) + float(4 байти) = 16 байт виділено на поля класу, на методи пам'ять не виділяється
	
//	cout << banana1.weight << endl; // компілятор повідомить помилку: [Error] 'float Food::weight' is private, бо ми намагаємося звернутися до приватного члена класа
	
	return 0;
}
