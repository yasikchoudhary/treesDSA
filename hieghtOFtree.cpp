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

 int height (node* root){

  // base condition
   
   if (root == NULL){

    return 0;

   }
    
  // left se value lekr aao  

   int left = height(root->left);

  // right se valyue lekr aao 

   int right  = height(root->right);

   // dono ko max nikalke + 1

   int ans = max(left,right) + 1;

   return ans;

 }



int main (){


   node* root = NULL;

   int count = 0;

   root  = treeGeneration(root);

   int ans  = height(root);

   cout<<"height of tree if : "<<ans;

   return 0;

}