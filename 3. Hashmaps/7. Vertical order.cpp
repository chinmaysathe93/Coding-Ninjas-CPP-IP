#include<iostream>
#include <queue>
#include<cmath>
#include<map>
using namespace std;
    
template <typename T>
class BinaryTreeNode {
    public :
    T data;
    BinaryTreeNode<T> *left;
    BinaryTreeNode<T> *right;

    BinaryTreeNode(T data) {
        this -> data = data;
        left = NULL;
        right = NULL;
    }

};


map<int,vector<int>> newm;
void mapinserter(BinaryTreeNode<int>* current,int counter){
    if(current == NULL){
        return ;
    }
    newm[counter].push_back(current->data);
    mapinserter(current->left,counter-1);
    mapinserter(current->right,counter+1);
    return ;
}

void printBinaryTreeVerticalOrder(BinaryTreeNode<int>* root) {	 
    mapinserter(root,0); 

    for(map<int,vector<int>>::iterator itrv=newm.begin();itrv!=newm.end();itrv++){
        for(int i=0;i<itrv->second.size();i++)
            cout<<itrv->second[i]<<" ";
        cout<<endl;
    }    
}

BinaryTreeNode<int>* takeInputLevelWise() {
    int data;
//  cout << "Enter root : ";
    cin >> data;

    BinaryTreeNode<int> *root = new BinaryTreeNode<int>(data);

    queue<BinaryTreeNode<int>* > pendingNodes;
    pendingNodes.push(root);

    while(!pendingNodes.empty()) {
        BinaryTreeNode<int> *current = pendingNodes.front();
        pendingNodes.pop();

        int leftData, rightData;
    //  cout << "Enter left child of : " << current -> data << " : ";
        cin >> leftData;

        if(leftData != -1) {
            BinaryTreeNode<int> *left = new BinaryTreeNode<int>(leftData);
            current -> left = left;
            pendingNodes.push(left);
        }

    //  cout << "Enter right child of  " << current -> data << " : ";
        cin >> rightData;

        if(rightData != -1) {
            BinaryTreeNode<int> *right = new BinaryTreeNode<int>(rightData);
            current -> right = right;
            pendingNodes.push(right);
        }
    }
    return root;

}

int main()
{
    BinaryTreeNode<int> *root = takeInputLevelWise();
    printBinaryTreeVerticalOrder(root);
    return 0;
}
