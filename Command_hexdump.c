///////////////////////////////////////////////////////////
//
//  File name   : Command_hexdump.c
//  Descreption : Command line hexdump (hexdump style)
//  Author      : Kartik Ganesh Jare
//  Date        : 16/2/26
//  
///////////////////////////////////////////////////////////

//  ./hexdumpx  FileName
//  argv[0]   argv[1] 

//  argc = 2

/*
    Accept file name from command line
    Give hexdump of the file
*/

#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

int main(int argc, char *agrv[])
{
    int fd = 0;
    unsigned char Buffer[16];
    unsigned long Ret = 0;
    long offset = 0;
    int i = 0;

    if (argc != 2)
    {
        printf("Error : Invalid argument\n");
        printf("Use command as : ./hexdumpx FileName\n");
        return -1;
    }

    fd = open(agrv[1], O_RDONLY);
    if (fd < 0)
    {
        printf("Error : Unable to open file\n");
        return -1;
    }

    while ((Ret = read(fd, Buffer, sizeof(Buffer))) > 0)
    {
        // Print 7-digit offset
        printf("%07lx  ",offset);

        // Print Hex Values
        for (i = 0; i < sizeof(Buffer); i+=2) // Because default hexdump prints 2 bytes together (16-bit word).
        {
            if (i < Ret)
            {
                printf("%02x%02x ", Buffer[i+1],Buffer[i]); // little-endian word ,print 16-bit as 4 hex digits
            }
            else
            {
                
                printf("%02x ",Buffer[i]);
            }
        }
        printf("\n");
    }

    close(fd);

    return 0;
}