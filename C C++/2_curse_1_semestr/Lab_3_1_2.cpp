#include <iostream>

using namespace std;

class Abstract{
public: 
	string name;
private: 
	int phone;
protected: 
	string e_mail;
public:
	Abstract(){
		cout << "constructor Abstract \n";
		cout << "Enter name: "; 
		cin >> name;
		cout << "Enter phone: "; 
		cin >> phone;
		cout << "Enter e-mail: "; 
		cin >> e_mail;
	}

	~Abstract(){
		cout << "desructor Abstract \n";
	}
	string getEMail(){ 
		return e_mail;
	}
	int getPhone(){ 
		return phone;
	}
};

class ResumeEU: protected Abstract{
protected:
	string experience;
	string education;
public:
	ResumeEU(){
		cout << "constructor ResumeEU \n";
		cout << "Enter experience: "; 
		cin >> experience;
		cout << "Enter education: "; 
		cin >> education;
	}

	string getExperience(){
		return experience;
	}
	
	string getEducation(){
		return education;
	}

	void printResume(){
		cout << "name \t\t" << name << endl;
		cout << "phone \t\t" << getPhone() << endl;
		cout << "e-mail \t\t" << e_mail << endl;
		cout << "experience \t" << experience << endl;
		cout << "education \t" << education << endl;
	}
	
	~ResumeEU(){
		cout << "destructor ResumeEU \n";
	}
};

class CurriculumVitae: protected ResumeEU{
protected:
	string skills;
	string languages;
public:
	CurriculumVitae(){
		cout << "constructor CurriculumVitae \n";
		cout << "Enter skills: "; 
		cin >> skills;
		cout << "Enter languages: "; 
		cin >> languages;
	}
	
	void printCV(){
		cout << "name \t\t" << name << endl;
		cout << "phone \t\t" << getPhone() << endl;
		cout << "e-mail \t\t" << e_mail << endl;
		cout << "experience \t" << experience << endl;
		cout << "education \t" << education << endl;
		cout << "skills \t\t" << skills << endl;
		cout << "languages \t" << languages << endl;
	}
	
	~CurriculumVitae(){
		cout << "destructor CurriculumVitae \n";
	}
};

class FranceCV: protected CurriculumVitae{
protected:
	unsigned short age;
	int maritalStatus;
	string projetProfessionnel;
public:
	string photoColor;
	
	FranceCV(){
		cout << "constructor FranceCV \n";
		cout << "Enter age: "; 
		cin >> age;
		cout << "Enter maritalStatus: "; 
		cin >> maritalStatus;
		cout << "Enter projetProfessionnel: "; 
		cin >> projetProfessionnel;
		cout << "Enter photoColor: "; 
		cin >> photoColor;
	}
	
	void printCV(){
		cout << "name \t\t\t" << name << endl;
		cout << "phone \t\t\t" << getPhone() << endl;
		cout << "e-mail \t\t\t" << e_mail << endl;
		cout << "experience \t\t" << experience << endl;
		cout << "education \t\t" << education << endl;
		cout << "skills \t\t\t" << skills << endl;
		cout << "languages \t\t" << languages << endl;
		cout << "age \t\t\t" << age << endl;
		cout << "maritalStatus \t\t" << maritalStatus << endl;
		cout << "projetProfessionnel \t" << projetProfessionnel << endl;
		cout << "photoColor \t\t" << photoColor << endl;
	}
	
	~FranceCV(){
		cout << "destructor FranceCV \n";
	}
}; 

int main(){

	cout << "\nInput ResumeEU:\n";
	ResumeEU resumeEU;
	cout << "\nOutput ResumeEU:\n";
	resumeEU.printResume();
	
	cout << "\nInput CurriculumVitae:\n";
	CurriculumVitae curriculumVitae;
	cout << "\nOutput CurriculumVitae:\n";
	curriculumVitae.printCV();

	cout << "\nInput FranceCV:\n";
	FranceCV franceCV;
	cout << "\nOutput FranceCV:\n";
	franceCV.printCV();

	return 0;
}
