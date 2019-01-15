#include <stdio.h>
int main()
{
    int qian = 0;
    printf("进入ATM管理系统\n");

    while (1)
    {
        printf("1---存钱\n");
        printf("2---取钱\n");
        printf("3---余额\n");
        printf("4---退出\n");

        printf("请选择相应的功能编号\n");
        int code;
        scanf("%d", &code);

        if (code == 1)
        {
            printf("请输入存钱金额\n");
            int cun;
            scanf("%d", &cun);
            qian = qian + cun;

            printf("存钱成功，点击回车继续\n");
            char x;
            scanf("%c", &x);
            scanf("%c", &x);
        }

        if (code == 2)
        {

            printf("请输入取钱金额\n");
            int qu;
            scanf("%d", &qu);
            if (qu < qian)
            {

                qian = qian - qu;
                printf("取钱成功，点击回车继续\n");
            }
            else
            {
                printf("余额不足，取钱失败\n");
                char x;
                scanf("%c", &x);
                scanf("%c", &x);
            }
        }

        if (code == 3)
        {
            printf("您的余额为:%d\n", qian);

            char x;
            scanf("%c", &x);
            scanf("%c", &x);
        }

        if (code == 4)
        {
            printf("程序结束\n");
            break;
        }
    }

    return 0;
}