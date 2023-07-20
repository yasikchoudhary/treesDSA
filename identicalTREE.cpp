#include <iostream>
using namespace std;

class node{

    public:

        int data;
        node* left;
        node* right;


        node(int data){
             this->data = data;
             this->left = NULL;
             this->right = NULL;
        }

};


 node* treeGeneration(node* root){

     cout<<"enter data :"<<endl;
     int data;
     cin>>data;

     if (data == -1){

       return NULL;

     }

     root = new node(data);
     
    cout<<"enter left node of "<<root->data<<" :"<<endl; 
     root->left = treeGeneration(root->left);

      cout<<"enter rigth node of "<<root->data<<" :"<<endl; 

      root->right = treeGeneration(root->right);

      return root;

 }

 bool IDENTICAL(node* r1 , node* r2){

      if (r1 == NULL && r2 == NULL){

        return true; 
      }
     if (r1 == NULL && r2 != NULL){

        return false; 
      }

     if (r1 != NULL && r2 == NULL){

        return false; 
      }

  

   bool left =  IDENTICAL(r1->left,r2->left);

   bool right =  IDENTICAL(r1->right,r2->right);

   
   bool ans = (r1->data == r2->data);

   if (left && right && ans){
    return true;
   }

   else{
    return false;
   }
    

 }
  


int main (){


   node* root = NULL;

   int count = 0;

   root  = treeGeneration(root);

   

 

   return 0;

}