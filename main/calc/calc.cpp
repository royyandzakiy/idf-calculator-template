#include "calc.h"

Calculator<int> * intCalc;

template <typename T>
T Calculator<T>::add() { 
    return num1 + num2; 
}

template <typename T>
void Calculator<T>::print() {

}