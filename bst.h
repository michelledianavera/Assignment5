#include <iostream>

template<typename T>
//treeNode implementation
class treeNode{
public:
  treeNode();
  treeNode(int k, T d);
  ~treeNode();

  int key;
  int k;
  T data;
  treeNode<T> *left;
  treeNode<T> *right;


};

//treeNode constructor
template <typename T>
treeNode<T>::treeNode(){
  left = NULL;
  right = NULL;

}
//overloaded constructor
template <typename T>
treeNode<T>::treeNode(int k, T d){
  key = k;
  data = d;
  left = NULL;
  right = NULL;

}
//treeNode deconstructor
template <typename T>
treeNode<T>::~treeNode(){
  left = NULL;
  right = NULL;
}

//binary search tree class
template <typename T>
class bst{
public:
  //constructors
  bst();
  ~bst();

//variables
  treeNode<T> *root;
  int key;
//functions
  bool isEmpty();

  void insert(int k, T value);
  T* search(int num);
  void printTree(treeNode<T>* node);

};
//constructor
template<typename T>
bst<T>::bst(){
  root = NULL;


}
//bst destructor
template<typename T>
bst<T>::~bst(){
  delete root;
}

// bst search function

template<typename T>
T* bst<T>::search(int num){
  T* obj;
  treeNode<T> *curr = root;

  while(curr!=NULL){
    if(num > curr -> key){
      curr = curr-> right;
    }
    else if(num < curr->key){
      curr = curr -> left;
    }
    else{
      obj = curr->data;
      break;
    }
    return obj;
  }


}
//bst print tree function
template<typename T>
void bst<T>::printTree(treeNode <T> *node){

  if(node ==NULL){
    return;
  }
  printTree(node->left);
  cout << node->key<<endl;

  printTree(node->right);

}
//bst insert function
template<typename T>
void bst<T>::insert(int k, T value){
  treeNode<T> *node = new treeNode<T>(k, value);
  if(isEmpty()){
    root = node;
  }
  else{
    treeNode<T>* curr = root;
    treeNode<T>* parent;

    while(true){
      parent = curr;
      if( k < curr -> key){
        curr = curr -> left;

      }
      if(curr == NULL){
        parent->left = node;
        break;
      }
      else{
        curr = curr->right;
        if(curr == NULL){
          parent->right = node;
          break;
        }

      }

    }

  }
}

//bst boolean to check if empty
template<typename T>
bool bst<T>::isEmpty(){

    return(root == NULL);
}
