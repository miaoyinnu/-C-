#include<stdio.h>
#include<string.h>
void print_menu()
{
    printf("******学生成绩系统菜单*******\n");
    printf("1. 按姓名排序，输出\n");
    printf("2. 按平均成绩排序，输出\n");
    printf("3. 输出给定学院学生\n");
    printf("4. 添加学生及其成绩\n");
    printf("5. 修改给定学生成绩信息\n");
    printf("6. 按姓名查询学生，输出\n");
    printf("7. 删除学生成绩\n");
    printf("8. 修改系统密码\n");
    printf("9. 输出挂科学生信息并强调其挂掉的科目\n");
    printf("0. 返回上一级菜单\n");
    printf("*****************************\n");
    
}
int main()
{   
    char name[32]="1234",password[32];
    printf("你好,请输入登录密码:\n");
    scanf("%s",password);

    while(strcmp(name,password)!=0)
    {
        printf("密码错误,请重新输入:\n");
        scanf("%s",password);

    }

    
    printf("密码正确!\n登录成功\n");

    print_menu();
    int option;
    scanf("%d",&option);
    switch(option)
    {   
        case 1:
        {
            printf("");
            break;
        }
        case 2:
        {
            //
            break;
        }
        case 3:
        {
            //
            break;
        }
        case 4:
        {
            //
            break;
        }
        case 5:
        {
            //
            break;
        }
        case 6:
        {
            //
            break;
        }
        case 7:
        {
            //
            break;
        }
        case 8:
        {
            //
            break;
        }
        case 9:
        {
            //
            break;
        }
        case 0:
        {
            //
            break;
        }

        
        


        
    }




    
    return 0;
}
