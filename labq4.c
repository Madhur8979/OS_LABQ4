#include<unistd.h>
#include<stdio.h>
#include<fcntl.h>

int main()
{
int fd , n , p ;
char arr[100];
fd = open("SEEK_END.txt", O_CREAT|O_RDWR, 0777);
n = read(0, arr, 100);
write(fd, arr, n);
p = lseek(fd, -6, SEEK_END);
  read(fd, arr, 6);
printf("your last 5 character:\n");
  write(1, arr, 6);
  printf("\n");
}
