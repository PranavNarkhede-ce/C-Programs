#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>

int main()
{
    int fd = 0 ;
    int ret = 0;
    char arr[20] ;

    fd = open("Marvellous.txt", O_RDWR);

    if(fd == -1)
    {
        printf("Unable to open file \n");
    }
    else 
    {
        printf("file gets opened with fd : %d \n", fd );

        ret = read(fd , arr , 6);                   // arr -> in read() we have to give an empty buffer to read the data from the file , its address gets passed to read() function 
                                                    // 6 -> number of bytes that we want to read 
        printf("%d bytes gets read from the file\n", ret);

        printf("%s \n" , arr);
    }
   
    close(fd);                

    return 0 ;
}