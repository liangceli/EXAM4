#pragma once
#include<iostream>
#include<string>
#include"Employee.h"

class Casual: public Employee{
    private:
    int dayCount;   

    public:
    Casual();           
    Casual(int payRate);                // Create a Casual with a payRate
    float hoursWorked[7];                               
    void endWorkDay();

    void set_count(int count);
    int get_count(); 

    void work(int mins);
    float pay();         
};
