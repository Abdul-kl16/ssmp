#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct File
{
    char name[20];
    int bi[100],nob,ix;


}f[50];

void main()
{  char s[20];
    int i,j,n;
    printf("Enter the number of files:");
    scanf("%d",&n);

    for(i=0;i<n;i++){

    printf("Enter the name of the block:");
    scanf("%s",f[i].name);

    printf("Enter the no of blocks:");
    scanf("%d",&f[i].nob);

    printf("Enter the index:");
    scanf("%d",&f[i].ix);

    printf("Enter the blocks in files:");
    for(j=0;j<f[i].nob;j++){
        scanf("%d",&f[i].bi[j]);
    }
    }
printf("Enter the file to be searched:");
scanf("%s",s);
for(i=0;i<n;i++)
{
    if(strcmp(s,f[i].name)==0){

    
     break;
    }
     if(i==n)
     {
        printf("FIle not found!");

     }else{
        printf("Filse name and blocks occupied:");
        printf("%s\t%d\t",f[i].name,f[i].nob);

        printf("index is%d",f[i].ix);
        printf("\nBlocks occupied:");
        for(j=0;j<f[i].nob;j++)
        {
            printf("\n%d->%d\n",f[i].ix,f[i].bi[j]);
        }

     }
}
}


