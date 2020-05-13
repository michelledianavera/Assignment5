#include <iostream>

using namespace std;
//faculty class
class faculty: public person{
public:
  //constructors 
  faculty();
  faculty(string newLevel, string newDepartment);
  //nts: need to add list of advisees
  ~faculty();

  //variables
  string flevel;
  string department;


  //functions

  void setFlevel(string thisLevel);
  void getFlevel();
  void setDepartment(string thisDepartment);
  void getDepartment();
  void printInfo();



};
