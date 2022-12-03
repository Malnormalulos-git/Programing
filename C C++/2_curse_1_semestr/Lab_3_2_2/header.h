#include <iostream>
using namespace std;

class Book{
	int pages;
	string title;
protected:
	void showInfo();
public:
	Book(int, string);
	~Book();
};


class ExerciseBook: protected Book {
	string owner;
public:
	ExerciseBook(string, int, string);
	~ExerciseBook();
	void showInfo();
};

class Text{
	int words;
	string language;
protected:
	void showInfo();
public:
	Text(int, string);
	~Text();
};


class Novel: protected Book, protected Text{
	string author;
public:
	Novel(string, int, string, int, string);
	~Novel();
	void showInfo();
};

class Roman: protected Novel{
	int numOfVolumes;//кількість томів
public:
	Roman(int, string, int, string, int, string);
	~Roman();
	void showInfo();
};

class TechnicalText: protected Text{
	int terms;
	int charts;
protected:
	void showInfo();
public:
	TechnicalText(int, int, int, string);
	~TechnicalText();
};

class Manual: protected Book, protected TechnicalText{
	int instructions;
public:
	Manual(int, int, string, int, int, int, string);
	~Manual();
	void showInfo();
};
