#include<iostream>
#include<vector>
using namespace std;

class Student{
private:
    string name; 
    double math;
    double physic;
    double chemistry;
public:
    Student(){}
    Student(string name,double math,double physic, double chemistry){
        this -> name = name;
        this -> math = math;
        this -> physic = physic;
        this -> chemistry = chemistry;
    }
    double getMath(){
        return math;
    }
    double getPhysic(){
        return physic;
    }
    double getChemistry(){
        return chemistry;
    }
    string getName(){
        return name;
    }
    void display(){
        cout << " Name: " << name << endl;
        cout << " Point math: " << math << endl;
        cout << " Point physic: " << physic << endl;
        cout << " Point chemistry: " << chemistry << endl;
        cout << " Average: Bo doi hehehehe " << avgPoint() <<endl;
    }
    double avgPoint(){
        return (math + physic + chemistry) /3 ;
    }
    
};