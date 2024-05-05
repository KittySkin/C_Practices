#ifndef BASECAR_H
#define BASECAR_H

typedef struct s_AccelerationVector {
    float xAxis;
    float yAxis;
    float zAxis;
} AccelerationVector;

typedef struct s_RotationVector {
    float xAxis;
    float yAxis;
    float zAxis;
} RotationVector;

typedef struct s_PositionVector {
    float xAxis;
    float yAxis;
    float zAxis;
} PositionVector;

typedef struct s_BaseCar {
    AccelerationVector speed;
    RotationVector rotation;
    PositionVector position;

    void (*UpdateSpeed)(struct s_BaseCar* this, AccelerationVector speedInput);

    void (*UpdateRotation)(struct s_BaseCar* this, RotationVector rotationInput);

    void (*UpdatePosition)(struct s_BaseCar* this);
} BaseCar;

BaseCar* BaseCar_Constructor();

void BaseCar_Destroy(struct s_BaseCar* this);

void UpdateSpeed(struct s_BaseCar* this, AccelerationVector speedInput);

void UpdateRotation(struct s_BaseCar* this, RotationVector rotationInput);

void UpdatePosition(struct s_BaseCar* this);

#endif //BASECAR_H
