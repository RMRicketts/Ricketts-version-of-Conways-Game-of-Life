/*
 * Robert Ricketts
 * coordinate.c
 */

#include "coordinate.h"

#include <stdio.h>
#include <stdlib.h>


/*
 * Input:
 *      int x, an x-coordinate
 *      int y, a y-coordinate
 * Output:
 *      A Coordinate
 * Summary:
 *      Initializes a Coordinate to (x,y)
 */
Coordinate ConstructCoordinate(int x, int y)
{
    Coordinate C;
    C.x = x;
    C.y = y;

    return C;
}

/*
 * Input:
 *      Coordinate C1, a coordinate
 *      Coordinate C2, another coordinate
 * Output:
 *      true if C2 is a neighbor of C1, false otherwise
 * Summary:
 *      Checks if C1 and C2 are neighbors, that is, if they
 *      are in adjacent squares (including squares that are
 *      diagonally adjacent) and not equal
 */
int IsNeighbor(Coordinate C1, Coordinate C2)
{

    if (C1.x == C2.x && C1.y == C2.y) {
	return 0;
    }
    if (abs(C1.x - C2.x) <= 1 && abs(C1.y - C2.y) <= 1) {
	return 1;
    } else {
	return 0;
    }

}

/*
 * Input:
 *      Coordinate* C, a pointer to a Coordinate
 * Summary:
 *      Swaps the entries of the Coordinate pointed to by C
 */
void SwapCoordinates(Coordinate * C)
{
    int A, B;
    A = C->x;
    B = C->y;

    C->y = A;
    C->x = B;
}
