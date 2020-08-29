#include<stdio.h>
#include<string.h>

int main(){
int frames;
char data[100];
char data1[100];
char data2[100];
int l,i,j=0;
char stf_str[100];
printf("Enter number of frames:");
scanf("%d",&frames);
printf("Enter the  characters:");
scanf("%s",data);
printf("Original data : ");
printf("%s",data);
printf("\n");
l=strlen(data);
for(i=0;i<l;i++){
    if(data[i]=='d'&&data[i+1]=='l'&&data[i+2]=='e'){
            data1[j]='d';
            data1[j+1]='l';
            data1[j+2]='e';
            j=j+3;

    }
    data1[j]=data[i];
    j++;
}
data1[j]='\0';
printf("Character stuffing : ");
strcpy(stf_str,"dlestx");
strcat(stf_str,data1);
strcat(stf_str,"dleetx");
printf("%s",stf_str);
printf("\n");

l = strlen(data1);
j=0;
for(i=0;i<l;i++){
    if(data1[i]=='d'&&data1[i+1]=='l'&&data1[i+2]=='e'&&data1[i+3]=='d'&&data1[i+4]=='l'&&data1[i+5]=='e'){
        data2[j]=data1[i+3];
        data2[j+1]=data1[i+4];
        data2[j+2]=data1[i+5];
        j=j+3;
        i=i+5;
    }else{
      data2[j]=data1[i];
      j++;
    }
}


data2[j]='\0';
printf("Received data : ");
printf("%s",data2);
printf("\n");
printf("\n");


return 0;
}
