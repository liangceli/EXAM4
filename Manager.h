#pragma once
#include<iostream>
#include<string>
#include"Employee.h"

class Manager:public Employee{
    private:
    float hoursWorked;                    
    int daysWorked; 
    float payment;    

    public:
    Manager();            
    Manager(int payRate);                // Create a Manager with a payRate   
    void set_hours(int h);
    float get_hoursWorked();
    void set_days(int d);
    int get_daysWorked();
    void work(int mins);
    float pay(); 
};
