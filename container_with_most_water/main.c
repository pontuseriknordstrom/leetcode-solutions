#include <stdlib.h>

// Beats 100%
// 0ms runtime

int maxArea(int* height, int heightSize) {
  int bar1 = 0;
  int bar2 = heightSize - 1;
  int dn = 0;
  int area1 = 0;
  int area2 = 0;
  int max = 0;

  while (bar1 < heightSize && bar2 >= 0) {
    dn = bar2 - bar1;

    if (height[bar1] < height[bar2]) {
      area1 = dn * height[bar1];
      bar1++;
    }

    else if (height[bar2] == height[bar1]) {
      area2 = dn * height[bar1];
      bar1++;
      bar2--;
    }

    else {
      area2 = dn * height[bar2];
      bar2--;
    }

    if (area1 > max) max = area1;
    if (area2 > max) max = area2;

    if (bar1 == bar2) {
      return max;
    }
  }
  return max;
}
