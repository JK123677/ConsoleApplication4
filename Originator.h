#ifndef ORIGINATOR_H
#define ORIGINATOR_H

#include "Memento.h"
#include <string>
#include <iostream>

class Originator {
private:
    std::string state_;
    std::string GenerateRandomString(int length = 10);

public:
    Originator(std::string state);
    void DoSomething();
    Memento* Save();
    void Restore(Memento* memento);
};

#endif // ORIGINATOR_H

