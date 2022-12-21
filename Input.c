#include <stdio.h>
#include <time.h>

int main()
{
  int dayRanking, dayRankingStatus, dayRankingTemp;
  time_t t = time(NULL); 
  struct tm *tm = localtime(&t);
  
  printf("Hello & Welcome to Command Line Diary\n");
  printf("Rank your day on a scale of 1-10: ");
  
  // dayRankingStatus = scanf("%d", &dayRanking);
  
  while(dayRankingStatus!=1 || dayRanking >=11 || dayRanking == 0){
    while((dayRankingTemp=getchar()) != EOF && dayRankingTemp != '\n');
      printf("Invalid input... please enter a number between 1 and 10: ");
      // dayRankingStatus = scanf("%d", &dayRanking);
  }
 
  // begin output diary
  printf("\nRecord saved as:\n");
  printf("%s", asctime(tm));
  printf("Day ranking: %d\n", dayRanking);
  printf("\n");
  return 0;
}
