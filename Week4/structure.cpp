#include <stdio.h>
#include <string>

using namespace std;

// point 2D => (int x, int y)
struct Point {
    int x, y;
};

struct Movie {
    string name;
    string director;
    float rating;
};

int main() {
    Point p1 = {1, 2};
    printf("point1: (%d, %d)\n", p1.x, p1.y);
    
    p1.x += 10;
    p1.y = (p1.x + p1.y) / 2;

    printf("point1: (%d, %d)\n", p1.x, p1.y);

    Movie movies[] = {
        {"The Matrix", "ABC", 4.9},
        {"Green Miles", "ODE", 5.0},
        {"Lion King", "XYZ", 3.5},
    };

    int size = sizeof(movies) / sizeof(movies[0]);
    printf("Movies Size: %d\n", size);
    for (int i=0; i<size; i++) {
        printf("==========\n");    
        printf("Movie Name: %s\nDirector: %s\nRating: %.1f\n",
        movies[i].name.c_str(),
        movies[i].director.c_str(),
        movies[i].rating);
    }

    // Foreach: Alternative loop
    int counter = 1;
    for (auto m : movies) {
        printf("==========\n");    
        printf("%d. Movie Name: %s\nDirector: %s\nRating: %.1f\n",
        counter,
        m.name.c_str(),
        m.director.c_str(),
        m.rating);
        counter++;
    }

    int data[] = {1, 2, 3, 4, 5};
    int s = sizeof(data) / sizeof(data[0]);
    int last = 0;
    printf("{");
    for (auto d : data) {
        int pow = d*d;

        if (last == s - 1)
            printf("%d}\n", pow);            
        else 
            printf("%d, ", pow);
        
        last++;
    }
    return 0;
}