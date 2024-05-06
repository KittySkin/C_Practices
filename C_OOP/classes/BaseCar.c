#include "BaseCar.h"
#include <stdlib.h>

BaseCar* BaseCar_Constructor() {
    BaseCar* newCarInstance = malloc(sizeof(BaseCar));

    AccelerationVector const speed = {0, 0, 0};
    RotationVector const rotation = {0, 0, 0};
    PositionVector const position = {0, 0, 0};

    newCarInstance->speed = speed;
    newCarInstance->rotation = rotation;
    newCarInstance->position = position;

    newCarInstance->UpdateSpeed = UpdateSpeed;
    newCarInstance->UpdateRotation = UpdateRotation;
    newCarInstance->UpdatePosition = UpdatePosition;

    return newCarInstance;
}

void BaseCar_Destroy(struct s_BaseCar* this) {
    free(this);
}

void UpdateSpeed(struct s_BaseCar* this, const AccelerationVector speedInput) {
    this->speed.xAxis += speedInput.xAxis;
    this->speed.yAxis += speedInput.yAxis;
    this->speed.zAxis += speedInput.zAxis;
}

void UpdateRotation(struct s_BaseCar* this, const RotationVector rotationInput) {
    this->rotation.xAxis += rotationInput.xAxis;
    this->rotation.yAxis += rotationInput.yAxis;
    this->rotation.zAxis += rotationInput.zAxis;
}

void UpdatePosition(struct s_BaseCar* this) {
    this->position.xAxis += this->speed.xAxis;
    this->position.yAxis += this->speed.yAxis;
    this->position.zAxis += this->speed.zAxis;
}
