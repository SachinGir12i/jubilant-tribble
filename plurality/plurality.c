
#include <stdio.h>
#include <string.h>
#include<stdbool.h>

// Max number of candidates
#define MAX 9
#define namelength 10

// Candidates have name and vote count
typedef struct
{
    char name[namelength];
    int votes;
}
candidate;

// Array of candidates
candidate candidates[MAX];

// Number of candidates
int candidate_count;
int voter_count;

// Function prototypes
bool vote(char name[namelength]);
void print_winner(void);

int main(int argc, char *argv[])
{
    // Check for invalid usage
    if (argc < 2)
    {
        printf("Usage: plurality [candidate ...]\n");
        return 1;
    }

    // Populate array of candidates
    candidate_count = argc - 1;
    if (candidate_count > MAX)
    {
        printf("Maximum number of candidates is %i\n", MAX);
        return 2;
    }
    for (int i = 0; i < candidate_count; i++)
    {
        strcpy(candidates[i].name, argv[i + 1]);
        candidates[i].votes = 0;
    }

    voter_count = 0;
    printf("Number of voters: ");
    scanf("%d", &voter_count);

    // Loop over all voters
    for (int i = 0; i < voter_count; i++)
    {
        char name[namelength];
        printf("Vote: ");
        scanf("%s", name);

        // Check for invalid vote
        if (!vote(name))
        {
            printf("Invalid vote.\n");
        }
    }

    // Display winner of election
    print_winner();
}

// Update vote totals given a new vote
bool vote(char name[namelength])
{
    // TODO
    
    for (int i = 0; i < candidate_count; i++)
    {
        
        if (!strcmp(candidates[i].name, name))
        {
            candidates[i].votes++;
            return true;
        }
    }

    
    return false;
}

// Print the winner (or winners) of the election
void print_winner(void)
{
    // TODO
    int highest = candidates[0].votes;
    for (int i=1; i<candidate_count; i++)
    {
        if (candidates[i].votes>highest)
        {
            
            highest = candidates[i].votes;
        }
    }
    for (int i = 0; i<candidate_count; i++)
    {
        if (candidates[i].votes == highest)
        {
            printf("%s\n", candidates[i].name);
        }
    }
    
  
    return;
}