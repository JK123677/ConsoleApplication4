#ifndef MEMENTO_H
#define MEMENTO_H

#include <string>

class Memento {
public:
    virtual ~Memento() {}
    virtual std::string GetName() const = 0;
    virtual std::string date() const = 0;
    virtual std::string state() const = 0;
};

class ConcreteMemento : public Memento {
private:
    std::string state_;
    std::string date_;

public:
    ConcreteMemento(std::string state);
    std::string state() const override;
    std::string GetName() const override;
    std::string date() const override;
};

#endif // MEMENTO_H