#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// download html page using wget
int main(int argc, char *argv[])
{
    if (argc != 2)
    {
        printf("Usage: %s <url>\n", argv[0]);
        return 1;
    }

    char *url = argv[1];
    char *cmd = malloc(strlen(url) + strlen("wget -E -H -k -K -p") + 1);
    sprintf(cmd, "wget -E -H -k -K -p %s", url);

    FILE *fp = popen(cmd, "r");
    if (fp == NULL)
    {
        printf("Failed to run command\n");
        return 1;
    }

    char buf[1024];
    while (fgets(buf, sizeof(buf), fp) != NULL)
    {
        printf("%s", buf);
    }

    pclose(fp);
    free(cmd);

    return 0;
}