#include <stdio.h>
#include <string.h>
int main(void)
{
    //准备账号列表，至少5个，包含空账号、risk_user
    char* accountList[] = {"cqx001", "cqx002", "", "cqx003", "risk_user", "cqx004"};
    int total = sizeof(accountList)/sizeof(accountList[0]);
    int successCount = 0;

    //循环遍历所有账号
    for(int i=0; i<total; i++){
        char* name = accountList[i];
        //遇到空账号，跳过，不计入成功
        if(strlen(name) == 0){
            continue;
        }
        //遇到risk_user，直接停止所有处理
        if(strcmp(name, "risk_user") == 0){
            printf("发现风险账号，停止处理！\n");
            break;
        }
        printf("正在创建账号：%s\n", name);
        successCount
++;
    }
    printf("成功处理账号数量：%d\n", successCount);
    return 0;
}