#include<iostream>
#include<string>
#include"Employee.h"
using namespace std;

Employee :: Employee(){
    _payRate=0;
    energyLevel=100.0;
}

Employee :: Employee(int payRate){
    _payRate=payRate;
}

void Employee :: takeABreak(int mins){
    energyLevel=energyLevel+mins*2.0;
    if(energyLevel>=100.0){
        energyLevel=100.0;
    }
}

void Employee :: set_payrate(int rate){
    _payRate=rate;
}

int Employee :: get_payrate(){
    return _payRate;
}

void Employee :: set_energylevel(float level){
    energyLevel=level;
}

float Employee :: get_energylevel(){
    return energyLevel;
}