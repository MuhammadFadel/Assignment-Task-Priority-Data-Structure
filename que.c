#include"que.h"
void enQueueE(Queue *pq,ENTRY e)
{
    Node*p=(Node*)malloc(sizeof(Node));
    p->next=0;
    p->entry=e;
    if (!pq->Erear)
        pq->Efront=p;
    else
        pq->Erear->next=p;
    pq->Erear=p;
}
void enQueueD(Queue *pq,ENTRY e)
{
    Node*p=(Node*)malloc(sizeof(Node));
    p->next=0;
    p->entry=e;
    if (!pq->Drear)
        pq->Dfront=p;
    else
        pq->Drear->next=p;
    pq->Drear=p;
}
void enQueueV(Queue *pq,ENTRY e)
{
    Node*p=(Node*)malloc(sizeof(Node));
    p->next=0;
    p->entry=e;
    if (!pq->Vrear)
        pq->Vfront=p;
    else
        pq->Vrear->next=p;
    pq->Vrear=p;
}

void deQueue(Queue *pq,ENTRY *e)
{

    if(pq->Efront)
    {
    Node *p=pq->Efront;
    pq->Efront=p->next;
    *e=p->entry;
    free(p);
    if (!pq->Efront)
        pq->Erear=0;
    }
    else if(pq->Vfront)
    {
    Node *p=pq->Vfront;
    pq->Vfront=p->next;
    *e=p->entry;
    free(p);
    if (!pq->Vfront)
        pq->Vrear=0;
    }
    else if(pq->Dfront)
    {
    Node *p=pq->Dfront;
    pq->Dfront=p->next;
    *e=p->entry;
    free(p);
    if (!pq->Dfront)
        pq->Drear=0;
    }

}
void CreateQueue(Queue *pq)
{
    pq->Dfront=0;
    pq->Drear=0;
    pq->Efront=0;
    pq->Erear=0;
    pq->Vfront=0;
    pq->Vrear=0;
}
void dimass(Queue *pq)
{
    if(pq->Dfront)
    {
        pq−>Drear=pq−>Dfront ;
        while(pq−>Drear ){
        pq−>Drear=pq−>Drear−>next ;

       free(pq−>Dfront ) ;
     pq−>Dfront=pq−>Drear ;
        }
    }
    if(pq->Vfront)
    {
        pq−>Vrear=pq−>Vfront ;
        while(pq−>Vrear ){
        pq−>Vrear=pq−>Vrear−>next ;

       free(pq−>Vfront ) ;
     pq−>Vfront=pq−>Vrear ;
        }
    }
    if(pq->Efront)
    {
        pq−>Erear=pq−>Efront ;
        while(pq−>Erear ){
        pq−>Erear=pq−>Erear−>next ;

       free(pq−>Efront ) ;
     pq−>Efront=pq−>Erear ;
        }
    }
}
int  QueueEmpty(Queue q)
{
    return (!q.Dfront&&!q.Efront&&q.Vfront);
}
