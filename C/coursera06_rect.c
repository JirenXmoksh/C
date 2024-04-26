#include <stdio.h>
#include <stdlib.h>
//I've provided "min" and "max" functions in
//case they are useful to you
int min (int a, int b) {
  if (a < b) {
    return a;
  }
  return b;
}
int max (int a, int b) {
  if (a > b) {
    return a;
  }
  return b;
}

//Declare your rectangle structure here!
typedef struct rectangle {
    int x;
    int y;
    int width;
    int height;
} rectangle;


rectangle canonicalize(rectangle r) {
  //WRITE THIS FUNCTION
   if (r.width < 0) {
        r.x += r.width;
        r.width *= (-1);
    }
    if (r.height < 0) {
        r.y += r.height;
        r.height *= (-1);
    }
  return r;
}
rectangle intersection(rectangle r1, rectangle r2) {
    // Canonicalize the rectangles
    r1 = canonicalize(r1);
    r2 = canonicalize(r2);

    // Calculate the coordinates of the intersection rectangle
    int x_left = max(r1.x, r2.x);
    int y_bottom = max(r1.y, r2.y);
    int x_right = min(r1.x + r1.width, r2.x + r2.width);
    int y_top = min(r1.y + r1.height, r2.y + r2.height);

    // Calculate the width and height of the intersection rectangle
    int width = x_right - x_left;
    int height = y_top - y_bottom;

    // Check if there's no intersection
    if (width <= 0 || height <= 0) {
        // Return an empty rectangle
        rectangle empty_rect;
        empty_rect.x = 0;
        empty_rect.y = 0;
        empty_rect.width = 0;
        empty_rect.height = 0;
        return empty_rect;
    }

    // Create a new rectangle representing the intersection
    rectangle intersect_rect;
    intersect_rect.x = x_left;
    intersect_rect.y = y_bottom;
    intersect_rect.width = width;
    intersect_rect.height = height;

    return intersect_rect;
}



//You should not need to modify any code below this line
void printRectangle(rectangle r) {
    r = canonicalize(r);
    if (r.width == 0 && r.height == 0) {
        printf("<empty>\n");
    } else {
        printf("(%d,%d) to (%d,%d)\n", r.x, r.y, r.x + r.width, r.y + r.height);
    }
}

int main (void) {
  rectangle r1;
  rectangle r2;
  rectangle r3;
  rectangle r4;

  r1.x = 2;
  r1.y = 3;
  r1.width = 5;
  r1.height = 6;
  printf("r1 is ");
  printRectangle(r1);

  r2.x = 4;
  r2.y = 5;
  r2.width = -5;
  r2.height = -7;
  printf("r2 is ");
  printRectangle(r2);
  
  r3.x = -2;
  r3.y = 7;
  r3.width = 7;
  r3.height = -10;
  printf("r3 is ");
  printRectangle(r3);

  r4.x = 0;
  r4.y = 7;
  r4.width = -4;
  r4.height = 2;
  printf("r4 is ");
  printRectangle(r4);

  //test everything with r1
  rectangle i = intersection(r1,r1);
  printf("intersection(r1,r1): ");
  printRectangle(i);

  i = intersection(r1,r2);
  printf("intersection(r1,r2): ");
  printRectangle(i);
  
  i = intersection(r1,r3);
  printf("intersection(r1,r3): ");
  printRectangle(i);

  i = intersection(r1,r4);
  printf("intersection(r1,r4): ");
  printRectangle(i);

  //test everything with r2
  i = intersection(r2,r1);
  printf("intersection(r2,r1): ");
  printRectangle(i);

  i = intersection(r2,r2);
  printf("intersection(r2,r2): ");
  printRectangle(i);
  
  i = intersection(r2,r3);
  printf("intersection(r2,r3): ");
  printRectangle(i);

  i = intersection(r2,r4);
  printf("intersection(r2,r4): ");
  printRectangle(i);

  //test everything with r3
  i = intersection(r3,r1);
  printf("intersection(r3,r1): ");
  printRectangle(i);

  i = intersection(r3,r2);
  printf("intersection(r3,r2): ");
  printRectangle(i);
  
  i = intersection(r3,r3);
  printf("intersection(r3,r3): ");
  printRectangle(i);

  i = intersection(r3,r4);
  printf("intersection(r3,r4): ");
  printRectangle(i);

  //test everything with r4
  i = intersection(r4,r1);
  printf("intersection(r4,r1): ");
  printRectangle(i);

  i = intersection(r4,r2);
  printf("intersection(r4,r2): ");
  printRectangle(i);
  
  i = intersection(r4,r3);
  printf("intersection(r4,r3): ");
  printRectangle(i);

  i = intersection(r4,r4);
  printf("intersection(r4,r4): ");
  printRectangle(i);


  return 0;

}

// #include <stdio.h>
// #include <stdlib.h>

// // Define struct for rectangles
// typedef struct {
//     int x, y, width, height;
// } rectangle;

// // Helper functions to find minimum and maximum
// int min(int a, int b) {
//     return (a < b) ? a : b;
// }

// int max(int a, int b) {
//     return (a > b) ? a : b;
// }

// // Canonicalize function to ensure standard representation of rectangles
// rectangle canonicalize(rectangle r) {
//     if (r.width < 0) {
//         r.x += r.width;
//         r.width = abs(r.width);
//     }
//     if (r.height < 0) {
//         r.y += r.height;
//         r.height = abs(r.height);
//     }
//     return r;
// }

// // Intersection function to find the overlap region between two rectangles
// // rectangle intersection(rectangle r1, rectangle r2) {
// //     r1 = canonicalize(r1);
// //     r2 = canonicalize(r2);
    
// //     int x1 = max(r1.x, r2.x);
// //     int y1 = max(r1.y, r2.y);
// //     int x2 = min(r1.x + r1.width, r2.x + r2.width);
// //     int y2 = min(r1.y + r1.height, r2.y + r2.height);
    
// //     rectangle result = {x1, y1, max(0, x2 - x1), max(0, y2 - y1)};
// //     return result;
// // }

// // rectangle intersection(rectangle r1, rectangle r2) {
// //     r1 = canonicalize(r1);
// //     r2 = canonicalize(r2);
    
// //     int x1 = max(r1.x, r2.x);
// //     int y1 = max(r1.y, r2.y);
// //     int x2 = min(r1.x + r1.width, r2.x + r2.width);
// //     int y2 = min(r1.y + r1.height, r2.y + r2.height);
    
// //     int width =  x2 - x1;
// //     int height = y2 - y1;
    
// //     if (width <= 0 || height <= 0) {
// //         return (rectangle){0, 0, 0, 0}; // Empty intersection
// //     } else {
// //         return (rectangle){x1, y1, width, height};
// //     }
// // }

// rectangle intersection(rectangle r1, rectangle r2) {
//     // Canonicalize the rectangles
//     r1 = canonicalize(r1);
//     r2 = canonicalize(r2);

//     // Calculate the coordinates of the intersection rectangle
//     int x_left = max(r1.x, r2.x);
//     int y_bottom = max(r1.y, r2.y);
//     int x_right = min(r1.x + r1.width, r2.x + r2.width);
//     int y_top = min(r1.y + r1.height, r2.y + r2.height);

//     // Calculate the width and height of the intersection rectangle
//     int width = x_right - x_left;
//     int height = y_top - y_bottom;

//     // Check if there's no intersection
//     if (width <= 0 || height <= 0) {
//         // Return an empty rectangle
//         rectangle empty_rect;
//         empty_rect.x = 0;
//         empty_rect.y = 0;
//         empty_rect.width = 0;
//         empty_rect.height = 0;
//         return empty_rect;
//     }

//     // Create a new rectangle representing the intersection
//     rectangle intersect_rect;
//     intersect_rect.x = x_left;
//     intersect_rect.y = y_bottom;
//     intersect_rect.width = width;
//     intersect_rect.height = height;

//     return intersect_rect;
// }

// // Function to print rectangles
// void printRectangle(rectangle r) {
//     r = canonicalize(r);
//     if (r.width == 0 && r.height == 0) {
//         printf("<empty>\n");
//     } else {
//         printf("(%d,%d) to (%d,%d)\n", r.x, r.y, r.x + r.width, r.y + r.height);
//     }
// }

// // Main function to test the code
// int main(void) {
//     rectangle r1 = {2, 3, 5, 6};
//     rectangle r2 = {4, 5, -5, -7};
//     rectangle r3 = {-2, 7, 7, -10};
//     rectangle r4 = {0, 7, -4, 2};
    
//     printf("r1 is ");
//     printRectangle(r1);
//     printf("r2 is ");
//     printRectangle(r2);
//     printf("r3 is ");
//     printRectangle(r3);
//     printf("r4 is ");
//     printRectangle(r4);
    
//     rectangle i = intersection(r1, r1);
//     printf("intersection(r1,r1): ");
//     printRectangle(i);

//     i = intersection(r1, r2);
//     printf("intersection(r1,r2): ");
//     printRectangle(i);

//     i = intersection(r1, r3);
//     printf("intersection(r1,r3): ");
//     printRectangle(i);

//     i = intersection(r1, r4);
//     printf("intersection(r1,r4): ");
//     printRectangle(i);

   
//   i = intersection(r2,r1);
//   printf("intersection(r2,r1): ");
//   printRectangle(i);

//   i = intersection(r2,r2);
//   printf("intersection(r2,r2): ");
//   printRectangle(i);
  
//   i = intersection(r2,r3);
//   printf("intersection(r2,r3): ");
//   printRectangle(i);

//   i = intersection(r2,r4);
//   printf("intersection(r2,r4): ");
//   printRectangle(i);

//   //test everything with r3
//   i = intersection(r3,r1);
//   printf("intersection(r3,r1): ");
//   printRectangle(i);

//   i = intersection(r3,r2);
//   printf("intersection(r3,r2): ");
//   printRectangle(i);
  
//   i = intersection(r3,r3);
//   printf("intersection(r3,r3): ");
//   printRectangle(i);

//   i = intersection(r3,r4);
//   printf("intersection(r3,r4): ");
//   printRectangle(i);

//   //test everything with r4
//   i = intersection(r4,r1);
//   printf("intersection(r4,r1): ");
//   printRectangle(i);

//   i = intersection(r4,r2);
//   printf("intersection(r4,r2): ");
//   printRectangle(i);
  
//   i = intersection(r4,r3);
//   printf("intersection(r4,r3): ");
//   printRectangle(i);

//   i = intersection(r4,r4);
//   printf("intersection(r4,r4): ");
//   printRectangle(i);

//     return EXIT_SUCCESS;
// }

