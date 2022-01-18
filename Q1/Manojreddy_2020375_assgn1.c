#include<stdio.h>
#include <stdlib.h>
#include<unistd.h>
#include<sys/stat.h>
#include<sys/types.h>
#include<fcntl.h>
#include<string.h>
#include<sys/wait.h>


int main()
{
    int rd;
    rd = read(file);
    pid_t return_value;
    return_value = fork();
    
    if (return_value<0)
    {
        exit(1)
    }
    else if (return_value==0)
    {
        int open_file;
        open_file = open("file.csv",O_RDONLY);
        if (open_file < 0)
        {
            perror();
            exit()
        }
    }


}
