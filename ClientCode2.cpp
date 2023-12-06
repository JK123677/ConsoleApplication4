#include <iostream>
#include <list>
#include <string>
#include "Subject.h"
#include "Observer.h"
#include "ClientCode2.h"
#include <typeinfo>

using namespace std;

void ClientCode2() {
	Subject *subject = new Subject;
	Observer *observer1 = new Observer(*subject);
	Observer *observer2 = new Observer(*subject);
	Observer *observer3 = new Observer(*subject);
	Observer *observer4;
	Observer *observer5;
	cout << "Typ pierwszego: " << typeid(observer1).name() << '\n';
	subject->CreateMessage("Bye World D:");
	observer3->RemoveMeFromTheList();

	subject->CreateMessage("Something else");
	observer4 = new Observer(*subject);

	observer2->RemoveMeFromTheList();
	observer5 = new Observer(*subject);

	subject->CreateMessage("Asdasdsad");
	observer5->RemoveMeFromTheList();

	observer4->RemoveMeFromTheList();
	observer1->RemoveMeFromTheList();

	cout << "Test";

	delete observer5;
	delete observer4;
	delete observer3;
	delete observer2;
	delete observer1;
	delete subject;
}