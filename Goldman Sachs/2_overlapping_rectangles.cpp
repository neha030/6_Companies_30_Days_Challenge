/* Question
Overlapping rectangles
*/

#include <bits/stdc++.h>
using namespace std;

struct Point {
    int x, y;
};

bool doOverlap(Point l1, Point r1, Point l2, Point r2)
{

}

int main()
{
    Point l1 = { 0, 10 }, r1 = { 10, 0 };
    Point l2 = { 5, 5 }, r2 = { 15, 0 };
    if (doOverlap(l1, r1, l2, r2))
        printf("Rectangles Overlap");
    else
        printf("Rectangles Don't Overlap");
    return 0;
}