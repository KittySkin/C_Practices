#include "BaseCar.h"
#include <stdlib.h>

BaseCar* BaseCar_Constructor() {
    BaseCar* newCarInstance = malloc(sizeof(BaseCar));

    newCarInstance->speed.xAxis = 0;
    newCarInstance->speed.yAxis = 0;
    newCarInstance->speed.zAxis = 0;

    newCarInstance->rotation.xAxis = 0;
    newCarInstance->rotation.yAxis = 0;
    newCarInstance->rotation.zAxis = 0;

    newCarInstance->position.xAxis = 0;
    newCarInstance->position.yAxis = 0;
    newCarInstance->position.zAxis = 0;

    newCarInstance->UpdateSpeed = UpdateSpeed;
    newCarInstance->UpdateRotation = UpdateRotation;
    newCarInstance->UpdatePosition = UpdatePosition;

    return newCarInstance;
}

void BaseCar_Destroy(struct s_BaseCar* this) {
    free(this);
}

void UpdateSpeed(struct s_BaseCar* this, AccelerationVector speedInput) {
    this->speed.xAxis += speedInput.xAxis;
    this->speed.yAxis += speedInput.yAxis;
    this->speed.zAxis += speedInput.zAxis;
}

void UpdateRotation(struct s_BaseCar* this, RotationVector rotationInput) {
    this->rotation.xAxis += rotationInput.xAxis;
    this->rotation.yAxis += rotationInput.yAxis;
    this->rotation.zAxis += rotationInput.zAxis;
}

void UpdatePosition(struct s_BaseCar* this) {
    this->position.xAxis += this->speed.xAxis;
    this->position.yAxis += this->speed.yAxis;
    this->position.zAxis += this->speed.zAxis;
}
