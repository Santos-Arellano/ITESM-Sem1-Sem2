#include "MyException.h"

MyException::MyException(string mensaje) {
    this->mensaje = mensaje;
}

string MyException::what() {
    return this->mensaje;
}
