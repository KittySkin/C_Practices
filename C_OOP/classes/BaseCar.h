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
    struct BaseCar (*Constructor)();
    void* (*Destroy)(struct BaseCar *this);
    void* (*UpdateSpeed)(struct BaseCar *this, AccelerationVector speedInput);
    void* (*UpdateRotation)(struct BaseCar *this, RotationVector rotationInput);
    void* (*UpdatePosition)(struct BaseCar *this);
} BaseCar;

BaseCar Constructor();
void Destroy(BaseCar *this);
void UpdateSpeed(BaseCar *this, AccelerationVector speedInput);
void UpdateRotation(BaseCar *this, RotationVector rotationInput);
void UpdatePosition(BaseCar *this);

#endif //BASECAR_H
