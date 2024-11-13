#include "transformer.h"
#include <cassert>

trans::trans() : energy(0), damage(0) {}

trans::trans(int energyLevel, int attackDamage) :
    energy(energyLevel), damage(attackDamage) {
    assert(energyLevel >= 0 && attackDamage >= 0);
}

trans::trans(const trans& other) :
    energy(other.energy), damage(other.damage) {}

int trans::getenerg() const {
    return energy;
}

void trans::setenerg(int energyLevel) {
    assert(energyLevel >= 0);
    this->energy = energyLevel;
}

int trans::getattach() const {
    return damage;
}

void trans::setattack(int attackDamage) {
    assert(attackDamage >= 0);
    this->damage = attackDamage;
}

void trans::run() {
    std::cout << "Transformer is running!\n";
}

void trans::attack() {
    std::cout << "Transformer attacks with " << damage << " damage!\n";
}

void trans::recharge() {
    std::cout << "Transformer is recharging!\n";
    energy = 100;
}

iblvicanfly::iblvicanfly() : trans(), flightHeight(0) {}

iblvicanfly::iblvicanfly(int energyLevel, int attackDamage, int flightHeight) :
    trans(energyLevel, attackDamage), flightHeight(flightHeight) {
    assert(flightHeight >= 0);
}

iblvicanfly::iblvicanfly(const iblvicanfly& other) :
    trans(other), flightHeight(other.flightHeight) {}

int iblvicanfly::getheit() const {
    return flightHeight;
}

void iblvicanfly::setheit(int flightHeight) {
    assert(flightHeight >= 0);
    this->flightHeight = flightHeight;
}

void iblvicanfly::attack() {
    std::cout << "FlyingTransformer attacks from the sky with " << damage << " damage!\n";
}

void iblvicanfly::fly() {
    std::cout << "FlyingTransformer is flying at " << flightHeight
              << " meters!\n";
}