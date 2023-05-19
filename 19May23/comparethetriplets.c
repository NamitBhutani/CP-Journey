#include <stdio.h>
int alicearr[3] = {0};
int bobarr[3] = {0};
int comparisonarr[2] = {0};

void compareRatings(int comparisonarr[2])
{
  // taking input for alice's rating
  for (int i = 0; i < 3; i++)
  {
    scanf("%d", &alicearr[i]);
  }
  // taking input for bob's rating
  for (int j = 0; j < 3; j++)
  {
    scanf("%d", &bobarr[j]);
  }

  for (int k = 0; k < 3; k++)
  {
    if (alicearr[k] == bobarr[k])
    {
      continue;
    }
    else
      (alicearr[k] > bobarr[k]) ? (++comparisonarr[0]) : (++comparisonarr[1]);
  }
  // printing the array
  for (int n = 0; n < 2; n++)
  {
    printf("%d ", comparisonarr[n]);
  }
}

int main()
{
  compareRatings(comparisonarr);
  return 0;
}
