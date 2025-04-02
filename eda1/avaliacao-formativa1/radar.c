#include <stdio.h>

double calculaVelocidadeMedia(int tA, int tB, double distancia) {
    double dt = (double)(tB - tA) / 3600;
    return distancia / dt;
}

int levouMulta(int tA, int tB, double distancia, double velocidadeMaxima) {
    double vel_media = calculaVelocidadeMedia(tA, tB, distancia);
    if (vel_media > velocidadeMaxima) {
        return 1;
    }

    return 0;
}
