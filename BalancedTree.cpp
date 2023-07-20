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
  

pair<bool,int> BALANCE(node* root){


      if (root == NULL){

        pair<bool,int> p = make_pair(true,0);

        return p;
    }

    pair<bool,int> left = BALANCE(root->left);

    pair<bool,int> right = BALANCE(root->right);

    bool opt1 = left.first;

    bool opt2 = right.first;

    bool opt3 = abs (left.second - right.second <= 1); 

    pair<int,int> ans;

    if (opt1 && opt2 && opt3){
        ans.first = true;
    }
    else {
        ans.first = false;
    }

    ans.second = max(left.second , right.second) + 1 ;

    return ans;


}  




int main (){


   node* root = NULL;

   int count = 0;

   root  = treeGeneration(root);

   

 

   return 0;

}