#pragma once

enum Meat
{
    Pastrami,
    Chicken,
    Pork,
    Tuna
};

class Sandwhich
{
public:
    Meat meat;
    float weight;
    void heatSandwhich();
private:
    bool isHot;
};
