#include <iostream>

using namespace std;

class Folder{
private:
	int numberFiles;
	int folderSize;
public:
	Folder(int n = 0, int s = 0){
		numberFiles = n;
		folderSize = s;
	}
	
	Folder operator + (Folder f){
		Folder tmp;
		tmp.numberFiles = numberFiles + f.numberFiles;
		tmp.folderSize = folderSize + f.folderSize;
		return tmp;
	}
	
	Folder operator - (Folder f){
		Folder tmp;
		tmp.numberFiles = numberFiles - f.numberFiles;
		tmp.folderSize = folderSize - f.folderSize;
		if(tmp.numberFiles < 0)
			tmp.numberFiles = 0;
		if(tmp.folderSize < 0)
			tmp.folderSize = 0;
		return tmp;
	}
	
	Folder operator ++ (int noname){
		numberFiles *= 2;
		folderSize *= 2;
		return * this;
	}
	
	Folder operator -- (int);
	
	void getProperties(){
		cout << numberFiles << " " << folderSize << endl;
	}
};

Folder Folder::operator -- (int noname){
	numberFiles = 0;
	folderSize = 0;
	return * this;
}

int main(){
	Folder f1(4,100), f2(10,300), f3;
	cout << "f1 = ";
	f1.getProperties();
	cout << "f2 = ";
	f2.getProperties();
	
	f3 = f1 + f2;
	cout << "f3 = f1 + f2 = "; 
	f3.getProperties();
	
	f3 = f3 - f1++;
	cout << "f3 = f3 - f1++ = "; 
	f3.getProperties();
	
	f1 = f1 + f2 + f3--;
	cout << "f1 = f1 + f2 + f3-- = "; 
	f1.getProperties();
	
	return 0;
}
