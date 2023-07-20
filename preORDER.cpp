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


node* PREorder (node* root){

   // base condition
     
    if (root == NULL){
        return NULL;
    }

    cout<<root->data<<" ";

    PREorder(root->left);

    PREorder(root->right);


  return root;

}



node* POSTorder (node* root){

   // base condition
     
    if (root == NULL){
        return NULL;
    }

   

    POSTorder(root->left);

    POSTorder(root->right);

     cout<<root->data<<" ";


  return root;

}



node* INorder (node* root){

   // base condition
     
    if (root == NULL){
        return NULL;
    }

   

    INorder(root->left);

    cout<<root->data<<" ";

    INorder(root->right);

   


  return root;

}



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


int main (){


   node* root = NULL;

   root  = treeGeneration(root);


   cout<<endl;

   // prederder traversal
  cout<<"preorder traversal is "<<endl;
   PREorder (root);


   return 0;



}
