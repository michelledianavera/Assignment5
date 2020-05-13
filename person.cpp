#include <iostream>
using namespace std;

person::person(){

  //default constructor
  name = " ";
  id = 0;


}
//overloaded constructo
person::person(std::string newName, int newID){
  name = newName;
  id = newID;

}
//destructor
person::~person(){


}
//getter for name

void person::getName(){

  cout << name;

}
//setter for name
void person::setName(string thisName){

    name = thisName;
}
//getter for ID
int person::getID(){

  return id;
}
//setter for ID 
void person::setID(int thisID){

    id = thisID;
}
