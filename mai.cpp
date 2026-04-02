#include "MatchingEngine.h"
#include <ctime>

int main() {
    MatchingEngine engine;

    Order* o1 = new Order(1, BUY, 100.0, 10, time(0));
    Order* o2 = new Order(2, SELL, 99.0, 5, time(0));
    Order* o3 = new Order(3, SELL, 100.0, 5, time(0));

    engine.addOrder(o1);
    engine.addOrder(o2);
    engine.addOrder(o3);

    return 0;
}
