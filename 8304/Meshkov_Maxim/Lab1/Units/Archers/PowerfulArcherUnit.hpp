#pragma once

#include "ArcherUnit.hpp"

class PowerfulArcherUnit : public ArcherUnit {
public:
    PowerfulArcherUnit() {
        m_hit = 8;
        m_attackRange = 6;
    }

    std::string getName() const override {
        return "Powerful Archer";
    }

    std::shared_ptr<Unit> createNewOfSameType() const override;
    std::shared_ptr<Unit> createCopy() const override;
};
