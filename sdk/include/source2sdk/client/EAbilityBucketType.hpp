#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Enumerator count: 5
    // Alignment: 4
    // Size: 0x4
    enum class EAbilityBucketType : std::uint32_t
    {
        EAbilityBucketInnate = 0xffffffff,
        EAbilityBucketWeapon = 0x0,
        EAbilityBucketVitality = 0x1,
        EAbilityBucketSpirit = 0x2,
        EAbilityBucketCount = 0x3,
    };
};
