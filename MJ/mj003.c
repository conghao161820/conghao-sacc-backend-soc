#include <stdio.h>
int main(void)
{
    char accountName[] = "cqx001";    //账号名
    char nickName[] = "小cqx";        //昵称
    char password[] = "12345678";     //明文密码
    int loginDays = 15;               //登录天数
    int isNewUser = 1;                //是否新用户 1是 0否

    //数组：连续存放一组相同类型数据，下标从0开始！！
    int loginRecord[7] = {2,5,1,4,0,3,6};
    printf("第1天登录次数：%d\n", loginRecord[0]);
    printf("第7天登录次数：%d\n", loginRecord[6]);
    printf("一共记录了 %d 天\n", 7);

    loginRecord
[2] = 9;
    printf("修改后，第3天登录次数：%d\n", loginRecord[2]);

    printf("\n=====账号信息卡=====\n");
    printf("账号名：%s\n", accountName);
    printf("昵称：%s\n", nickName);
    printf("登录天数：%d\n", loginDays);
    printf("是否新用户：%s\n", isNewUser ? "是" : "否");
    return 0;
}