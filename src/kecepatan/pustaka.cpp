#include "header.h"

float konversiSekonKeJam (float x)
{
    float hasil = x / 3600;
    return hasil;
}

float konversiSekonKeMenit (float x)
{
    float hasil = x / 60;
    return hasil;
}

float cariKecepatan(float jarak, float waktu)
{
    float hasil;

    hasil = jarak / waktu;
    return hasil;
}