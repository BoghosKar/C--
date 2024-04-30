#ifndef COW_H
#define COW_H

#include "animal.h"

class Cow : public Animal
{
public:
    Cow(const std::string& voice, int age, int weight);
    void stats() const override;
    ~Cow() override;
};

#endif // COW_H
