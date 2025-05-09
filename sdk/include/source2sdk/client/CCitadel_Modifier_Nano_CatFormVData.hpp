#pragma once
#include "source2sdk/client/CCitadelModifierVData.hpp"
#include "source2sdk/client/ModelChange_t.hpp"
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
    // Size: 0x770
    // Has VTable
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CCitadel_Modifier_Nano_CatFormVData : public client::CCitadelModifierVData
    {
    public:
        client::ModelChange_t m_ModelChange; // 0x660        
        float m_flModelScale; // 0x748        
        [[maybe_unused]] std::uint8_t pad_0x74c[0x4]; // 0x74c
        // metadata: MPropertyStartGroup "Sounds"
        CSoundEventName m_ExplodeSound; // 0x750        
        CSoundEventName m_ImpactSound; // 0x760        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Modifier_Nano_CatFormVData because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Modifier_Nano_CatFormVData) == 0x770);
};
