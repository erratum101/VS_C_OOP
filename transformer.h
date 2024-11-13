#ifndef TRANSFORMER_H
#define TRANSFORMER_H

#include <iostream>

class trans {
protected:
    int energy;
    int damage;

public:
    trans();
    trans(int energyLevel, int attackDamage);
    trans(const trans& other);

    int getenerg() const;
    void setenerg(int energyLevel);
    int getattach() const;
    void setattack(int attackDamage);

    virtual void run();
    virtual void attack();
    void recharge();
};

class iblvicanfly : public trans {
private:
    int flightHeight;

public:
    iblvicanfly();
    iblvicanfly(int energyLevel, int attackDamage, int flightHeight);
    iblvicanfly(const iblvicanfly& other);

    int getheit() const;
    void setheit(int flightHeight);

    void attack() override;
    void fly();
};

#endif 

