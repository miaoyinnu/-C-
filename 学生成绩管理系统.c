#include<stdio.h>
#include<string.h>
void print_menu()
{
    printf("******ѧ���ɼ�ϵͳ�˵�*******\n");
    printf("1. �������������\n");
    printf("2. ��ƽ���ɼ��������\n");
    printf("3. �������ѧԺѧ��\n");
    printf("4. ���ѧ������ɼ�\n");
    printf("5. �޸ĸ���ѧ���ɼ���Ϣ\n");
    printf("6. ��������ѯѧ�������\n");
    printf("7. ɾ��ѧ���ɼ�\n");
    printf("8. �޸�ϵͳ����\n");
    printf("9. ����ҿ�ѧ����Ϣ��ǿ����ҵ��Ŀ�Ŀ\n");
    printf("0. ������һ���˵�\n");
    printf("*****************************\n");
    
}
int main()
{   
    printf("���,�������¼����:\n");

    char name[32]="1234",password[32];
    scanf("%s",password);
    //printf("%d",strcmp(name,password));
    while(strcmp(name,password)!=0){
    printf("�������,����������:\n");
    scanf("%s",password);

    }

    printf("������ȷ!\n��¼�ɹ�\n");

    print_menu();




    
    return 0;
}