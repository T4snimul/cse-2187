#include <iostream>
#include <ncurses.h>
#include <vector>
#include <chrono>
#include <thread>
#include <cstdlib>

using namespace std;

bool gameOver;

int width = 30;
int height = 20;

int foodX, foodY;
int score;

int speed = 300; // ms per move

enum Direction
{
  STOP = 0,
  LEFT,
  RIGHT,
  UP,
  DOWN
};
Direction dir;

struct Point
{
  int x, y;
};

vector<Point> snake;

void spawnFood()
{
  foodX = rand() % width;
  foodY = rand() % height;
}

void Setup()
{
  initscr();
  noecho();
  cbreak();
  curs_set(0);
  nodelay(stdscr, TRUE);
  keypad(stdscr, TRUE);

  gameOver = false;
  dir = STOP;

  snake.clear();
  snake.push_back({width / 2, height / 2});

  spawnFood();
  score = 0;
}

void Draw()
{
  erase();

  // top border
  for (int i = 0; i < width + 2; i++)
    printw("#");
  printw("\n");

  for (int i = 0; i < height; i++)
  {
    for (int j = 0; j < width; j++)
    {

      if (j == 0)
        printw("#");

      bool printed = false;

      // snake
      for (size_t k = 0; k < snake.size(); k++)
      {
        if (snake[k].x == j && snake[k].y == i)
        {
          printw("O");
          printed = true;
          break;
        }
      }

      // food
      if (!printed)
      {
        if (j == foodX && i == foodY)
          printw("*");
        else
          printw(" ");
      }

      if (j == width - 1)
        printw("#");
    }
    printw("\n");
  }

  // bottom border
  for (int i = 0; i < width + 2; i++)
    printw("#");
  printw("\n");

  printw("Score: %d\n", score);
  printw("Controls: h j k l | x = quit\n");

  refresh();
}

void Input()
{
  int ch = getch();

  switch (ch)
  {
  case 'h':
    dir = LEFT;
    break;
  case 'l':
    dir = RIGHT;
    break;
  case 'k':
    dir = UP;
    break;
  case 'j':
    dir = DOWN;
    break;
  case 'x':
    gameOver = true;
    break;
  }
}

void Logic()
{
  if (dir == STOP)
    return;

  Point head = snake.front();

  switch (dir)
  {
  case LEFT:
    head.x--;
    break;
  case RIGHT:
    head.x++;
    break;
  case UP:
    head.y--;
    break;
  case DOWN:
    head.y++;
    break;
  default:
    break;
  }

  // collision with wall
  if (head.x < 0 || head.x >= width || head.y < 0 || head.y >= height)
  {
    gameOver = true;
    return;
  }

  // collision with self
  for (auto &s : snake)
  {
    if (s.x == head.x && s.y == head.y)
    {
      gameOver = true;
      return;
    }
  }

  snake.insert(snake.begin(), head);

  // food check
  if (head.x == foodX && head.y == foodY)
  {
    score++;
    spawnFood();

    // speed up slightly (optional)
    if (speed > 60)
      speed -= 2;
  }
  else
  {
    snake.pop_back();
  }
}

int main()
{
  Setup();

  while (!gameOver)
  {
    auto start = chrono::steady_clock::now();

    Input();
    Logic();
    Draw();

    auto end = chrono::steady_clock::now();
    auto elapsed = chrono::duration_cast<chrono::milliseconds>(end - start).count();

    if (elapsed < speed)
      this_thread::sleep_for(chrono::milliseconds(speed - elapsed));
  }

  endwin();

  cout << "\nGame Over! Score: " << score << endl;

  return 0;
}
