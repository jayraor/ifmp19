/*
 * knights.cpp: Jayant Raul Rao
 */

#include <iostream>
#include <vector>

using namespace std;

// define size of board
const int size = 5;

// all possible 8 movements for a given positions
vector<int> row {2,1,-1,-2,-2,-1,1,2,2};
vector<int> col {1,2,2,1,-1,-2,-2,-1,1};

// check if (x,y) is valid chess board coordinates
bool isValid(int x, int y)
{
  // board coordinates are valid
  if (x < 0 || y < 0 || x >= size || y >= size)
  {
    return false;
  }

  return true;
}

void solve(vector<vector <int> > visited, int x, int y, int pos)
{
  visited[x][y] = pos;
  if (pos >= size*size)
  {
    for (int i = 0; i < size; i++)
    {
      for (int j = 0; j < size; j++)
      {
        cout<<visited[i][j]<<" ";
      }
      cout<<endl;
    }
    visited[x][y] = 0;
    return;
  }

  // check for all 8 possible movements
  for (int k = 0; k < 8; k++)
  {
    int newX = x + row[k];
    int newY = y + col[k];
    if (isValid(newX, newY) && !visited[newX][newY])
    {
      solve(visited, newX, newY, pos + 1);
    }
  }

  // backtrack from current square and remove it from current path (I.e failed)
  visited[x][y] = 0;
}

int main(int argc, char const *argv[])
{
  vector<vector<int> > visited(size, vector<int>(size, 0));
  int pos = 1;
  solve(visited, 0, 0, pos);
  return 0;
}
