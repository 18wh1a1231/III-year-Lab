#include<stdio.h>
#include<string.h>

int main(){
int no_of_frames;
int i;
int header[50];
char Frames[20][50];
printf("Enter the no. of frames:");
scanf("%d",&no_of_frames);
for(i=1;i<=no_of_frames;i++){
    printf("Frame%d:" ,i);
    scanf("%s",&Frames[i-1]);
}
printf("AT THE SENDER\n");
printf("Data as frames:\n");
for(i=0;i<no_of_frames;i++){
    header[i] = strlen(Frames[i]);
    printf("Frame%d:%d%s\n",i+1,header[i]+1,Frames[i]);
}
printf("Data transmitted :");
for(i=0;i<no_of_frames;i++){
    printf("%d%s",header[0]+1,Frames[0]);
}
printf("\n");
printf("AT THE RECEIVER\n");
printf("The data received.\n");
 printf("The data after removing count char:");
for(i=0;i<no_of_frames;i++){
    printf("%s",Frames[i]);
}
printf("\n");
printf("The data in frame form:\n");
for(i=0;i<no_of_frames;i++){
    printf("Frame%d:%s\n",i+1,Frames[i]);
}
return 0;

}
