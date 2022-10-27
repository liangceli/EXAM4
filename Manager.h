#pragma once
#include<iostream>
#include<string>
#include"Employee.h"

class Manager:public Employee{
    private:
    float hoursWorked;                    
    int daysWorked;     

    public:
    Manager();            
    Manager(int payRate);                // Create a Manager with a payRate   
    void set_hours(int h);
    float get_hours();
    void set_days(int d);
    int get_days();
    void work(int mins);
    float pay(); 
};
