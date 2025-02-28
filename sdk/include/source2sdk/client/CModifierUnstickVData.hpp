#pragma once
#include "source2sdk/client/CCitadel_Modifier_StunnedVData.hpp"
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
    // Size: 0x758
    // Has VTable
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CModifierUnstickVData : public client::CCitadel_Modifier_StunnedVData
    {
    public:
        // metadata: MPropertyGroupName "Sounds"
        CSoundEventName m_sSuccessSound; // 0x738        
        // metadata: MPropertyGroupName "Sounds"
        CSoundEventName m_sFailureSound; // 0x748        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CModifierUnstickVData because it is not a standard-layout class
    static_assert(sizeof(CModifierUnstickVData) == 0x758);
};
