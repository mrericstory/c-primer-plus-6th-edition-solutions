#include <stdio.h>
#include <string.h>

// encrypt
void encrypt(char *str, int key)
{
    int len = strlen(str);
    for (int i = 0; i < len; i++)
    {
        str[i] += key;
    }
}

// decrypt
void decrypt(char *str, int key)
{
    int len = strlen(str);
    for (int i = 0; i < len; i++)
    {
        str[i] -= key;
    }
}

int main()
{
    char filename[100], buffer[2048];
    int key;

    // file and key
    printf("请输入要加密的文件名：");
    scanf("%s", filename);
    printf("请输入密钥：");
    scanf("%d", &key);

    FILE *fp = fopen(filename, "r");
    if (fp == NULL)
    {
        printf("无法打开文件 %s\n", filename);
        return 1;
    }

    fgets(buffer, sizeof(buffer), fp);

    // encrypted
    encrypt(buffer, key);

    fclose(fp);

    // put the result to b file
    fp = fopen("trialE.txt", "w");
    if (fp == NULL)
    {
        printf("无法创建加密后的文件\n");
        return 2;
    }

    fputs(buffer, fp);

    fclose(fp);

    // open result file and read content
    fp = fopen("trialE.txt", "r");
    if (fp == NULL)
    {
        printf("无法打开加密后的文件\n");
        return 3;
    }

    fgets(buffer, sizeof(buffer), fp);

    // print decrypt result to terminal
    decrypt(buffer, key);
    printf("解密后的字符串为：%s\n", buffer);

    fclose(fp);

    return 0;
}