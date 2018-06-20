#ifndef QUE_H_INCLUDED
#define QUE_H_INCLUDED

typedef struct m
{
    int Caller;
    int CallTo;
    int backet;

}M;
typedef struct n
{
    int Caller;
    int CallTo;
    int Remaing;
    int moving;

}N;
typedef struct c
{
    int Caller;
    int CallTo;
}C;
typedef struct Entry
{
   char type;
   union{
       C Emargancy;
       N Voice;
       M Data;
   }info;
}ENTRY;
typedef struct node
{
    ENTRY entry;
    struct node *next;
}Node;
typedef struct queue
{
    Node *Dfront;
    Node *Drear;
    Node *Vfront;
    Node *Vrear;
    Node *Efront;
    Node *Erear;
}Queue;

void CreateQueue(Queue *);
void deQueue(Queue*,ENTRY*);
void enQueueE(Queue*,ENTRY);
void enQueueD(Queue*,ENTRY);
void enQueueV(Queue*,ENTRY);
int  QueueFull(Queue);
int  QueueEmpty(Queue);
void dimass(Queue *pq);






#endif // QUE_H_INCLUDED
