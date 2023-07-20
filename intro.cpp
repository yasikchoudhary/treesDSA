#include<iostream>
#include<queue>
using namespace std ;


class node {

    public :

    int data ;

    node* left ;

    node* right ;

    node(int data){
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }

};

node* treeGentration(node* root){

    cout<<"enter data :"<<endl;
    int data;
    cin>>data;

    root = new node(data);

    // base condition 

    if (data == -1){
        return NULL;
    }

    cout<<"enter data of left child of "<< root->data<<" :"<<endl;
    root->left = treeGentration(root->left);

    cout<<"enter data of right child of "<<root->data<<" :"<<endl;
    root->right = treeGentration(root->right);


    return root;


}

void levelorder(node* &root){
             
             queue<node*> q;

             q.push(root);

             while (!q.empty()){
                
            node* temp = q.front(); 

            cout<<temp->data<<" ";

            q.pop();

            if ( temp->left){

                q.push(temp->left);

            }

            if ( temp->right){

                q.push(root->right);

            }

             }
        

}


int main(){

    node* root = NULL;
    node* temp;
    temp = treeGentration(root);

    cout<<endl;


    levelorder(temp);





    return 0;
}