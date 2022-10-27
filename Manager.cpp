#include<iostream>
#include<string>
#include"Employee.h"
#include"Manager.h"
using namespace std;

Manager :: Manager(){
    daysWorked=0;
    energyLevel=100.0;
    hoursWorked=0.0;
    payment=0.0;

}    

Manager :: Manager(int payRate){
    daysWorked=0;
    _payRate=payRate;
    energyLevel=100.0;
    hoursWorked=0.0;
    payment=0.0;
}  

void Manager :: set_hours(int h){
    hoursWorked=h;
}

float Manager :: get_hoursWorked(){
    return hoursWorked;
}

void Manager :: set_days(int d){
    daysWorked=d;
}

int Manager :: get_daysWorked(){
    return daysWorked;
}

void Manager :: work(int mins){

    if(hoursWorked>=480){
        daysWorked++;
        hoursWorked=0.0;
        energyLevel=100.0;
        return;
    }

    if(energyLevel<=0){
            //hoursWorked=hoursWorked+mins;
            return;
        }
    
    energyLevel=energyLevel-mins*0.25;
    hoursWorked=hoursWorked+mins;
}

float Manager :: pay(){
    payment=daysWorked*8*_payRate;
    daysWorked=0;
    hoursWorked=0.0;
    return payment;
}