#include "../incl/extendedStd/bigint.hh"
#include <iostream>

class collatz {
private:
    bigint init;
public:
    collatz(std::string s){
        init = new bigint(s);
    }
    collatz(long long int n) {
        init = new bigint(n);
    }
    collatz(int n = 0) {
        init = new bigint(n);
    }
    ~collatz(){}

    bigint run() {
        bigint result = init;
        for (bigint i = new bigint(0); ; i++) {
            if (result == 1) return i;

            if (result % 2 == 0) result /= 2;
            else result = result * 3 + 1;
        }
    }
}

bigint test() {
    // it sets too big number at 1e50
    collatz tester = new collatz(std::to_string('1' + '0' * 50 + '\0'));
    return tester.run();
}