#include <stdio.h>
#include <string.h>

//1.准备账号信息
void prepareInfo(char* acc, char* pwd){
    strcpy(acc,"cqx001");
    strcpy(pwd,"12345678");
}
//2.校验账号
int checkAccount(char* acc, char* pwd){
    if(strlen(acc)==0){printf("账号为空\n");return 0;}
    if(strlen(pwd)<6){printf("密码太短\n");return 0;}
    return 1;
}
//3.加密密码
void encryptPwd(char* src, char* dst){
    strcpy(dst, src);
    strrev(dst);
}
//4.模拟保存账号
void saveAccount(char* acc, char* pwdDigest){
    printf("保存账号 %s，密码摘要：%s\n", acc, pwdDigest);
}
//5.欢迎语
void welcome(){
    printf("Hello World! 慢脚账号创建完成\n");
}

int main(void)
{
    char acc[100],pwd[100],digest[100];
    prepareInfo(acc,pwd);
    if(!checkAccount(acc,pwd)) return 0;
    encryptPwd(pwd, digest);
    saveAccount(acc, digest);
    welcome();
    return 0;
}