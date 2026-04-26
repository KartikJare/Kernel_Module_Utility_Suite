#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>
#include <sys/utsname.h>

//  ./rmx       FileName
//  argv[0]     argv[1]

//  argc = 1

/*
    Call the system call uname
    print information from utsname structure
*/

int main(int argc, char *argv[])
{
    int iRet = 0;

    if (argc != 2)
    {
        printf("Error : Insufficient argumests\n");
        printf("Use command as : ./rmx FileName\n");
        return -1;
    }

    if (access(argv[1], F_OK) == 0)
    {

        if(unlink(argv[1]) == -1)
        {
            printf("Error : Unable to delete\n");
            return -1;
        }
        else
        {   
            printf("File removes successfully...\n");
        }
        
        // iRet = unlink(argv[1]);
        // if (iRet == 0)
        // {
        //     printf("File removes successfully...\n");
        // }
    }
    else
    {
        printf("Error : Unable to delete the file is not persent\n");
    }

    return 0;
}

// command grep find
// regular expression
// Douglas T. Ross
// grep include Command_rm.c -i
// rexr wedsite
// shell 
// 