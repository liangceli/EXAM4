#include<iostream>
#include<string>
#include"Employee.h"
#include"Manager.h"
using namespace std;

int main(){
    Manager m;
    m.set_energyLevel(100.0);
    m.work(60);
    
    return 0;
}