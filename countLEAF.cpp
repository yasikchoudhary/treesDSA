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


node* PREorder (node* root , int &count){

   // base condition
     
    if (root == NULL){
        return NULL;
    }

    cout<<root->data<<" ";

    if (root->left == NULL && root->right == NULL){
        count++;
    }

    PREorder(root->left,count);

    PREorder(root->right,count);


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

   int count = 0;

   root  = treeGeneration(root);


   cout<<endl;

   // prederder traversal
  cout<<"preorder traversal is "<<endl;
   PREorder (root,count);

  cout<<endl;

  cout <<"leaf of this tree : "<<count<<endl; 


   return 0;



}