#include <iostream>
using namespace std;


class person{
public:
//constructors
  person();
  person(string newName, int newID);
  ~person();

  //variables
  string name;
  int id;

  //functions

  void setName(string thisName);
  void getName();
  void setID(int thisID);
  int getID();

};
