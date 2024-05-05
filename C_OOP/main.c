#include <stdio.h>
#include "classes/BaseCar.h"

int main(void) {
    BaseCar* CarInstance = BaseCar_Constructor();
    printf("Car Position is: %f, %f, %f \n", CarInstance->position.xAxis, CarInstance->position.yAxis,
           CarInstance->position.zAxis);

    const AccelerationVector acceleration = {5, 0, 0};
    printf("Car Speed before acceleration is: %f, %f, %f \n", CarInstance->speed.xAxis, CarInstance->speed.yAxis,
           CarInstance->speed.zAxis);

    CarInstance->UpdateSpeed(CarInstance, acceleration);
    printf("Car Speed after acceleration is: %f, %f, %f \n", CarInstance->speed.xAxis, CarInstance->speed.yAxis,
           CarInstance->speed.zAxis);

    BaseCar_Destroy(CarInstance);

    return 0;
}
