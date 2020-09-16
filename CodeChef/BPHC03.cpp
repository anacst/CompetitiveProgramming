#include <iostream>
#include <string.h>
using namespace std;

#define MAX 1003

int count, n, maze[MAX][MAX];
bool visited[MAX][MAX]; 

bool valid(int x, int y) {
	return (x >= 0 && x < n && y >= 0 && y < n && maze[x][y] == 0 && !visited[x][y]);
}

void find_path(int x, int y) {
	// Base case
	if (x == n-1 && y == n-1) {
		count++;
		return;
	}

	visited[x][y] = true;
	
	
	// Check if rat can go down
	if (valid(x+1, y)) {
		find_path(x+1, y);		
	}

	// Check if rat can go left
	if (valid(x, y+1)) {
		find_path(x, y+1);
	}

	// Check if rat can go up
	if (valid(x-1, y)) {
		find_path(x-1, y);
	}

	// Check if rat can go right
	if (valid(x, y-1)) {
		find_path(x, y-1);
	}

	visited[x][y] = false;
}

int main(int argc, char const *argv[]) {
	cin >> n;

	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
			cin >> maze[i][j];

	find_path(0, 0);
	cout << count;

	return 0;
}
