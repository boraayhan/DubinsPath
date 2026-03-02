#include "dubins.h"

DubinsPath::DubinsPath(Vector3 i, Vector3 f, Vector3 v, double tr) {
    start = i;
    end = f;
    initVelocity = v;
    turningRadius = tr;
    timeDelay = 0.0;
}

DubinsPath::DubinsPath(Vector3 i, Vector3 f, Vector3 v, double tr, double delay) {
    startPoint = i + v * delay; //TODO: Integrate velocity to avoid assuming constant velocity
    endPoint = f;
    initVelocity = v;
    turningRadius = tr;
    timeDelay = delay;
    Vector3 pL;
    Vector3 pS;
    Vector3 test;
}