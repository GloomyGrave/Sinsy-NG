#ifndef SINSY_NG_SINSYNG_H
#define SINSY_NG_SINSYNG_H

#include <iostream>

class SinsyNG {
public:
    class Informations {
    public:
        explicit Informations(int key);
    private:
        static void usage();
    };

private:
    const std::string DEFAULT_VOICE = "Andy";
    const std::string DEFAULT_LANG = "ja";
};

#endif //SINSY_NG_SINSYNG_H
