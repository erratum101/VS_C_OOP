#include "transformer.h"
#include <iostream>
#include <cassert>
#include "transformer.cpp"
int main() {

    trans transformer1;

    trans transformer2(50, 20);
    assert(transformer2.getenerg() == 50);
    assert(transformer2.getattach() == 20);
    trans transformer3(transformer2);
    assert(transformer3.getenerg() == 50);
    assert(transformer3.getattach() == 20);
    transformer2.setenerg(100);
    assert(transformer2.getenerg() == 100);
    transformer2.setattack(30);
    assert(transformer2.getattach() == 30);
    iblvicanfly flyingTransformer1;
    assert(flyingTransformer1.getenerg() == 0);
    assert(flyingTransformer1.getattach() == 0);
    assert(flyingTransformer1.getheit() == 0);
    iblvicanfly flyingTransformer2(75, 40, 1000);
    assert(flyingTransformer2.getenerg() == 75);
    assert(flyingTransformer2.getattach() == 40);
    assert(flyingTransformer2.getheit() == 1000);
    iblvicanfly flyingTransformer3(flyingTransformer2);
    assert(flyingTransformer3.getenerg() == 75);
    assert(flyingTransformer3.getattach() == 40);
    assert(flyingTransformer3.getheit() == 1000);
    flyingTransformer2.setenerg(100);
    assert(flyingTransformer2.getenerg() == 100);
    flyingTransformer2.setattack(60);
    assert(flyingTransformer2.getattach() == 60);
    flyingTransformer2.setheit(2000);
    assert(flyingTransformer2.getheit() == 2000);

    transformer2.attack();
    flyingTransformer2.fly();
    flyingTransformer2.attack();

    std::cout << "done";

    return 0;
}
