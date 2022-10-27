#include<iostream>
#include<string>
#include"Employee.h"
#include"Casual.h"
using namespace std;

Casual :: Casual(){
    dayCount=0;
    payment=0.0;
}

Casual :: Casual(int payRate){
    payment=0.0;
    dayCount=0;
    _payRate=payRate;
    energyLevel=100.0;
    for(int i=0; i<7; i++){
        hoursWorked[i]=0.0;
    }
}

void Casual :: endWorkDay(){
    dayCount++;
    energyLevel=100.0;
}

void Casual :: work(int mins){
        if(energyLevel<=0){
           //hoursWorked[dayCount]=hoursWorked[dayCount]+mins;
            return;
        }
        
    if(hoursWorked[dayCount]>=200){
        dayCount++;
        return;
    }
     energyLevel=energyLevel-mins*0.5;
      hoursWorked[dayCount]=hoursWorked[dayCount]+mins;
}

float Casual :: pay(){
    float payment;
    for(int j=0; j<7; j++){
        if(j==5 || j==6){
            hoursWorked[j]=hoursWorked[j]*2;
        }
        payment=payment+hoursWorked[j]*_payRate;
    }

    dayCount=0;
    for(int i=0; i<7; i++){
        hoursWorked[i]=0.0;
    }
    return payment;
}