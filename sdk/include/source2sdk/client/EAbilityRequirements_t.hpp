#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Enumerator count: 4
    // Alignment: 2
    // Size: 0x2
    enum class EAbilityRequirements_t : std::uint16_t
    {
        // MPropertyFriendlyName "None"
        ERequirementNone = 0x0,
        // MPropertyFriendlyName "Requires Charges Ability"
        ERequirementChargedAbility = 0x1,
        // MPropertyFriendlyName "Requires Channelled Abillity"
        ERequirementChannelledAbility = 0x2,
        // MPropertyFriendlyName "Requires Non-Charges ULT"
        ERequirementNonChargedULT = 0x4,
    };
};
