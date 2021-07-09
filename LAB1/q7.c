//SAMBARAN SENGUPTA - 1929039
#include <stdio.h>

struct Distance {
   int feet;
   int inch;
} d1, d2, result;

int main() {
   // take first distance input
   printf("Enter 1st distance\n");
   printf("Enter feet: ");
   scanf("%d", &d1.feet);
   printf("Enter inch: ");
   scanf("%d", &d1.inch);

   // take second distance input
   printf("\nEnter 2nd distance\n");
   printf("Enter feet: ");
   scanf("%d", &d2.feet);
   printf("Enter inch: ");
   scanf("%d", &d2.inch);

   // adding distances
   result.feet = d1.feet + d2.feet;
   result.inch = d1.inch + d2.inch;

   // convert inches to feet if greater than 12
   while (result.inch >= 12.0) {
      result.inch = result.inch - 12.0;
      ++result.feet;
   }
   printf("\nSum of distances = %d\'%d\"\n", result.feet, result.inch);
   return 0;
}
