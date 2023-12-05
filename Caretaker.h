#ifndef CARETAKER_H
#define CARETAKER_H

#include "Originator.h"
#include <vector>

class Caretaker {
private:
    std::vector<Memento*> mementos_;
    Originator* originator_;

public:
    Caretaker(Originator* originator);
    ~Caretaker();
    void Backup();
    void Undo();
    void ShowHistory() const;
};

#endif // CARETAKER_H
