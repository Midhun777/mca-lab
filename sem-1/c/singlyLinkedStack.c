#include<stdio.h>
#include<stdlib.h>
struct node {
int data;
struct node *link;
};
struct node *top = NULL;
void push() {
struct node *newnode;
newnode = (struct node*)malloc(sizeof(struct node));
if (newnode == NULL) {
printf("\n No space avialble\n");
return;
}
newnode->link = NULL;
printf("\n Enter the element to insert: ");
scanf("%d",&newnode->data);
if (top == NULL) {
top = newnode;
}
else {
newnode->link = top;
top = newnode;
}
printf("\n %d INSERTED SUCCESFULLY", newnode->data);
}
void pop() {
struct node *temp = top;
if (top == NULL) {
printf("\n STACK UNDER FLOW");
return;
}
printf("\n %d is popped ", temp->data);
top = temp->link;
free(temp);
}
void peek() {
struct node *temp = top;
if (top == NULL) {
printf("\n STACK UNDER FLOW");
return;
}
printf("Top Element is %d", temp->data);
}
void display() {
struct node *temp = top;
if (top == NULL) {
printf("\n NO ELEMENTS");
return;
}
printf("\n ELEMENTS IN STACK ARE: \n");
while (temp != NULL) {
printf("%d ", temp->data);
temp = temp->link;
}
}
void search() {
struct node *temp = top;
int key, found = 0;
if (top == NULL) {
printf("\n STACK UNDERFLOW \n");
return;
}
printf("\n ENTER THE ELEMENT TO SEARCH \n");
scanf("%d",&key);
while (temp != NULL) {
if (temp->data == key) {
printf("\n %d ELEMENT FOUNDED \n", temp->data);
found = 1;
}
temp = temp->link;
}
if (!found) {
printf("\n ELEMENT NOT FOUND");
}
}
void main() {
int choice;
do {
printf("\n *****STACK*****\n");
printf("\n 1->Push() \n 2->Pop() \n 3->Peek() \n 4->Display() \n 5->Search()\n 6->EXIT");
printf("\n ENTER THE CHOICE: ");
scanf("%d",&choice);
switch(choice) {
case 1: push();
break;
case 2: pop();
break;
case 3: peek();
break;
case 4: display();
break;
case 5: search();
break;
case 6: printf("\n EXIT \n");
break;
default: printf("Enter a valid Choice");
}
} while(choice != 6);
}