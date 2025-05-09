#pragma once
#include "source2sdk/server/CCitadelModifierVData.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x670
    // Has VTable
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CCitadel_Modifier_PullDownToGroundVData : public server::CCitadelModifierVData
    {
    public:
        float m_flMaxHeight; // 0x660        
        float m_flPullDownSpeedMin; // 0x664        
        float m_flPullDownSpeedScale; // 0x668        
        float m_flFullPullDistance; // 0x66c        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Modifier_PullDownToGroundVData because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Modifier_PullDownToGroundVData) == 0x670);
};
