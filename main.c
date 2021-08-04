#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>
#define clear() printf("\033[H\033[J")

// Global variable //
int lvl1(void);
int lvl2(void);
int lvl3(void);
int lvl4(void);
int lvl5(void);
int lvl6(void);
void voided(void);

int gamecomplete = 0;
int input1;
bool alive = true;
int level = 1;
int lifecount = 5;
char choice;

// local stuff start //
int main(void)
{
    // Random integers
    int test_1 = rand()%1;

    clear();
    printf("Hello, welcome to worlds hardest guessing game\nYou have 5 attempts, after they passed the program gets terminated\nAll integers of all variables are randomized\nIf you successfully guess all 5, which you won't, you have bragging rights!");
    printf("\nShall we proceed with the fun parts? :D\n");
    printf("Y/N: ");
    scanf("%c", &choice);
    getchar();
    switch (choice)
    {
    case 'Y':
        clear();
        printf("Alright then, we shall begin with \n10 possibilities and go up to a ludicrous amount of possibilities!\n");
        printf("There is 5 levels, just informing you about that. :)\n");
        break;
    case 'N':
        clear();
        printf("That's sad. Okay, see you when you have more time. :p\n");
        break;
    default:
        clear();
        printf("That was not a choice, I'll just interpret that as a yes. :D\n");
        printf("Alright then, we shall begin with 10 possibilities\nand go up to a ludicrous amount of possibilities!\n");
        printf("There is 5 levels, just informing you about that. :)\n");
        break;
    }
    while (gamecomplete != 1)
    {    
        switch(level)
        {
            case 1:
                lvl1();
                break;
            case 2:
                lvl2();
                break;
            case 3:
                lvl3();
                break;
            case 4:
                lvl4();
                break;
            case 5:
                lvl5();
                break;
            case 6:
                lvl6();
                break;
            default:
                break;
        }
    }
    clear();
    printf("Alright. You won!");
    printf("\nWas that worth it? :D");
    printf("\n\nThis was a waste of time.\n");
}

int lvl1( void )
{
    srand ( time(NULL) );
    int happy1 = rand()%10;
    int lvl6 = 133769;

    clear();
    printf("Alright, here we go. 10 possibilities. Not to difficult.");
    printf("\nYou have %d lifes, make them count!\n", lifecount);
    while(alive == true)
    {    
        printf("\n\n\nYour choice: ");
        scanf("%d", &input1);

        if (input1 == happy1)
        {
            printf("Wow! Seems like you got the hang of this!\nAlright, let's go!");
            level = level + 1;
            return level;
        }
        else if (input1 == lvl6)
        {
            level = level + 5;
            return level;
        }
        else
        {
            printf("Aww, shucks. You lost a life!\nTry again!");
            lifecount = lifecount - 1;
            printf("\nYou only have %d lifes left.", lifecount);
            if (lifecount == 0)
                alive = false;
            else 
                alive = true;
        }
    }
    if (alive == false)
    {
        clear();
        printf("Ah, shucks. Better luck next time");
        printf("\nThe number was %d.", happy1);
        voided();
    }
    else
    {
        clear();
        printf("Alright! >:3");
    }
    return level;
}

int lvl2( void )
{
    srand ( time(NULL) );
    int happy2 = rand()%100;
    lifecount = lifecount + 15;
    
    clear();
    printf("Alright, next level. 100 possibilities. Getting more difficult.");
    printf("\nYou have %d lifes, make them count!\n", lifecount);
    while(alive == true)
    {    
        printf("\n\n\nYour choice: ");
        scanf("%d", &input1);

        if (input1 == happy2)
        {
            printf("Wow! Seems like you got the hang of this!\nAlright, let's go!");
            return level;
        }
        else
        {
            printf("Aww, shucks. You lost a life!\nTry again!");
            lifecount = lifecount - 1;
            printf("\nYou only have %d lifes left.", lifecount);
            if (lifecount == 0)
                alive = false;
            else 
                alive = true;
        }
    }
    if (alive == false)
    {
        clear();
        printf("Ah, shucks. Better luck next time");
        printf("\nThe number was %d.", happy2);
        voided();
    }
    else
    {
        clear();
        printf("Alright! >:3");
    }
    return level;
}
int lvl3( void )
{
    srand ( time(NULL) );
    int happy4 = rand()%1000;
    lifecount = lifecount + 15;
    
    clear();
    printf("Alright, next level. 1000 possibilities. This is insane.");
    printf("\nYou have %d lifes, make them count!\n", lifecount);
    while(alive == true)
    {    
        printf("\n\n\nYour choice: ");
        scanf("%d", &input1);

        if (input1 == happy4)
        {
            printf("Wow! Seems like you got the hang of this!\nAlright, let's go!");
            return level;
        }
        else
        {
            printf("Aww, shucks. You lost a life!\nTry again!");
            lifecount = lifecount - 1;
            printf("\nYou only have %d lifes left.", lifecount);
            if (lifecount == 0)
                alive = false;
            else 
                alive = true;
        }
    }
    if (alive == false)
    {
        clear();
        printf("Ah, shucks. Better luck next time");
        printf("\nThe number was %d.", happy4);
        voided();
    }
    else
    {
        clear();
        printf("Alright! >:3");
    }
    return level;
}

int lvl4( void )
{
    srand ( time(NULL) );
    int happy4 = rand()%10000;
    lifecount = lifecount + 15;

    clear();
    printf("Alright, next level. 10000 possibilities. You can't beat this!");
    printf("\nYou have %d lifes, make them count!\n", lifecount);
    while(alive == true)
    {    
        printf("\n\n\nYour choice: ");
        scanf("%d", &input1);

        if (input1 == happy4)
        {
            printf("Wow! Seems like you got the hang of this!\nAlright, let's go!");
            return level;
        }
        else
        {
            printf("Aww, shucks. You lost a life!\nTry again!");
            lifecount = lifecount - 1;
            printf("\nYou only have %d lifes left.", lifecount);
            if (lifecount == 0)
                alive = false;
            else 
                alive = true;
        }
    }
    if (alive == false)
    {
        clear();
        printf("Ah, shucks. Better luck next time");
        printf("\nThe number was %d.", happy4);
        voided();
    }
    else
    {
        clear();
        printf("Alright! >:3");
    }
    return level;
}

int lvl5( void )
{
    srand ( time(NULL) );
    int happy5 = rand()%100000;
    lifecount = lifecount + 15;
    
    clear();
    printf("Alright, next level. 100000 possibilities. This is insane.");
    printf("\nYou have %d lifes, make them count!\n", lifecount);
    while(alive == true)
    {    
        printf("\n\n\nYour choice: ");
        scanf("%d", &input1);

        if (input1 == happy5)
        {
            printf("Wow! Seems like you got the hang of this!\nAlright, let's go!");
            return level;
        }
        else
        {
            printf("Aww, shucks. You lost a life!\nTry again!");
            lifecount = lifecount - 1;
            printf("\nYou only have %d lifes left.", lifecount);
            if (lifecount == 0)
                alive = false;
            else 
                alive = true;
        }
    }
    if (alive == false)
    {
        clear();
        printf("Ah, shucks. Better luck next time");
        printf("\nThe number was %d.", happy5);
        voided();
    }
    else
    {
        clear();
        printf("Alright! >:3");
    }
    return level;
}

int lvl6( void )
{
    srand ( time(NULL) );
    int happy6 = rand()%1000000;
    int cheat123 = 8246847;
    lifecount = lifecount + 100;
    
    clear();
    
    printf("Did I say 5? I meant 6. 1000000 possibilities. How did you get here in the first place?!");
    printf("\nYou have %d lifes, make them count!\n", lifecount);
    while(alive == true)
    {    
        printf("\n\n\nYour choice: ");
        scanf("%d", &input1);

        if (input1 == happy6)
        {
            printf("Wow! Seems like you got the hang of this!\nAlright, let's go!");
            return level;
        }
        else if (input1 == cheat123)
        {
            gamecomplete = gamecomplete + 1;
            return level;
        }
        else
        {
            printf("Aww, shucks. You lost a life!\nTry again!");
            lifecount = lifecount - 1;
            printf("\nYou only have %d lifes left.", lifecount);
            if (lifecount == 0)
                alive = false;
            else 
                alive = true;
        }
    }
    if (alive == false)
    {
        clear();
        printf("Ah, shucks. Better luck next time");
        printf("\nThe number was %d.", happy6);
        voided();
    }
    else
    {
        clear();
        printf("Alright! >:3");
    }
    gamecomplete = gamecomplete + 1;
    return level;
}

void voided( void )
{
    printf("\n\n\nConnection terminated.");
    exit(0);
}