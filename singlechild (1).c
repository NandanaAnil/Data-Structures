#include<stdio.h>
#include<conio.h>
else if((root->Left != NULL) != (root->Right != NULL))
{ 
    if(root->Left != NULL)
    { 
        delete root;
        root = root->Left;
    }
    else
   { 
        delete root;
        root = root->Right;
    }
}