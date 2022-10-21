#include <stdio.h>
#include <cs50.h>

int main(void)
{
    //prompt user to enter name
    string name=get_string("What is your name?");
    printf("Hello,%s\n",name);
}