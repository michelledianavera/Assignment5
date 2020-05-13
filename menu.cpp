#include <iostream>

using namespace std;
//menu constructor
menu::menu(){
//initializing databases
bst<student> *studentTable = new bst<student>();
bst<faculty> *facultyTable = new bst<faculty>();

}
//menu destructor
menu::~menu(){

}
//main menu
void menu::showMenu(){
  cout << "Please enter option using the following numbers:" << endl;
  cout << "1. Print all students and their information (sorted by ascending ID #)" << endl;
  cout << "2. Print all faculty and their information (sorted by ascending id #)" << endl;
  cout << "3. Find and display student information given the students id" << endl;
  cout << "4. Find and display faculty information given the faculty id" << endl;
  cout << "5. Given a student's id, print the name and info of their faculty advisor" <<endl;
  cout << "6. Given a faculty id, print ALL the names and info of his/her advisees." <<endl;
  cout << "7. Add a new student" << endl;
  cout << "8. Delete a student given the id" << endl;
  cout << "9. Add a new faculty member" << endl;
  cout << "10. Delete a faculty member given the id." << endl;
  cout << "11. Change a student's advisor given the student id and the new faculty id" << endl;
  cout << "12. Remove an advisee from a faculty emmber given the ids" << endl;
  cout << "13. Rollback" << endl;
  cout << "14. Exit." << endl;





}
//user input selection
void menu::input(int userInput){

  if(userInput==1){
    cout << "printing all students and their information:" << endl;
  //  studentTable->printTree(s);
  }
  else if(userInput==2){
    cout << "printing all faculty and their information:" << endl;
//  facultyTable->printTree();

  }
  else if(userInput==3){
    cout << "finding and display student information given id:" << endl;
    int thisID;
    cout << "Which ID are you searching for? " <<endl;
    cin >> thisID;
    //studentTable->search(thisID);


  }
  else if(userInput==4){
    cout << "finding and display faculty information given id:" << endl;
    int thisID;
    cout << "Which ID are you searching for? " <<endl;
    cin >> thisID;
    //facultyTable->search(thisID);

  }
  else if(userInput==5){
    cout << "Given the students id, printing out name and info of faculty advisor" << endl;

  }
  else if(userInput==6){

    cout << "given the faculty id, printing out ALL of the students assigned to member" << endl;
  }
  else if(userInput==7){
    cout << "Adding a new student" << endl;
    cout << "What is the name of the student ? " << endl;
    string thisName;
    cin >> thisName;
    cout << "What will be this student's ID number?" << endl;
    int thisID;
    cin >> thisID;
    cout << "What level is this student? " << endl;
    string thisLevel;
    cin >> thisLevel;
    cout << "What is this student's major? " << endl;
    string thisMajor;
    cin >> thisMajor;
    cout << "What is this student's GPA?" << endl;
    double thisGPA;
    cin >> thisGPA;
    treeNode<student> *studentNode = new treeNode<student>();
//initializing this student as a node to be inserted into tree
    student s;
    s.setName(thisName);
    s.setID(thisID);
    s.setLevel(thisLevel);
    s.setGPA(thisGPA);
    s.setMajor(thisMajor);
    studentTable->insert(thisID, s);
    //attempting to insert into tree
   }
  else if(userInput==8){
    cout << "Deleting a student given the id" << endl;

  }
  else if(userInput==9){
    cout << "Adding a new faculty member" << endl;

    cout << "What is the name of the faculty member ? " << endl;
    string thisName;
    cin >> thisName;
    cout << "What will be this faculty member's ID number?" << endl;
    int thisID;
    cin >> thisID;
    cout << "What level is this faculty member? " << endl;
    string thisLevel;
    cin >> thisLevel;
    cout << "What is this faculty member's department? " << endl;
    string thisDepartment;
    cin >> thisDepartment;

    treeNode<faculty> *facultyNode = new treeNode<faculty>();
  //initializing this faculty member as a node to be inserted into tree
    faculty f;
    f.setName(thisName);
    f.setID(thisID);
    f.setFlevel(thisLevel);
    f.setDepartment(thisDepartment);
    facultyTable->insert(thisID, f);
    //attempting to insert into tree
  }
  else if(userInput==10){

    cout << "Deleting a faculty member given the ID" << endl;
  }
  else if(userInput==11){
  cout << "11. Change a student's advisor given the student id and the new faculty id" << endl;

  }
  else if(userInput==12){
  cout << "12. Remove an advisee from a faculty member given the ids" << endl;

  }
  else if(userInput==13){
  cout << "13. Rollback" << endl;
// unable to implement
  }
  else if(userInput==14){
  cout << "14. Exit.";

  }
  else{
    cout << "Input error.";
  }

}
