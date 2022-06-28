/**
 * Experiment - 10
 * @USN        - 4SO20CS012
 * @SUBJECT    - Data Structures Laboratory
 * @DEPARTMENT - Computer Science and Engineering
 * @COLLEGE    - ST JOSEPH ENGINEERING COLLEGE Vamanjoor, Mangaluru
 * Question :
 * Design, Develop and Implement a menu driven Program in C for the following operations
 * on Binary Search Tree (BST) of Integers
 * a. Create a BST of N Integers: 6, 9, 5, 2, 8, 15, 24, 14, 7, 8, 5, 2
 * b. Traverse the BST in Inorder, Preorder and Post Order
 * c. Search the BST for a given element (KEY) and report the appropriate message
 * e. Exit
 */

#include <stdio.h>
#include <stdlib.h>


struct BST {
    int data;
    struct BST *left, *right;
};


typedef struct BST NODE;
NODE *createtree(NODE *node, int data){
    if(node == NULL) {
        NODE *temp = (NODE*)malloc(sizeof(NODE));
        temp->data = data;
        temp->left = temp->right = NULL;
        return temp;
    }
    if(data < (node->data)) node->left = createtree((node->left),data);
    else if(data > (node->data)) node->right = createtree((node->right),data);
    else printf("\nDuplicate data found \n");
    return node;
}


NODE *search(NODE *node, int data) {
    if(node == NULL) printf("\nElement not found\n");
    else if(data < (node->data)) node->left = search((node->left),data);
    else if(data > (node->data)) node->right = search((node->right),data);
    else printf("\nThe element %d is found", node->data);
    return node;
}


void inorder(NODE *node){
    if(node != NULL){
        inorder(node->left);
        printf("%d\t",node->data);
        inorder(node->right);
    }
}


void preorder(NODE *node) {
    if(node != NULL) {
        printf("%d\t",node->data);
        preorder(node->left);
        preorder(node->right);
    }
}


void postorder(NODE *node) {
    if(node != NULL) {
        postorder(node->left);
        postorder(node->right);
        printf("%d\t",node->data);
    }
}


void main() {
    int data,ch,i,n;
    NODE *root = NULL;
    int a[20];
    do {
        printf("\n<========== MENU ===========>\n");
        printf("\n1.Insertion in BST\n2.Search element in BST\n3.Inorder Traversal\n4.Preorder\n5.Postorder\n6.Exit\n");
        printf("\nEnter your choice :");
        scanf("%d", &ch);
        switch(ch) {
            case 1 : printf("\nEnter 'N' value :");
                     scanf("%d", &n);
                     printf("\nEnter values for the BST :");
                     for(i = 0;i < n;i++) {
                        scanf("%d",&a[i]);
                        root = createtree(root,a[i]);
                     }
                     break;
            case 2 : printf("\nEnter the element to be searched :");
                     scanf("%d",&data);
                     root = search(root,data);
                     break;
            case 3 : printf("\nInorder Traversal :");
                     inorder(root);
                     break;
            case 4 : printf("\nPreorder Traversal :");
                     preorder(root);
                     break;
            case 5 : printf("\nPostorder Traversal :");
                     postorder(root);
                     break;
            case 6 : exit(0); break;
            default : printf("\nInvalid Choice \n");
                      break;
        }
    } while(1);
}
