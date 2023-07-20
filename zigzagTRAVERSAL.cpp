#include <iostream>
#include <queue>
#include<vector>
using namespace std;

int main(){

    string str  = "ya";

    string str2 = "sik";

    cout<<"hello my name is " + str + " " + str2 <<endl;

    return 0;
}

// class node{

//     public:

//         int data;
//         node* left;
//         node* right;


//         node(int data){
//              this->data = data;
//              this->left = NULL;
//              this->right = NULL;
//         }

// };


//  node* treeGeneration(node* root){

//      cout<<"enter data :"<<endl;
//      int data;
//      cin>>data;

//      if (data == -1){

//        return NULL;

//      }

//      root = new node(data);
     
//     cout<<"enter left node of "<<root->data<<" :"<<endl; 
//      root->left = treeGeneration(root->left);

//       cout<<"enter rigth node of "<<root->data<<" :"<<endl; 

//       root->right = treeGeneration(root->right);

//       return root;

//  }


//  vector<int> zigzagORDER (node* root){

//     vector <int> result;

//     if (root == NULL){
//         return result;
//     }

//     queue<node*> q;

//     q.push(root);

//     bool traverse = true;

//     while (! q.empty()){
          
//         int n = q.size();

//         vector <int> ans(n);

//         for (int i = 0;i<n;i++){

//              node* temp = q.front();

//              q.pop();

//             int index  = traverse ? i : n - i - 1;

//             ans[index] = temp->data;

//           if (temp->left != NULL)
//             q.push(temp->left);
        
//         if (temp->right  != NULL)
//                 q.push(temp->right);

//         }

//         traverse = !traverse;

//    for (int i = 0;i<ans.size();i++){
//        result.push_back(ans[i]);
//    }

//     }

//     return result;




//  }
  




// int main (){


//    node* root = NULL;

//    int count = 0;

//    root  = treeGeneration(root);

//    cout<<endl;

//    cout<<" zig zag traversal is : ";

//    vector <int> ans = zigzagORDER(root);

//    for (int i = 0;i<ans.size();i++){
//     cout<< ans[i]<<" ";
//    }
  

//   // 1 2 3 -1 -1 5 -1 -1 4 -1 6 -1 -1
   

 

//    return 0;

// }