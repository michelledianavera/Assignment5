#include <iostream>

using namespace std;
//list node class
template <typename T>
class listNode{
public:
  T data;
  listNode *next;
  listNode *prev;

  listNode();
  listNode(T d);
  ~listNode();


};
//list node constructor
template <typename T>
listNode<T>::listNode(){
  next = NULL;
  prev = NULL;

}
//listnode overloaded constructor
template <typename T>
listNode<T>::listNode(T d){
  data = d;
  next = NULL;
  prev = NULL;

}
//listnode destructor 
template <typename T>
listNode<T>::~listNode(){

  next = NULL;
  prev = NULL;

}
