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

 pair<int,int> FINDdiametre(node* root){

    // base condition
    if (root == NULL){

        pair<int,int> p = make_pair(0,0);

        return p;
    }

    pair<int,int> left = FINDdiametre(root->left);

    pair<int,int> right = FINDdiametre(root->right);

    int opt1 = left.first;

    int opt2 = right.first;

    int opt3 = left.second + right.second + 1;

    pair<int,int> ans;

    ans.first = max(opt1,max(opt2,opt3));

    ans.second = max(left.second , right.second) + 1 ;

    return ans;


 }


 
int main (){


   node* root = NULL;

   int count = 0;

   root  = treeGeneration(root);

  



   return 0;

}