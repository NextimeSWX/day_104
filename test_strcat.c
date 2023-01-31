#include <stdio.h>
#include <sys/stat.h>
#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>

char *stu_strcat(char *dest, const char *src);

int main(void)
{
    struct stat sb;
    char *buffer;
    char *dest;
    int fd;
    int size;
    int i;

    size = 0;
    fd = open("strlen.c", O_RDONLY);
    i = stat("strlen.c", &sb);
    buffer = malloc(sizeof(char) * sb.st_size + 1);
    read(fd, buffer, sb.st_size);
    size = sb.st_size;
    if (i == -1) {
        return (-1);
    }
    fd = open("strdup.c", O_RDONLY);
    i = stat("strdup.c", &sb);
    dest = malloc(sizeof(char) * sb.st_size + size + 1);
    read(fd, dest, sb.st_size);
    stu_strcat(dest, buffer);
    free(buffer);
    free(dest);
    close(fd);
}
