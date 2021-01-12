#include<stdio.h>
int main() {
int window,sent=0,ack,i;
printf("enter the window size");
scanf("%d",&window);
while(1) {
for(i=0;i<window;i++) {
printf("Frame %d has been transmitted\n",sent);
sent++;
if(sent==window)
break;
}
printf("\nPlease enter the last acnowledgement received.\n");
scanf("%d",&ack);
if(ack==window) {
break;
}
else {
sent=ack;
}
}
return 0;
}
