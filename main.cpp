#include <iostream>
#include <fstream>
#include "person.h"
#include "person.cpp"
#include "student.h"
#include "student.cpp"
#include "faculty.h"
#include "faculty.cpp"
#include "listNode.h"
#include "list.h"
#include "bst.h"
#include "menu.h"
#include "menu.cpp"


using namespace std;

int main(int argc, char **argv){
//initializing menu
  menu m;

  int i = 1;
  //setting loop to enable program to run again
  while(i > 0){


  m.showMenu();

  int ans;
//user input for program
  cin >> ans;

  m.input(ans);
}

}
