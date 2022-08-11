#include<iostream>
#include<vector>

using namespace std;


int main() {

    int n = 0, m;
    cin >> n >> m;
    vector<vector<char>> snake(n, vector<char>(m, '#'));
    bool start = true, visited = false;
    for (int i = 1; i < snake.size(); i += 2) {
        for (int j = 0; j < m; j++) {
              snake[i][j] = '.';
        }
    }
    for (int row = 1; row < n; row += 2) {
        if (start) {
            snake[row][0] = '#';
            start = false;
        }
        else if (!start) {
            snake[row][m-1] = '#';
            start = true;
        }
    }
    for (int k = 0; k < n; k++) {
        for (int col = 0; col < m; col++) {
            cout << snake[k][col];
        }
        cout << endl;
    }

}

