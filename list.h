#include <iostream>

using namespace std;
//list class
template<typename T>
class list{
//constructors
public:
  list();
  ~list();
//variables
int size;
listNode<T> *front;
listNode<T> *back;
//functions
bool isEmpty();
void printList();
void insertFront(T* data);
void insertBack(T* data);
T* removeFront();
T* removeBack();
int search(int val);
T* remove(T* value);

T* getSize();




};

//constructor
template<typename T>
list<T>::list(){
  front = new listNode<T>;
  back = new listNode<T>;
  front->next = back;
  back->next = front;
  size = 0;

}
//destructor
template<typename T>
list<T>::~list(){
  while(!isEmpty()){
    removeFront();

  }

}
//function to print listNode
template<typename T>
void list<T>::printList(){
  listNode<T>* ptr = front;
     cout << "{";
     while (ptr)
     {
       cout << ptr->data;
       cout << (ptr->next ? ", " : "}");
       ptr = ptr->next;
     }
     cout << endl;


}

//function to insert at front of Doubly Linked List
template<typename T>
void list<T>::insertFront(T* d){
  listNode<T> *nNode = new listNode<T>();
  front->prev = nNode;
  nNode->next = front;
  front = nNode;
  size++;
}

//function to insert at the back of Doubly Linked List
template <typename T>
void list<T>::insertBack(T* d) { //Insert data into back of the DLL
    listNode<T> *node = new listNode<T>(d);
      back->next = node;
      node->prev = back;
      node->next = NULL;
      back = node;
      size++;
}

//function to remove from the front of the DoublyLinkedList
template<typename T>
T* list<T>::removeFront(){
  listNode<T> *node = front;
  if(front->next == NULL){
    back = NULL;
  }
  else{
    front->next->prev = NULL;

  }
  front = front -> next;
  node -> next = NULL;
  T temp = temp->data;
  delete temp;
  --size;

}

//function to remove certain value from list
template<typename T>
T* list<T>::remove(T* value){
  listNode<T> *curr = front;

  while (curr->data!=value){

  //keep iterating until we find our value
  curr = curr -> next;

  }
  if (curr==NULL){
  return NULL; //might need return -1

  }
  //we found the value, now lets proceed to delete

  if (curr == front){

  //check if node to be deleted is the front
  front = curr->next;
  }
  else{
  //node to deleted is not the front or back, its in between
  curr -> next-> prev = curr -> prev;
  }

  curr->next = NULL;
  curr->prev = NULL;
  int temp = curr->data;
  delete curr;
  size--;
  return temp;
}
//function to get size 
template<typename T>
T* list<T>::getSize(){

  cout << size;

}
