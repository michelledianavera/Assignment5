#include <iostream>
using namespace std;
//student constructor
student::student(){
  level = " ";
  major = " ";
  gpa = 0.0;
}
//student overloaded constructor
student::student(string newLevel, string newMajor, double newGPA, int newAdvisor){
  level = newLevel;
  major = newMajor;
  gpa = newGPA;
  advisor = newAdvisor;

}
//student destructor
student::~student(){

}
//getter for student's level
void student::getLevel(){
  cout << level;

}

//setter for student's level
void student::setLevel(string thisLevel){

  level = thisLevel;

}
//getter for student's major
void student::getMajor(){

    cout << major;

}
//setter for student's major
void student::setMajor(string thisMajor){
  major = thisMajor;

}
//getter for student's GPA
void student::getGPA(){

  cout << gpa;
}
//setters for student's GPA
void student::setGPA(double thisGPA){

  gpa = thisGPA;
}
//getters for advisor info
void student::getAdvisor(){
  cout << advisor;
}
//setting advisor info
void student::setAdvisor(int thisAdvisor){
  advisor = thisAdvisor;
}

void student::printInfo(){

  cout << name << " ID: " << id << ".  Level" << level << ". GPA: " << gpa << ". Major: " << major << "\n";
  //need to add advisor ID
}
