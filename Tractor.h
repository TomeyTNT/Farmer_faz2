#ifndef TRACTOR_H
#define TRACTOR_H
#include "AgricultureTools.h"


class Tractor : public AgricultureTools {
private:

    float weight;
    float power;

public:
    Tractor(string tools, string bazr, float wiegth, float power);


    float getWeight() const;
    void setWeight(float weight);

    float getPower() const;
    void setPower(float power);
    
    void print() const;

};

#endif