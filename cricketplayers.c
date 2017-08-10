#include <stdio.h>
#include <string.h>

struct Player
{
  char name[20];
  char country[20];
  int best_score;
  int batting_avg;
};

void showPlayer(struct Player p)
{
    printf("NAME: %s COUNTRY: %s BEST SCORE: %d BATTING AVG: %d\n",p.name,p.country,p.best_score,p.batting_avg);
}
int main() {

    struct Player p_arr[3];
    struct Player temp;
    int i,j;
    char temp_c;
    for(i=0;i<3;i++)
    {
    printf("ENTER THE FOLLOWING\n");
    printf("NAME COUNTRY BEST_SCORE BATTING AVG \n");
    gets(p_arr[i].name);
    gets(p_arr[i].country);
    scanf("%d%d",&p_arr[i].best_score,&p_arr[i].batting_avg);
    scanf("%c",&temp_c);
    }

    for(i=0;i<3;i++)
    for(j=0;j<3-i;j++)
    {
        if(p_arr[j].batting_avg < p_arr[j+1].batting_avg)
        {
            temp = p_arr[j];
            p_arr[j] = p_arr[j+1];
            p_arr[j+1] = temp;
        }
    }

    for(i=0;i<3;i++)
        showPlayer(p_arr[i]);

	return 0;
}

