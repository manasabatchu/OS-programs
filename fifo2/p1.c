#include<stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>



int main()
{
    int fd;
    fd = open("fifo", O_WRONLY);
    write(fd, "dilip\n", 6);
    close(fd);
}
