/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>

int mini_statement(double amount){
    fflush(stdin);
    printf("Account Balance: %.3lf\n\n", amount);
    return 0;
}

int withdraw_money(double *amount)
{
    double withdrewal_amount;
    printf("Enter amount to withdraw: ");
    scanf("%lf", &withdrewal_amount);
    if(withdrewal_amount < 0) {
        printf("Invalid amount...\n\n");
    }
    else if((*amount) > withdrewal_amount){
        printf("Please collect your cash...\n\n");
        *amount -= withdrewal_amount;
    }
    else {
        printf("You do not have enough balance...\n\n");
    }
    return 0;
}

int deposit_money(double *amount)
{
    double deposit_amount;
    printf("Enter amount to deposit: ");
    scanf("%lf", &deposit_amount);
    if(deposit_amount>0){
        printf("%.3lf amount is credited to your account.\n\n", deposit_amount);
        *amount += deposit_amount;
    }else {
        printf("Invalid amount...\n\n");
    }
    return 0;
}

int check_balance(double amount)
{
    char ch;
    printf("Account Balance: %.3lf\n\n", amount);
    // printf("Do you want mini statement(y/Y): ");
    // scanf("%c",&ch);
    // if(ch=='y' || ch == 'Y'){
    //     mini_statement(amount);
    // }
    return 0;
}

int transaction()
{
    int no;
    double amount = 0;
    do {
        printf("========================Welcome to Banking============================\n");
        printf("1: Withdraw Money\n");
        printf("2: Check Balance\n");
        printf("3: Deposit Money\n");
        printf("4: exit\n");
        printf("Enter your choice: ");
        scanf("%d",&no);
        switch(no) {
            case 1:
                withdraw_money(&amount);
                break;
                
            case 2:
                check_balance(amount);
                break;
                
            case 3:
                deposit_money(&amount);
                break;
            case 4:
                printf("exiting...");
                exit(0);
                break;
            default :
                printf("Invalid choice...\n\n");
        }
    }while(no != 4);
    return 0;
}
int main()
{
    char uname[20], passward[7];
    fflush(stdin);
    printf("========================Welcome to Banking============================\n");
    printf("User Name: ");
    scanf("%s",uname);

    printf("Pin: ");
    scanf("%s",passward);
    system("clear");
 
    if(strcmp(uname,"bipul")==0 && strcmp(passward,"123456")==0){
        
        transaction();
    }
    else {
        printf("Invalid username or passward");
    }

    return 0;
}
