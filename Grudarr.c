#include<stdio.h>
#include<stdbool.h>
#include<string.h>
#include<stdlib.h>
int id[30],i,j,size,op;
char name[30][30],address[30][30];
char gender[30];
void input(){
    printf("Enter ID Of Students: ");scanf("%d",&id[i]);fflush(stdin);
    printf("Enter Name Of Student: ");gets(name[i]);
    printf("Enter Gender Of Student: "); scanf(" %c", &gender[i]); fflush(stdin);
    printf("Enter Address Of Students:");gets(address[i]);
}
void header(){
    printf("ID\tNAME\t\tGENDER\tADDRESS\n");
}
void output(){
    printf("%d\t%s\t\t%c\t%s\n",id[i],name[i],gender[i],address[i]);
}
int main(){
     do{
        printf("=====Infomation Students====\n");
        printf("||         1.Input        ||\n");
        printf("||         2.Output       ||\n");
        printf("||         3.Search       ||\n");
        printf("||         4.Update       ||\n");
        printf("||         5.Delete       ||\n");
        printf("||         6.Exit         ||\n");
        printf("=============================\n");
        printf("PLease You Chose One Option In System:");scanf("%d",&op);
        switch(op) {
            case 1:{
                printf("======Input Information Students=====\n");
                printf("Enter Number Of Students: ");scanf("%d",&size);
                for(i=0;i<size;i++){
                    printf("Students At Number %d\n",i+1);
                    input();
                }
            }break;
            case 2:{
                printf("======Ouput Information Students=====\n");
                header();
                for(i=0;i<size;i++){
                    output();
                }
            }break;
            case 3:{
                bool check=true;
                int search_id;
                printf("Enter The ID To Search Of Students: ");scanf("%d",&search_id);
                header();
                for(i=0;i<size;i++)
                {
                    if(search_id==id[i]){
                        output();
                        printf("----------------------------------\n");
                        printf("| Students Search Is Successfuly |\n");
                        printf("----------------------------------\n");
                        check=false;
                    }
                }
               if(check){
                printf("---------------------\n");
                printf("| ID Students Is No |\n");
                printf("---------------------\n");
               }
            }break;
            case 4:{
                int update;
                bool check=true;
                printf("Enter ID TO Update :");scanf("%d",&update);
                for(i=0;i<size;i++){
                    if(update==id[i]){
                        input();
                        printf("----------------------------------\n");
                        printf("| Students Update Is Successfuly |\n");
                        printf("----------------------------------\n");
                        check=false;
                    }
                }
                if(check){
                    printf("---------------------\n");
                    printf("| ID Students Is No |\n");
                    printf("---------------------\n");
                }
            }break;
            case 5:{
                int delateID;
                bool check=true;
                printf("Enter ID To Delete Of Students:");scanf("%d",&delateID);
                for(i=0;i<size;i++){
                    if(delateID==id[i]){
                        for(j=i;j<size-1;j++){
                            id[j]=id[j+1];
                            strcpy(name[j],name[j+1]);
                            gender[j]=gender[j+1];
                            strcpy(address[j],address[j+1]);
                        }
                        size--;
                        printf("----------------------------------\n");
                        printf("| Students Delete Is Successfuly |\n");
                        printf("----------------------------------\n");
                        check=false;
                    }
                }
                if(check){
                    printf("---------------------\n");
                    printf("| ID Students Is No |\n");
                    printf("---------------------\n");
                }
            }break;
            case 6:{
                printf("----------------------------\n");
                printf("| Exit Program System..... |\n");
                printf("----------------------------\n");
                exit(0);
            }break;
        }

     }while(op<7);
}