#include<iostream>
#include<vector>

using namespace std;


bool check_row(vector<char>& arr) {
    for (char c : arr)
        if (c == 'S')
            return false;

    return true;
}
int count_row(vector<char>& arr) {
    int res = 0;
    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] == '#')
            continue;
        else {
            res++;
            arr[i] = '#';
        }
            
    }
    return res;
}


bool check_col(vector<vector<char>>& arr, int col) {
    for (int i = 0; i < arr.size(); i++) {
        if (arr[i][col] == 'S')
            return false;
    }
    return true;
}

int count_col(vector<vector<char>>& arr, int col) {
    int res = 0;
    for (int i = 0; i < arr.size(); i++) {
        if (arr[i][col] == '#')
            continue;
        else {
            res++;
            arr[i][col] = '#';
        }
    }
    return res;
}


int main() {
    int row, col;
    cin >> row >> col;
    vector<vector<char>> cake(row, vector<char>(col, '.'));
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            cin >> cake[i][j];
        }
    }
    int res = 0;
    for (int r = 0; r < row; r++) {
        for (int c = 0; c < col; c++) {
            if (check_row(cake[r])) {
                res += count_row(cake[r]);
            }
            if (check_col(cake, c)) {
                res += count_col(cake, c);
            }

        }

    }
    cout << res << endl;

}