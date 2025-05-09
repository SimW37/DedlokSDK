#pragma once
#include "source2sdk/client/BuildupMode_t.hpp"
#include "source2sdk/client/CCitadelModifierVData.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x678
    // Has VTable
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CCitadel_Modifier_Base_BuildupVData : public client::CCitadelModifierVData
    {
    public:
        bool m_bUseBaseWeaponCycleTimeForDelay; // 0x660        
        [[maybe_unused]] std::uint8_t pad_0x661[0x3]; // 0x661
        float m_flCycleTimeDelayAdd; // 0x664        
        float m_flBuildUpDecayDelay; // 0x668        
        client::BuildupMode_t m_eBuildupMode; // 0x66c        
        // metadata: MPropertyDescription "When true, effectiveness (distance falloff) will be applied to the buildup."
        bool m_bBuildupAffectedByEffectiveness; // 0x670        
        // metadata: MPropertyDescription "When true, the averaged effectiveness of the build up modifier will be passed to the fill modifier"
        bool m_bPassBuildupEffectivenessToFillModifier; // 0x671        
        [[maybe_unused]] std::uint8_t pad_0x672[0x6];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Modifier_Base_BuildupVData because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Modifier_Base_BuildupVData) == 0x678);
};
