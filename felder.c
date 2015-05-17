/* Arbeiten mit Feldern - MRT1, LUR (c) 2007 */
#include <stdio.h>
int main() {
    int d; 				// Eine Ganzzahl
    int e[1]; 			// Ein Feld mit einer Ganzzahl
    int e_u[4]; 			// ?,?,?,?
    int e_i1[4] = { 0 }; 	// 0,0,0,0
    int e_i2[4] = { 5 }; 	// 5,0,0,0
    int e_i3[4] = { 1,2,3,4 }; // 1,2,3,4

    int i;

	// Zuweisung
	d = 1;
    e[0] = 1;
    printf("d=%d,e[0]=%d\n", d, e[0]);

	// Achtung! C checkt nicht, ob die Grenzen stimmen!
    e[1] = 2;
    d = e[2];
    printf("d=%d,e[0]=%d\n", d, e[0]);

    // Dynamische initialisierung
    for(i=0; i<4; i++) {
		e_u[i]=i;
        printf("e_u[%d]=%d\n", i, e_u[i]);
    }

    return 0;
}
