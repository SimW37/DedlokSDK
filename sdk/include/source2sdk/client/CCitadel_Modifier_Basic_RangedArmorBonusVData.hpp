#pragma once
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
    // Size: 0x680
    // Has VTable
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CCitadel_Modifier_Basic_RangedArmorBonusVData : public client::CCitadelModifierVData
    {
    public:
        float m_flBulletResistancePctMin; // 0x660        
        float m_flBulletResistancePctMax; // 0x664        
        float m_flTechResistancePctMin; // 0x668        
        float m_flTechResistancePctMax; // 0x66c        
        float m_flRangeMin; // 0x670        
        float m_flRangeMax; // 0x674        
        float m_flInvulnRange; // 0x678        
        [[maybe_unused]] std::uint8_t pad_0x67c[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Modifier_Basic_RangedArmorBonusVData because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Modifier_Basic_RangedArmorBonusVData) == 0x680);
};
