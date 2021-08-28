#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>

// Create a node
struct Node {
  char name[100];
  int age;
  long int phno;
  long int salary;
  char password[10];
  char city[10];
  char Fname[100];
  char DOB[10];
  char PINCODE[7];
  char gender[6];
  struct Node* next;
};
struct Node *head=NULL;
void sound()
{
Beep(1500,1000);Beep(1500,1000);Beep(1500,1000);Beep(1500,1000);Beep(1500,1000);Beep(1500,1000);Beep(1500,1000);Beep(1500,1000);
printf("\nSuccessfully connected to the bank server");
return;
}
void insert(struct Node* node, char name1[100], int age1, long int phno1, long int salary1, char pass[10], char Fname1[100], char DOB1[10],char city1[10], char PINCODE1[7], char gender1[6]) {


  struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
  struct Node* last = node;
  if(node == NULL)
  {
  strcpy(new_node->name, name1);
  new_node->age = age1;
  new_node->phno = phno1;
  new_node->salary = salary1;
  strcpy(new_node->password, pass);
  strcpy(new_node->city, city1);
  strcpy(new_node->PINCODE, PINCODE1);
  strcpy(new_node->Fname, Fname1);
  strcpy(new_node->gender, gender1);
  strcpy(new_node->DOB, DOB1);
  new_node->next = NULL;
  node = new_node;
  head=new_node;

  }

  else
  {
  strcpy(new_node->name, name1);
  new_node->age = age1;
  new_node->phno = phno1;
  new_node->salary = salary1;
  strcpy(new_node->password, pass);
  strcpy(new_node->city, city1);
  strcpy(new_node->PINCODE, PINCODE1);
  strcpy(new_node->Fname, Fname1);
  strcpy(new_node->gender, gender1);
  strcpy(new_node->DOB, DOB1);
  new_node->next = NULL;

        while (last->next != NULL)
              last = last->next;

     last->next = new_node;
  }
}

int check(struct Node*node1,char namecheck1[100],char passcheck1[10])
{    if(node1==NULL)
     printf("null node hai bhai jaan");
    int yes=0;
    while(node1 != NULL)
    {
        if((strcmp(node1->name,namecheck1)==0)&&(strcmp(node1->password,passcheck1)==0))
            yes=yes+1;;
          node1=node1->next;
    }
return yes;
}


void printList(struct Node* node) {
  while (node != NULL) {
    printf("\nName %s \n ",node->name);
    printf("Age %d \n", node->age);
    printf("Gender is %s \n", node->gender);
    printf("DOB is %s \n", node->DOB);
    printf("Phone No %ld \n", node->phno);
    printf("Account Balance %ld \n", node->salary);
    printf("City is %s \n", node->city);
    printf("PINCODE is %s \n", node->PINCODE);
    printf("Fathers name is %s\n", node->Fname);

    printf("\n\n\n");
    node = node->next;
  }

return;
}

void depositmoney(struct Node* node,char namecheck[100],char passcheck[10])
{
    while((strcmp(node->name,namecheck)!=0)&&(strcmp(node->password,passcheck)!=0))
        node = node->next;
    int money1;
    printf("\n Enter the money you want to deposit: ");
    scanf("%d",&money1);
    node->salary=(node->salary)+money1;
    printf("\nNew Balance is %d ",node->salary);
return;
}


void transactmoney(struct Node* node,char namecheck[100],char passcheck[10])
{
    while((strcmp(node->name,namecheck)!=0)&&(strcmp(node->password,passcheck)!=0))
        node = node->next;
    int money1;
    printf("\n Enter the money you want to withdraw: ");
    scanf("%d",&money1);
    if(money1<=(node->salary))
       {
       node->salary=(node->salary)-money1;
       printf("\nNew Balance is %d ",node->salary);
       }
    else printf("\nYou don't have sufficient amount in your account. The balance of your account is only %d",node->salary);
return;
}


void deletenode(struct Node* node,char namecheck[100],char passcheck[10])
{
  struct Node* prev;
  prev = node;
   while((strcmp(node->name,namecheck)!=0)&&(strcmp(node->password,passcheck)!=0))
          node = node->next;
    printf("\nYour account has been successfully deleted. The amount remaining in your account is %d which will be given back once you complete the paper formalities",node->salary);
    while((prev->next)!=node)
          prev = prev->next;
    (prev->next)=(node->next);

return;
}

void showdetails(struct Node* node,char namecheck[100],char passcheck[10])
{
    while((strcmp(node->name,namecheck)!=0)&&(strcmp(node->password,passcheck)!=0))
        node = node->next;

    printf("\nName %s \n ",node->name);
    printf("Age %d \n", node->age);
    printf("Gender is %s \n", node->gender);
    printf("DOB is %s \n", node->DOB);
    printf("Phone No %ld \n", node->phno);
    printf("Account Balance %ld \n", node->salary);
    printf("City is %s \n", node->city);
    printf("PINCODE is %s \n", node->PINCODE);
    printf("Fathers name is %s \n", node->Fname);

return;
}

void employees()
{
    printf("\nBANK NAME: MY CAPTAIN\nBANK CEO: AVIRAL\nBANK MANAGER: PRANAV KIMOTHI\nINVESTMENT SECTION HEAD: SIDDHANT MEHTA\nEQUITY ANALYST HEAD: KRITIKA SRIVASTAVA\nINTERNAL AUDITOR: BANEET KUMAR\nBUDGET ANALYST: SHIVAM KUMAR\nFOREIGN EXCHANGE TRADER: ABHINANDAN GUPTA\nASSET MANAGER: MOHIT VERMA\nRELATIONSHIP MANAGER: GYANSAGAR GUPTA\nLOAN OFFICER: MOHIT SINGH\nDATA PROCESSING OFFICER: SHAILENDRA KUMAR");
return;
}


int main() {
  //struct Node* head = NULL;
  char n[100],p[10],s[10],c[10],DOB[10],Fname[100],PINCODE[7],gen[6],city[10];
  int a,i,choice,loop,ls;
  long int pn,amt;
  printf("\t\t\t\t\tWELCOME TO MY CAPTAIN BANK.\nMy name is Pranav Kimothi (BANK MANAGER).\nI am here to help you.\nWaiting to connect to the bank main server.... ");
  sound();
  for(loop=0;loop<=10000;loop++)
  {

  printf("\n\n\n Press 1 to LOGIN and 2 for SIGNUP: ");
  scanf("%d",&ls);
  if(ls==1)
    {


              printf("\nPlease enter Username: ");
              scanf("%s",n);

              printf("Please enter a new password of 9 characters: ");
              scanf("%s",s);

              printf("Please enter age: ");
              scanf("%d",&a);

              printf("Please your gender: ");
              scanf("%s",gen);

              printf("Please enter phone number: ");
              scanf("%d",&pn);

              printf("Please enter your City: ");
              scanf("%s",city);

              printf("Please enter your PINCODE : ");
              scanf("%s",PINCODE);

              printf("Please enter you DOB DD/MM/YYYY: ");
              scanf("%s",DOB);

              printf("Please enter your Fathers Name: ");
              scanf("%s",Fname);

              printf("Please enter the amount you wish to deposit(in INR): ");
              scanf("%d",&amt);

              printf("\nCongratulations! Your account has been created.\nPlease never share your Username and Password with anyone.");



             insert(head, n, a, pn, amt, s, Fname, DOB, city, PINCODE, gen);
  }

  else

  {



      printf("\n enter your Username ");
      scanf("%s",n);
      printf("\n Enter your Password ");
      scanf("%s",s);

      if(check(head,n,s))
        {
            printf("\n\nYou have successfully logged into your account.\n\nPress 1 to show your account details.\nPress 2 for deposit money.\nPress 3 for transaction.\nPress 4 for closing you account with us.\nPress 5 to check all the details of our customers.\nPress 6 to know about our employees\n");
            scanf("%d",&choice);

            switch(choice)
            {
                case 1: showdetails(head,n,s);break;
                case 2: depositmoney(head,n,s);break;
                case 3: transactmoney(head,n,s);break;
                case 4: deletenode(head,n,s);break;
                case 5: printList(head);break;
                case 6: employees();break;
                default: printf("\nYou pressed the wrong key!");
            }
        }
      else
          {
              printf("\n Your information  is wrong. Security system breach");
              Beep(1050,8000);
              printf("\n PLease try once again");
          }
  }

}
 return 0;
}
