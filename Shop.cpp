#pragma once
#include"Employee.h"
#include"Manager.h"
#include"Casual.h"

class Shop{
    private : 
        Employee ** employee;
        int count;
    public:
        Shop ();
        void addEmployee(Employee *employee);
        Employee** get_employees();
        int get_count();
        static Shop* createShop(int authority);      
};
