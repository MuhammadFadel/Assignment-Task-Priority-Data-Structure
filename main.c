#include <stdio.h>
#include <stdlib.h>
#include "que.h"
int main()
{
Queue q;
CreateQueue(&q);
int loop;
ENTRY e;

while(1)
{
scanf("%d",&loop);
if(loop==1)
{
scanf("%d",&e.info.Data.Caller);
scanf("%d",&e.info.Data.CallTo);
scanf("%d",&e.info.Data.backet);
e.type='M';
enQueueD(&q,e);
}
       else if(loop==2)
       {
           scanf("%d",&e.info.Voice.Caller);
           scanf("%d",&e.info.Voice.CallTo);
           scanf("%d",&e.info.Voice.moving);
           scanf("%d",&e.info.Voice.Remaing);
           e.type='N';
           enQueueV(&q,e);
       }
       else if(loop==3)
       {
           scanf("%d",&e.info.Emargancy.Caller);
           scanf("%d",&e.info.Emargancy.CallTo);
            e.type='C';
           enQueueV(&q,e);
       }
       else if(loop==4)
       {
           deQueue(&q,&e);
           switch(e.type)
            {
               case 'C':
                   printf("%d",e.info.Emargancy.Caller);
                   printf("%d",e.info.Emargancy.CallTo);
               break;
               case 'M':
                   printf("%d",e.info.Data.Caller);
           printf("%d",e.info.Data.CallTo);
           printf("%d",e.info.Data.backet);
               break;
               case 'N':
                   printf("%d",e.info.Voice.Caller);
           printf("%d",e.info.Voice.CallTo);
           printf("%d",e.info.Voice.moving);
           printf("%d",e.info.Voice.Remaing);
               break;
            }
       }
       else if(loop==5)
       {
           dimass(&q);
       }
   }
    return 0;
}
