#include <stdio.h>
#include <stdbool.h>

#define ROW 5
#define COL 5

// Structure to represent a cell in the grid
struct Cell {
    int x, y, distance;
};

// Function to check if a cell is valid in the grid
bool isValid(int row, int col) {
    return (row >= 0) && (row < ROW) && (col >= 0) && (col < COL);
}

// Function to find the shortest path in a grid using BFS
int shortestPath(int grid[ROW][COL], int startX, int startY, int endX, int endY) {
    // Arrays to represent 4 possible movements from a cell
    int rowNum[] = {-1, 0, 0, 1};
    int colNum[] = {0, -1, 1, 0};

    // Create a queue for BFS
    struct Cell queue[ROW * COL];

    // Mark all cells as not visited
    bool visited[ROW][COL];
    for (int i = 0; i < ROW; i++) {
        for (int j = 0; j < COL; j++) {
            visited[i][j] = false;
        }
    }

    // Mark the starting cell as visited and enqueue it
    visited[startX][startY] = true;
    struct Cell start = {startX, startY, 0};
    int front = 0, rear = 0;
    queue[rear++] = start;

    // BFS
    while (front < rear) {
        struct Cell current = queue[front++];

        // If we have reached the destination cell, return its distance
        if (current.x == endX && current.y == endY)
            return current.distance;

        // Otherwise, enqueue its adjacent cells
        for (int i = 0; i < 4; i++) {
            int row = current.x + rowNum[i];
            int col = current.y + colNum[i];

            // If adjacent cell is valid, has path and not visited yet, enqueue it.
            if (isValid(row, col) && grid[row][col] && !visited[row][col]) {
                visited[row][col] = true;
                struct Cell adjacentCell = {row, col, current.distance + 1};
                queue[rear++] = adjacentCell;
            }
        }
    }

    // If destination is unreachable
    return -1;
}

int main() {
    int grid[ROW][COL] = {
        {1, 0, 1, 1, 1},
        {1, 1, 1, 0, 1},
        {0, 0, 0, 1, 1},
        {1, 1, 0, 1, 0},
        {1, 0, 1, 1, 1}
    };
    int startX = 0, startY = 0;
    int endX = 3, endY = 3;

    int shortestDistance = shortestPath(grid, startX, startY, endX, endY);

    if (shortestDistance != -1)
        printf("Shortest path distance from (%d, %d) to (%d, %d) is: %d\n", startX, startY, endX, endY, shortestDistance);
    else
        printf("Destination is unreachable from (%d, %d) to (%d, %d)\n", startX, startY, endX, endY);

    return 0;
}
