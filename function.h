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
void choose_menu()
{   
    void log_in();
    void print_menu();
    void choose_menu();

    int option;
    printf("����������0-9����˵�:\n");
    scanf("%d",&option);
    
    switch(option)
    {   
        case 1:
        {
            printf("1");
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
            log_in();
    print_menu();
    choose_menu();
            break;
        }

        
        


        
    }
}
void log_in()
{   
    
    char name[32]="1234",password[32];
    printf("���,�������¼����:\n");
    scanf("%s",password);

    while(strcmp(name,password)!=0)
    {
        printf("�������,����������:\n");
        scanf("%s",password);

    }
    printf("������ȷ!\n��¼�ɹ�\n");
    

}