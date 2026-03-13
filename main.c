#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 10

struct Location
{
    char name[30];
};

struct Location loc[MAX];
int graph[MAX][MAX];
int n = 0;

int findLocation(char name[])
{
    for(int i=0;i<n;i++)
    {
        if(strcmp(loc[i].name,name)==0)
            return i;
    }
    return -1;
}

void addLocation()
{
    printf("Enter location name: ");
    scanf("%s", loc[n].name);
    n++;
    printf("Location added successfully\n");
}

void addRoute()
{
    char src[30], dest[30];
    int dist;

    printf("Enter source location: ");
    scanf("%s", src);

    printf("Enter destination location: ");
    scanf("%s", dest);

    printf("Enter distance: ");
    scanf("%d", &dist);

    int s = findLocation(src);
    int d = findLocation(dest);

    if(s==-1 || d==-1)
    {
        printf("Location not found\n");
        return;
    }

    graph[s][d] = dist;
    printf("Route added successfully\n");
}

void display()
{
    printf("\nDelivery Routes:\n");

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(graph[i][j]!=0)
            {
                printf("%s -> %s : %d km\n",loc[i].name,loc[j].name,graph[i][j]);
            }
        }
    }
}

void deleteRoute()
{
    char src[30], dest[30];

    printf("Enter source: ");
    scanf("%s",src);

    printf("Enter destination: ");
    scanf("%s",dest);

    int s=findLocation(src);
    int d=findLocation(dest);

    if(s==-1 || d==-1)
    {
        printf("Route not found\n");
        return;
    }

    graph[s][d]=0;
    printf("Route deleted\n");
}

void updateRoute()
{
    char src[30], dest[30];
    int dist;

    printf("Enter source: ");
    scanf("%s",src);

    printf("Enter destination: ");
    scanf("%s",dest);

    int s=findLocation(src);
    int d=findLocation(dest);

    if(s==-1 || d==-1)
    {
        printf("Route not found\n");
        return;
    }

    printf("Enter new distance: ");
    scanf("%d",&dist);

    graph[s][d]=dist;
    printf("Route updated\n");
}

void searchRoute()
{
    char src[30], dest[30];

    printf("Enter source: ");
    scanf("%s",src);

    printf("Enter destination: ");
    scanf("%s",dest);

    int s=findLocation(src);
    int d=findLocation(dest);

    if(s==-1 || d==-1 || graph[s][d]==0)
    {
        printf("Route not found\n");
    }
    else
    {
        printf("Distance between %s and %s = %d km\n",src,dest,graph[s][d]);
    }
}

int main()
{
    int choice;

    while(1)
    {
        printf("\n--- Package Delivery Route System ---\n");
        printf("1. Add Location\n");
        printf("2. Add Route\n");
        printf("3. Delete Route\n");
        printf("4. Update Route\n");
        printf("5. Search Route\n");
        printf("6. Display Routes\n");
        printf("7. Exit\n");

        printf("Enter choice: ");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1: addLocation(); break;
            case 2: addRoute(); break;
            case 3: deleteRoute(); break;
            case 4: updateRoute(); break;
            case 5: searchRoute(); break;
            case 6: display(); break;
            case 7: exit(0);
            default: printf("Invalid choice\n");
        }
    }

    return 0;
}