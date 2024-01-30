#include <stdio.h>

double multiplier(double price, int quan);
int main() 
{
    int item = 0;
    int quan = 0; 
    double price = 0;
    double bal = 10000; 
    double pay = 0;
    char ans;
    
    printf("-----Mika's Fashion Boutique-----\n");
    printf("1 | Knit Cardigan   | $750.50\n");
    printf("2 | Oversized Shirt | $250.25\n");
    printf("3 | Basic Cullotes  | $950.99\n");
    printf("4 | Tie Halter Top  | $150.30\n");
    printf("5 | Baggy Jeans     | $799.50\n");

    choose_num:
    printf("Select an item (choose a number):");
    scanf("%d", &item);

    if (item==1)
    {
        price = 750.50;
        printf("Your current balance is $%0.2lf\n", bal);
        printf("You've selected Knit Cardigan with a unit price of $750.50\n");
        printf("Enter quantity of Knit Cardigan to buy:");
        scanf("%d", &quan);

        pay = multiplier(price,quan);

        printf("Total Amount to Pay: $%0.2lf\n", pay);

        if (pay<bal)
        { 
            bal = bal-pay;
            printf("Your transaction was successful. Your new balance is $%0.2lf\n", bal);
            printf("Continue shopping? (y/n):");
            scanf(" %c", &ans); 
              
            if (ans == 'y') 
                {
                   goto choose_num;
                }
                    
            else if (ans == 'n')
                {
                    printf("Thank you! Have a great day!\n");
                    goto exit;
                }
        }

        else
        {
            bal = pay-bal;
            printf("Transaction cancelled. You are $%0.2lf short\n", bal);
        }

    }

    else if (item==2)
    {
       price = 250.25;
       printf("Your current balance is $%0.2lf\n", bal);
       printf("You've selected Oversized Shirt with a unit price of $250.25\n");
       printf("Enter quantity of Oversized Shirt to buy:");
       scanf("%d", &quan);

        pay = multiplier(price,quan);

        printf("Total Amount to Pay: $%0.2lf\n", pay);

        if (pay<bal)
        { 
            bal = bal-pay;
            printf("Your transaction was successful. Your new balance is $%0.2lf\n", bal);
            printf("Continue shopping? (y/n):");
            scanf(" %c", &ans); 
              
            if (ans == 'y') 
                {
                   goto choose_num;
                }
                    
            else if (ans == 'n')
                {
                    printf("Thank you! Have a great day!\n");
                    goto exit;
                }
        }

        else
        {
            bal = pay-bal;
            printf("Transaction cancelled. You are $%0.2lf short\n", bal);
        }
    }

    else if (item==3)
    {
        price = 950.99;
        printf("Your current balance is $%0.2lf\n", bal);
        printf("You've selected Basic Cullotes with a unit price of $950.99\n");
        printf("Enter quantity of Basic Cullotes to buy:");
        scanf("%d", &quan);

        pay = multiplier(price,quan);

        printf("Total Amount to Pay: $%0.2lf\n", pay);

        if (pay<bal)
        { 
            bal = bal-pay;
            printf("Your transaction was successful. Your new balance is $%0.2lf\n", bal);
            printf("Continue shopping? (y/n):");
            scanf(" %c", &ans); 
              
            if (ans == 'y') 
                {
                   goto choose_num;
                }
                    
            else if (ans == 'n')
                {
                    printf("Thank you! Have a great day!\n");
                    goto exit;
                }
        }
        else
        {
            bal = pay-bal;
            printf("Transaction cancelled. You are $%0.2lf short\n", bal);
        }
    }

    else if (item==4)
    {
        price = 150.30;
        printf("Your current balance is $%0.2lf\n", bal);
        printf("You've selected Tie Halter Top with a unit price of $150.30\n");
        printf("Enter quantity of Tie Halter Top to buy:");
        scanf("%d", &quan);

        pay = multiplier(price,quan);

        printf("Total Amount to Pay: $%0.2lf\n", pay);

        if (pay<bal)
        { 
            bal = bal-pay;
            printf("Your transaction was successful. Your new balance is $%0.2lf\n", bal);
            printf("Continue shopping? (y/n):");
            scanf(" %c", &ans); 
              
            if (ans == 'y') 
                {
                   goto choose_num;
                }
                    
            else if (ans == 'n')
                {
                    printf("Thank you! Have a great day!\n");
                    goto exit;
                }
        }

        else
        {
            bal = pay-bal;
            printf("Transaction cancelled. You are $%0.2lf short\n", bal);
        }
    }

    else if (item==5)
    {
        price = 799.50;
        printf("Your current balance is $%0.2lf\n", bal);
        printf("You've selected Baggy Jeans with a unit price of $799.50\n");
        printf("Enter quantity of Baggy Jeans to buy:");
        scanf("%d", &quan);

        pay = multiplier(price,quan);

        printf("Total Amount to Pay: $%0.2lf\n", pay);

        if (pay<bal)
        { 
            bal = bal-pay;
            printf("Your transaction was successful. Your new balance is $%0.2lf\n", bal);
            printf("Continue shopping? (y/n):");
            scanf(" %c", &ans); 
              
            if (ans == 'y') 
                {
                   goto choose_num;
                }
                    
            else if (ans == 'n')
                {
                    printf("Thank you! Have a great day!\n");
                    goto exit;
                }
        }

        else
        {
            bal = pay-bal;
            printf("Transaction cancelled. You are $%0.2lf short\n", bal);
        }
    }

    else
    {
        printf("That item is not available.\n");
        goto choose_num;
    }

    exit:
    return 0;
}
    
double multiplier(double price, int quan)
{
     double result = 0;
     int i;

     for (i=1; i<=quan; ++i) 
     {
        result = result + price;
     }
     
     return result;
}
