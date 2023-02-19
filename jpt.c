#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>


typedef struct
{
   int roll_no;
   char name[10];
   float GPA;
} student;
student s1[10];

bool vote(char *name);


int main(int argc, char *argv[])
{
   int candidate_count = argc-1;
   for (int i = 0; i < candidate_count; i++)
      {
         strcpy(s1[i].name, argv[i+1]);
      }
      for (int j=0; j<6; j++)
      {
         

         char name[10];
         printf("Vote: ");
         scanf("%s", name);

         

         // Check for invalid vote
         if (!vote(name))
         {
               printf("Invalid vote.\n");
         }
       

      }

   return 0;
}
bool vote(char *name)
{
   for (int i = 0; i < 6; i++)
   {
      if (!strcmp(name, s1[i].name))
      {
         return true;
      }
   }
   return false;
}

