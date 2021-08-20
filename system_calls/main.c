#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>


#define size 100
int main()
{
int fp;
int fd;
unsigned char buff[size];
fp = open("file.txt",O_WRONLY|O_CREAT);
fd = open("file.txt",O_RDONLY);
write(fp, "manasa\n", 7);
read(fd, buff, size);
printf("The Data from the file=%s\n",buff);
close(fp);
return 0;
} 
