#include <iostream>
using namespace std;


class student: public person{
public:
  student();
  student(string newLevel, string newMajor, double newGPA, int newAdvisor);
  ~student();

  //variables
  string level;
  string major;
  double gpa;
  int advisor;

  //functions

  void setLevel(string thisLevel);
  void getLevel();
  void setMajor(string thisMajor);
  void getMajor();
  void setGPA(double thisGPA);
  void getGPA();
  void setAdvisor(int thisAdvisor);
  void getAdvisor();
  void printInfo();



};
