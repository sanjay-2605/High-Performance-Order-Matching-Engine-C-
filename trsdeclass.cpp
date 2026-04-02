#ifndef TRADE_H
#define TRADE_H

class Trade {
public:
    int buyOrderId;
    int sellOrderId;
    double price;
    int quantity;

    Trade(int bId, int sId, double p, int q)
        : buyOrderId(bId), sellOrderId(sId), price(p), quantity(q) {}
};

#endif
