#include<stdio.h>
#include <stdlib.h>
#include <string.h>
char nf[15];
int nof, i, j, k;
struct FILES {
char name[15];
int nob;
int stb;
} files[20];


int main() {
int ch;
printf("Number of files: ");
scanf("%d", &nof);
for (i = 0; i < nof; i++) {
printf("File name: ");
scanf("%s", files[i].name);
printf("Starting block: ");
scanf("%d", &files[i].stb);
printf("Number of blocks: ");
scanf("%d", &files[i].nob);
}
while (1) {
    
x: printf("Enter name of file to search: ");
scanf("%s", nf);
for (i = 0; i < nof; i++)
if (strcmp(nf, files[i].name) == 0)
break;
if (i == nof) {
printf("File not found\n");
} else {
printf("File Name: %s\n"
"Start Block: %d\n"
"Number of Blocks: %d\n"
"Blocks Occupied:\n",
files[i].name, files[i].stb, files[i].nob);
for (j = 0; j < files[i].nob; j++) {
k = (files[i].stb) + j;
printf("%d\n", k);
}
}
printf("Want to search file or not(yes-1|no-0):");
scanf("%d",&ch);

if(ch ==1 ){
    goto x;
}else{
    return 0;
}
}
}