#include <iostream>
using namespace std;

//faculty class constructor
faculty::faculty(){
  flevel = " ";
  department = " ";

}
//faculty overloaded constructor
faculty::faculty(string newLevel, string newDepartment){
  flevel = newLevel;
  department = newDepartment;

}
//faculty destructor

faculty::~faculty(){



}
//getter for level
void faculty::getFlevel(){
  cout << flevel;

}
//setter for level
void faculty::setFlevel(string thisLevel){

    flevel = thisLevel;
}
//getter for department level
void faculty::getDepartment(){
    cout << department;
}
//setter for department level
void faculty::setDepartment(string thisDepartment){
  department = thisDepartment;
}
//printing info 
void faculty::printInfo(){

  cout << name << " . ID: " << id << ". Level: " << ". Department: " << department << "\n";
}
