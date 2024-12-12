// Nama : Khairul Alam
// Nim : D121241059
#include <stdio.h>
#include <math.h>

int main() {
    int data[8][7] = {
        {1, 1, 1, 1, 1, 1, 0},
        {0, 1, 1, 0, 0, 0, 0},
        {1, 1, 0, 1, 1, 0, 1},
        {1, 1, 1, 1, 0, 0, 1},
        {0, 1, 1, 0, 0, 1, 1},
        {1, 0, 1, 1, 0, 1, 1},
        {1, 0, 1, 1, 1, 1, 1},
        {1, 1, 1, 0, 0, 0, 0}
    };

    int x, y, z, number; 

    // Input nilai x, y, dan z
    printf("Input value x (0 or 1): ");
    scanf("%d", &x);
    printf("Input value y (0 or 1): ");
    scanf("%d", &y);
    printf("Input value z (0 or 1): ");
    scanf("%d", &z);

    // Validasi input x, y, dan z
    if ((x != 0 && x != 1) || (y != 0 && y != 1) || (z != 0 && z != 1)) {
        printf("Invalid input. Please input 0 or 1 for x, y, and z.\n");
        return 1;
    }

    // Menghitung nilai number berdasarkan x, y, z
    number = (z * 1) + (y * 2) + (x * 4);

    // Validasi nilai number
    if (number < 0 || number > 9) {
        printf("Invalid number calculated. Please ensure inputs are correct.\n");
        return 1;
    }

    // Menampilkan data yang sesuai
    printf("Segments for number %d:\n", number);
    printf("a = %d\n", data[number][0]);
    printf("b = %d\n", data[number][1]);
    printf("c = %d\n", data[number][2]);
    printf("d = %d\n", data[number][3]);
    printf("e = %d\n", data[number][4]);
    printf("f = %d\n", data[number][5]);
    printf("g = %d\n", data[number][6]);

    return 0;
}
