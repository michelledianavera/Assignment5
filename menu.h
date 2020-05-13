#include <iostream>

using namespace std;
//menu class
class menu{
public:
  //menu constructor
  menu();
  ~menu();

//functions
  void input(int userInput);
  void showMenu();

//variables 
  bst<student> *studentTable;
  bst<faculty> *facultyTable;

};
