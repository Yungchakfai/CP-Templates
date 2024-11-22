int heap_size=0,n;
int heap[30001];
void swap(int &a,int &b)
{
 int t=a;a=b;b=t;    
}
void put(int d)
{
 int now,next;
 heap[++heap_size]=d;
 now=heap_size;
 while(now>1)
 {
  next=now>>1;
  if(heap[now]>=heap[next]) return;
  swap(heap[now],heap[next]);
  now=next;           
 }    
}
int del()
{
 int now,next,res;
 res=heap[1];
 heap[1]=heap[heap_size--];
 now=1;
 while(now*2<=heap_size)
 {
  next=now*2;
  if(next<heap_size&&heap[next+1]<heap[next]) next++;
  if(heap[now]<=heap[next]) return res;
  swap(heap[now],heap[next]);
  now=next;                      
 } 
}
int get()
{
 return heap[1];   
} 