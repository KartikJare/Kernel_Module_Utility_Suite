#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>

//  ./pwdx
//  argv[0] 

//  argc = 1

/*
    Call the system call getcwd
    print the result of getcwd
*/

#define MAX_BUFFER_SIZE 1024

int main(int argc, char *argv[])
{
    char Buffer[MAX_BUFFER_SIZE] = {'\0'};

    getcwd(Buffer,sizeof(Buffer));

    printf("%s\n",Buffer);

    return 0;
}


// Cd ->chdir - system call make at home