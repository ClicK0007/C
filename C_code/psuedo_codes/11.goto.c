
#include <stdio.h>

// int main() {
//     int i = 0;
// loop: // Label
//     if (i < 5) {
//         printf("%d ", i);
//         i++;
//         goto loop; // Jump to the 'loop' label
//     }
//     return 0;
// }
// Output: 0 1 2 3 4

// int main() {
//     for (int i = 0; i < 5; ++i) {
//         for (int j = 0; j < 5; ++j) {
//             if (i == 2 && j == 2)
//                 goto stop;
//             printf("(%d,%d) ", i, j);
//         }
//     }

// stop:
//     printf("\nStopped at (2,2)\n");
//     return 0;
// }
// Output: (0,0) (0,1) (0,2) (0,3) (0,4) (1,0) (1,1) (1,2) (1,3) (1,4) (2,0) (2,1) 
// Stopped at (2,2)
// If stop statement is above goto then it will result in infinite loop