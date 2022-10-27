#include<iostream>
#include<string>
#include"Employee.h"
using namespace std;

Employee :: Employee(){
    _payRate=0;
    energyLevel=100;
}

Employee :: Employee(int payRate){
    _payRate=payRate;
}

void Employee :: takeABreak(int mins){
    if(energyLevel>=100){
        return;
    }
    energyLevel=energyLevel+mins*2;
}

void Employee :: set_payRate(int rate){
    _payRate=rate;
}

int Employee :: get_payRate(){
    return _payRate;
}

void Employee :: set_energyLevel(float level){
    energyLevel=level;
}

float Employee :: get_energyLevel(){
    return energyLevel;
}