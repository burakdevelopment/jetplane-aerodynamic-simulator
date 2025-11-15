//wrote by Burak Akpınar//
//This program calculates various aerodynamic properties of a jet plane based on user input//
//November 16 2025//


#include <iostream>
#include <stdio.h>
#include <cmath>

float DynamicPressure(float planespeed) {
    const float airDensity = 0.8; //at troposphere
    auto calculate = 0.5 * airDensity * planespeed * planespeed;
    std::cout << "The Dynamic Pressure is: " << calculate << " Pascal" << std::endl;
    return calculate;
    
}

float CalculateRadian(float angleofattack) {
    const float pi = 3.14159;
    auto radian = angleofattack * (pi / 180);
    return radian;
    
}

float liftCoefficient(float angleofattack) {
    auto radian = CalculateRadian(angleofattack);
    auto liftCoeff = 2 * 3.14159 * radian;
    std::cout << "The Lift Coefficient is: " << liftCoeff << std::endl;
    return liftCoeff;
}

float liftForce(float planespeed, float angleofattack, float wingarea) {
    auto dynamicPressure = DynamicPressure(planespeed);
    auto liftCoeff = liftCoefficient(angleofattack);
    auto liftForce = dynamicPressure * wingarea * liftCoeff;
    std::cout << "The Lift Force is: " << liftForce << " Newton" << std::endl;
    return liftForce;
}

float dragcoefficient(float planespeed, float wingarea, float angleofattack, float liftCoeff) {
    const float parasiticdragCoefficient = 0.020; //typical for jet planes
    const float inducedDragFactor = 3.14159 * angleofattack * 0.75; //assuming an efficiency factor of 0.75
    auto angleOfAttack = liftCoefficient(angleofattack);
    auto dragForce = parasiticdragCoefficient + inducedDragFactor * liftCoeff * liftCoeff;
    std::cout << "The Parasitic Drag Force is: " << dragForce << " Newton" << std::endl;
    return dragForce;
}

float dragForce(float planespeed, float wingarea, float angleofattack) {
    auto dynamicPressure = DynamicPressure(planespeed);
    auto liftCoeff = liftCoefficient(angleofattack);
    auto dragCoeff = dragcoefficient(planespeed, wingarea, angleofattack, liftCoeff);
    auto dragForce = dynamicPressure * wingarea * dragCoeff;
    std::cout << "The Drag Force is: " << dragForce << " Newton" << std::endl;
    return dragForce;
}

float thrust(float massairfuelflowrate, float exhaustexitspeed, float flightspeed, float exhaustexitpressure, float nozzleexitarea, const float atmosphericpressure) {
    auto thrust = (massairfuelflowrate * (exhaustexitspeed - flightspeed)) + ((exhaustexitpressure - atmosphericpressure) * nozzleexitarea);
    std::cout << "The Thrust is: " << thrust << " Newton" << std::endl;
    return thrust;
}

float aerodynamicEfficiency(float liftForce, float dragForce) {
    auto efficiency = liftForce / dragForce;
    std::cout << "The Aerodynamic Efficiency (L/D Ratio) is: " << efficiency << std::endl;
    return efficiency;
}

float totalAerodynamicForce(float liftForce, float dragForce) {
    auto totalForce = liftForce * liftForce + dragForce * dragForce;
    auto totalforceSqrt = sqrt(totalForce);
    std::cout << "The Total Aerodynamic Force is: " << totalForce << " Newton" << std::endl;
    return totalForce;
}

int main() {
    float planespeed;
    float angleofattack;
    float wingarea;
    float massairfuelflowrate;
    float exhaustexitspeed;
    float flightspeed;
    float exhaustexitpressure;
    const float atmosphericpressure = 101325;
    float nozzleexitarea;
    //calculate the jet plane's aspect ratio
    //calculate the aerodynamic force
    //calculate the drag, lift, and thrust
    //calculate the aerodynamic efficiency
    std::cout << "Welcome to the Jet Plane Calculator!" << std::endl;
    std::cout << "We need some information to calculate the full simulations!" << std::endl;
    std::cout << "Jet Plane's Speed: " << std::endl;
    std::cin >> planespeed;
    DynamicPressure(planespeed);
    std::cout << "Angle of Attack? α" << std::endl;
    std::cin >> angleofattack;
    std::cout << "Wing area? m²" << std::endl;
    std::cin >> wingarea;
    std::cout << "Mass air + fuel flow rate? m" << std::endl;
    std::cin >> massairfuelflowrate;
    std::cout << "Exhaust exit speed? m/s" << std::endl;
    std::cin >> exhaustexitspeed;
    std::cout << "Flight speed? m/s" << std::endl;
    std::cin >> flightspeed;
    std::cout << "Exhaust exit pressure? Pascal" << std::endl;
    std::cin >> exhaustexitpressure;
    std::cout << "Nozzle exit area? m²" << std::endl;
    std::cin >> nozzleexitarea;
    liftForce(planespeed, angleofattack, wingarea);
    dragForce(planespeed, wingarea, angleofattack);
    thrust(massairfuelflowrate, exhaustexitspeed, flightspeed, exhaustexitpressure, nozzleexitarea, atmosphericpressure);
    aerodynamicEfficiency(liftForce(planespeed, angleofattack, wingarea), dragForce(planespeed, wingarea, angleofattack));
    totalAerodynamicForce(liftForce(planespeed, angleofattack, wingarea), dragForce(planespeed, wingarea, angleofattack));
    return 0;

}