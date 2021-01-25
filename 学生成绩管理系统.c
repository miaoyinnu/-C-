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
    printf("你好,请输入登录密码:\n");

    char name[32]="1234",password[32];
    scanf("%s",password);
    //printf("%d",strcmp(name,password));
    while(strcmp(name,password)!=0){
    printf("密码错误,请重新输入:\n");
    scanf("%s",password);

    }

    printf("密码正确!\n登录成功\n");

    print_menu();




    
    return 0;
}