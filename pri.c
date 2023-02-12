#include<stdio.h>
#define max 30

void main()
{
     int n,i,j,k=1,t,b=0,min,temp[max],bt[max],at[max],wt[max],tat[max],pr[max];

     printf("\nEnter the number of process:");
     scanf("%d",&n);

     for(i=0;i<n;i++)
     {
        printf("\nEnter the burst time for process :%d\n",i+1);
        scanf("%d",&bt[i]);
        printf("\nEnter the arrival time for process : %d\n",i+1);
        scanf("%d",&at[i]);
        printf("\nEnter the priority for process :%d\n",i+1);
        scanf("%d",&pr[i]);
     }
     for(i=0;i<n;i++)
     {
         for(j=0;j<n;j++)
         {
             if(at[i]<at[j])
             {
                t = at[j];
                at[j] = at[i];
                at[i]=t;

                t = bt[j];
                bt[j]=bt[i];
                bt[i]=t;

             }
         }
     }
     for(j=0;j<n;j++)
     {
        b=b+bt[j];
        min=bt[k];
        for(i=k;i<n;i++)
        {
             min=pr[k];
             if(b>at[i]){
                if(pr[i]<min)
                {
                    t = at[k];
                    at[k]=at[i];
                    at[i]=t;

                    t=bt[k];
                    bt[k]=bt[i];
                    bt[i]=t;

                    t=pr[k];
                    pr[k]=pr[i];
                    pr[i]=t;

                }
             }

        }k++;
     }
     temp[0]=0;

     printf("\nProcess\tPriority\tArrivaltime\tBursttime\tTurnarround\tWaiting");

     for(i=0;i<n;i++)
     {
         wt[i]=0;
         tat[i]=0;
         temp[i+1]=temp[i]+bt[i];
         wt[i]=temp[i]-at[i];
         tat[i]=wt[i]+bt[i];

     
     printf("%d\t\t%d\t\t%d\t\t%d\t\t%d\t\t%d",i+1,pr[i],at[i],bt[i],tat[i],wt[i]);
     }    
}