#pragma once
#include<iostream>
#include<string>

class Employee{
    protected:
    int _payRate; // hourly payRate
    float energyLevel;   // Initially 100%

    public:
    Employee();
    Employee(int payRate);   // creates a Employee with payRate
    void takeABreak(int mins);
    void set_payrate(int rate);
    int get_payrate();
    void set_energylevel(float level);
    float get_energylevel();

    virtual void work(int mins)=0;
    virtual float pay()=0;
};