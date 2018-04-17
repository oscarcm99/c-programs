
#include <stdio.h>
#include <stdlib.h>
struct Coord{
    double x;
    double y;
};
int main(){
    struct Coord snake = {4., 1.2};
    snake.x = 3.7;
    return EXIT_SUCCESS;
}
