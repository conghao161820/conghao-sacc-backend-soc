#include <stdio.h>
#include <string.h>

//小目标1：账号校验函数
int validateAccount(char* acc, char* pwd){
    if(strlen(acc)==0) return 0;
    if(strlen(pwd)<6) return 0;
    return 1;
}

//小目标2：模拟密码加密：字符串反转
void encryptPassword(char* src, char* dst){
    int len = strlen(src);
    for(int i=0;i<len;i++){
        dst
[i] = src[len - i -1];
    }
    dst
[len] = '\0';
}

//小目标3：生成欢迎语
void buildWelcomeMessage(char* acc, char* msg){
    sprintf(msg, "Hello World! 账号 %s 诞生了", acc);
}

int main(void)
{
    char acc[] = "cqx001";
    char pwd[] = "12345678";
    char encryptPwd[100];
    char welcomeMsg[100];

    if(validateAccount(acc, pwd)){
        encryptPassword(pwd, encryptPwd);
        buildWelcomeMessage(acc, welcomeMsg);
        printf("%s\n", welcomeMsg);
    }
    return 0;
}