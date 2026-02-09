#include<stdio.h>
#include<string.h>
void create_account();
void deposite_money();
void withdraw_money();
void check_money();
const char* ACCOUNT_FILE = "account.dat";
typedef struct 
{
    char name[50];
    int acc_no;
    float balance;
}Account;

int main()
{
    while (1)
    {
        int choice;
        printf("\n\n-----------------------------------");
        printf("\n*** Bank Management System ***");
        printf("\n1. Create Account");
        printf("\n2. Deposite Money");
        printf("\n3. Withdraw Money");
        printf("\n4. Check Balance");
        printf("\n5. Exit");
        printf("\nEnter your choice: ");
        scanf("%d",&choice);
        switch (choice)
        {
        case 1:
            create_account();
            break;
        case 2:
            deposite_money();
            break;
        case 3:
            withdraw_money();
            break;
        case 4:
            check_money();
            break;
        case 5:
            printf("\nClosing the Bank, Thanks for your visit.\n");
            return 0;
            break;
        
        default:
            printf("\nInvalid choice\n");
            break;
        }
    }
    
    return 0;
}
void create_account(){
    Account acc;
    FILE *file=fopen("ACCOUNT_FILE","ab+");
    if (file==NULL)
    {
        printf("Unable to open file!!");
        return;
    }
    char c;
    do
    {
        c=getchar();
    } while (c!='\n'&&c!=EOF);
    
    printf("\nEnter your name: ");
    fgets(acc.name,sizeof(acc.name),stdin);
    int ind=strcspn(acc.name,"\n");
    acc.name[ind]='\0';
    printf("\nEnter your account number: ");
    scanf("%d",&acc.acc_no);
    acc.balance=0;
    fwrite(&acc,sizeof(acc),1,file);
    fclose(file);
    printf("\nAccount created successfully!");
}
void deposite_money(){
    FILE *file=fopen(ACCOUNT_FILE,"rb+");
    if (file==NULL)
    {
        printf("\nUnable to open account file!!");
        return;
    }
    int acc_no;//local variable
    float money;
    Account acc_to_read;
    printf("\nEnter your account number: ");
    scanf("%d",&acc_no);
    printf("\nEnter amount to deposite: ");
    scanf("%f",&money);

    while (fread(&acc_to_read,sizeof(acc_to_read),1,file))
    {
        if (acc_to_read.acc_no==acc_no)
        {
            acc_to_read.balance+=money;
            fseek(file,-sizeof(acc_to_read),SEEK_CUR);
            fwrite(&acc_to_read,sizeof(acc_to_read),1,file);
            fclose(file);
            printf("\nSuccessfully deposited Rs.%.2f. New balance is Rs.%.2f",money,acc_to_read.balance);
            return;
        }
        
    }
    fclose(file);
    printf("\nMoney could not be deposited as the Account no %d not found in records.",acc_no);
}
void withdraw_money(){
    FILE *file=fopen(ACCOUNT_FILE,"rb+");
    if (file==NULL)
    {
        printf("\nUnable to open the account file!!!.\n");
        return;
    }
    int acc_no;
    float money;
    Account acc_to_read;
    printf("\nEnter your account number: ");
    scanf("%d",&acc_no);
    printf("\nEnter the amount you wish to withdraw: ");
    scanf("%f",&money);
    while (fread(&acc_to_read,sizeof(acc_to_read),1,file))
    {
        if (acc_to_read.acc_no==acc_no)
        {
            if (acc_to_read.balance>=money)
            {
                acc_to_read.balance-=money;
                fseek(file,-sizeof(acc_to_read),SEEK_CUR);
                fwrite(&acc_to_read,sizeof(acc_to_read),1,file);
                printf("\nSuccessfully withdrawn Rs.%.2f. Remaining balance is Rs.%.2f",money,acc_to_read.balance);
                
            }
            else
            {
                printf("\nInsufficient balance!");
            }
            fclose(file);
            return;
        }
        
    }
    fclose(file);
    printf("\nMoney could not be withdrawn as the Account no %d was not found in records.",acc_no);
}
void check_money(){
    FILE *file=fopen(ACCOUNT_FILE,"rb");
    if (file==NULL)
    {
        printf("\nUnable to open file!!");
        return;
    }
    
    int acc_no;
    Account acc_read;
    printf("\nEnter your account number: ");
    scanf("%d",&acc_no);
    while (fread(&acc_read,sizeof(acc_read),1,file))
    {
        if (acc_read.acc_no==acc_no)
        {
            printf("\nYour current balance is Rs.%.2f",acc_read.balance);
            fclose(file);
            return;
        }
        
    }
    fclose(file);
    printf("\nAccount no: %d was not found.\n",acc_no);
}