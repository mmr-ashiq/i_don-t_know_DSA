/*Suppose , there have a class which contain 30 benches with serial numbers from 0 to 29 . 
  7 individual students are there in the class now. Each student has a student id with 2 numbers. 
  Student must seat in the class by his/her student id wise ascending order. Then a student come to the class . 
  Teacher will found whether the student id is already present or not. If not found let the student be seated to exact position . 
  If student id already present then disqualify the student. 
  The head teacher also said that the whole process should be perform / solved in a short time and properly .
*/

#include<stdio.h>
#include<conio.h>
int main()
{
    int bench[30],n,i,j,mid,max,search,min,swap,new_id,new_index;
    printf("\n\t\thow many student right now in class: ");
    scanf("%d",&n);
    printf("\n\t\tEnter student's id: ");
    for(i=0; i<n; i++)
        scanf("%d",&bench[i]);

    //seating student in ascending order using bubble sort
    for(i=1; i<n; i++)
    {
        for(j=0; j<n-i; j++)
        {
            if(bench[j]>bench[j+1])
            {
                swap=bench[j];
                bench[j]=bench[j+1];
                bench[j+1]=swap;
            }
        }
    }
    printf("\n\t\tAfter sorting student's ID: ");
    for(i=0; i<n; i++)
        printf("%d ",bench[i]);

    //A new student come to the class
    printf("\n\n\t\tA new student knock the door!!");

    //new student search if he is in the right class?
    printf("\n\t\tTeacher: whats your id? ");
    scanf("%d",&new_id);
    for(i=0; i<n; i++)
    {
        if(new_id == bench[i])
            new_index=i;
    }
    if(bench[new_index]==new_id)
    {
        printf("\n\t\tTeacher: There is a student with same ID. So,You are not a student of this class");
    }

    //insert new ID into existing array
    else if(new_id != bench[i])
    {
        for(i=n-1; i<=0; i++)
            bench[i+1]=bench[i];
        bench[n]=new_id;
        //again sort
        for(i=1; i<n+1; i++)
        {
            for(j=0; j<n+1-i; j++)
            {
                if(bench[j]>bench[j+1])
                {
                    swap=bench[j];
                    bench[j]=bench[j+1];
                    bench[j+1]=swap;
                }
            }
        }

        for(i=0; i<n+1; i++)
        {
            if(bench[i]==new_id)
            {
                printf("\n\t\tYour sit located at after ID number %d \n",bench[i-1]);
                break;
            }
        }
    }
    getch();
}
