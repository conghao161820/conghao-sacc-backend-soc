#include <stdio.h>
#include <string.h>

int main(void)
{
    char accountName[] = "";
    char password[] = "123";
    char status[] = "blocked";
    char dayStr[] = "abc"; //模拟非法登录天数字符串

    //小目标1：账号为空
    if(strlen(accountName) == 0){
        printf("账号名不能为空\n");
        return 0;
    }
    //小目标2：密码小于6位
    if(strlen(password) < 6){
        printf("密码长度不足\n");
        return 0;
    }
    //小目标3：账号被封禁blocked
    if(strcmp(status, "blocked") == 0){
        printf("账号风险拦截\n");
        return 0;
    }

    //小目标4：登录天数格式校验（C模拟）
    int loginDay;
    if(sscanf(dayStr, "%d", &loginDay) != 1){
        printf("登录天数格式错误\n");
        return 0;
    }

    //全部通过
    printf("账号校验通过\n");
    return 0;
}