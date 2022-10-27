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
    void set_payRate(int rate);
    int get_payRate();
    void set_energyLevel(float level);
    float get_energyLevel();

    virtual void work(int mins)=0;
    virtual float pay()=0;
};