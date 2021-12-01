#include "Tractor.h"
#include <iostream>

Tractor::Tractor(string tools, string bazr, float weigth, float power) : AgricultureTools(tools, bazr){

    this->weight = weigth;
    this->power = power;

}



float Tractor::getWeight() const {
    return weight;
}

void Tractor::setWeight(float weigth) {
    Tractor::weight = weigth;
}

float Tractor::getPower() const {
    return power;
}

void Tractor::setPower(float power) {
    Tractor::power = power;
}

void Tractor::print() const
{
    AgricultureTools::print();
    cout << "Power: " << getPower() << "    Weight: " << getWeight() << endl;
}
