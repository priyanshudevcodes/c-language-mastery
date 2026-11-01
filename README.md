# C Language Mastery

My journey learning C programming from scratch, starting in my
first semester of B.Tech CSE (Robotics & AI).

## Programs

| No. | Program | Concepts |
|-----|---------|----------|
| 01 | [Area of a Circle](01_area_of_circle.c) | variables, float, scanf, & |

## How to run

    gcc programs/01_area_of_circle.c -o area
    ./area

## Lessons learned

- **01:** `scanf` needs `&` before the variable, because it must know
  the variable's address to store the input. Without it, the program
  prints a garbage value.
