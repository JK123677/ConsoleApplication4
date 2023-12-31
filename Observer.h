#ifndef OBSERVER_H
#define OBSERVER_H

#include "IObserver.h"
#include "Subject.h"

class Observer : public IObserver {
public:
	Observer(Subject &subject);
	virtual ~Observer();
	void Update(const std::string &message_from_subject) override;
	void RemoveMeFromTheList();
	void PrintInfo();
	void hehe();

private:
	std::string message_from_subject_;
	Subject &subject_;
	static int static_number_;
	int number_;
};

#endif 