#include "calc/calc.h"

extern "C" void app_main(void) {
    intCalc = new Calculator<int>(2, 1);
    Calculator<float> floatCalc(2.4, 1.2);
    intCalc->do_nothing();

    cout << "Int results:" << endl;
    intCalc->displayResult();

    cout << endl
         << "Float results:" << endl;
    floatCalc.displayResult();
}