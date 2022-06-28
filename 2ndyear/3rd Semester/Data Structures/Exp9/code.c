/**
 * Experiment - 9
 * @USN        - 4SO20CS012
 * @SUBJECT    - Data Structures Laboratory
 * @DEPARTMENT - Computer Science and Engineering
 * @COLLEGE    - ST JOSEPH ENGINEERING COLLEGE Vamanjoor, Mangaluru
 * Question :
 * Design, Develop and Implement a Program in C for the following operation Singly
 * Circular Linked List (SCLL) with header nodes
 * a. Represent and Evaluate a Polynomial P(x,y,z) = 6x 2 y 2 z-4yz 5 +3x 3 yz+2xy 5 z-2xyz 3
 * b. Find the sum of two polynomials POLY1(x,y,z) and POLY2(x,y,z) and store the
 * result in POLYSUM(x,y,z)
 * Support the program with appropriate functions for each of the above operations
 */

#include<stdio.h>
#include<stdlib.h>
#include<math.h>
 struct node
{
	int coef;
	int x,y,z;
   	struct node  *link;
};

typedef struct  node *NODE;

NODE getnode() {
	NODE x;
	x=(NODE)malloc(sizeof(struct node));
	return x;
}

NODE readpoly() {
	NODE temp,head,cur;
   	char ch;
  	head=getnode();
   	head->coef=-1;
   	head->x=-1;
	head->y=-1;
	head->z=-1;
   	head->link=head;
   	do {
        temp=getnode();
        printf("\nEnter the coefficient and exponent in decreasing order\n");
        scanf("%d%d%d%d",&temp->coef,&temp->x,&temp->y,&temp->z );
        cur=head;
        while(cur->link!=head)
                cur=cur->link;
        cur->link=temp;
        temp->link=head;
        printf("\nDo you want to enter more coefficients(y/n)");
 		scanf(" %c",&ch);
    }while(ch == 'y' || ch == 'Y');
      	return  head;
}

int compare(NODE a,NODE b) {
	if((a->x > b->x) || (a->y > b->y) || (a->z > b->z))
        return 1;
	else if((a->x < b->x) || (a->y < b->y) || (a->z < b->z))
        return -1;
    else
        return 0;
}

void attach(int cf,int x1,int y1, int z1, NODE *ptr) {
	NODE temp;
    temp=getnode();
    temp->coef=cf;
    temp->x=x1;
	temp->y=y1;
	temp->z=z1;
    (*ptr)->link=temp;
    *ptr=temp;
}
NODE cpadd(NODE a,NODE b) {
	NODE  starta,c ,lastc;
    int sum,done=0;
    starta=a;
    a=a->link;
    b=b->link;
    c=getnode();
    c->coef=-1;
    c->x=-1;
    c->y=-1;
    c->z=-1;
    lastc=c;
    do{
        switch(compare(a,b)) {
            case -1: attach(b->coef,b->x,b->y,b->z,&lastc);
                     b=b->link;
                     break;
            case 0: if(starta==a) done=1;
                    else{
                        sum=a->coef+b->coef;
                    if(sum)
                        attach(sum,a->x, a->y,a->z,&lastc);
                        a=a->link;b=b->link;
                    }
                    break;
	 		case 1: if(starta==a) done=1;
                    attach(a->coef,a->x, a->y,a->z,&lastc);
                    a=a->link;
                    break;
        }
    }while(!done);
      	lastc->link=c;
      	return c;
}

void print(NODE ptr) {
 	NODE cur;
    cur=ptr->link;
    while(cur->link!=ptr) {
        printf("%d * x^(%d) * y^(%d) * z^(%d) + ",cur->coef,cur->x, cur->y, cur->z);
        cur=cur->link;
    }
    printf("%d * x^(%d) * y^(%d) * z^(%d)",cur->coef,cur->x, cur->y, cur->z);
}

void cal(NODE ptr) {
 	int res=0;
 	int x,y,z, ex,ey,ez,cof;
  	NODE cur;
  	printf("\nEnter the values of x, y, z :");
 	scanf("%d", &x);
 	scanf("%d", &y);
 	scanf("%d", &z);
    cur=ptr->link;
    while(cur!=ptr) {
        ex=cur->x;
        ey=cur->y;
        ez=cur->z;
        cof=cur->coef;
        res+=cof*pow(x,ex)*pow(y,ey)*pow(z,ez);
        cur=cur->link;
    }
	printf("\nresult: %d",res);
}

void main(void) {
	int i, ch;
   	NODE a=NULL,b,c,d;
   	while(1) {
    	printf("\n<========== MENU ==========>\n");
		printf("\n1: Represent first polynomial");
		printf("\n2: Represent Second polynomial");
		printf("\n3: Display the polynomial 1");
		printf("\n4: Display the polynomial 2");
		printf("\n5: Add 2 polynomial");
		printf("\n6: Evaluate");
		printf("\n7: Exit");
		printf("\nEnter your choice: ");
		scanf("%d",&ch);
		switch(ch) {
		  	case 1: printf("\nEnter the elements of the first polynomial :");
					a=readpoly();
					break;
			case 2:printf("\nEnter the elements of the second polnomial :");
				  	b= readpoly();
					break;
			case 3:	print(a);
				    break;
			case 4: print(b);
                    break;
            case 5: c = cpadd(a,b);
					printf("\nThe sum of two polynomials is : ");
					print(c);
					printf("\n");
					break;
			case 6: d =readpoly();
                    cal(d);
				    break;
			case 7: return;
			default: printf("\nInvald choice!\n");
		}
	}
}
