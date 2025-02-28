#pragma once
#include "source2sdk/client/C_SoundEventEntity.hpp"
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
    // Size: 0x5f8
    // Has VTable
    // 
    // static metadata: MNetworkVarNames "Vector m_vMins"
    // static metadata: MNetworkVarNames "Vector m_vMaxs"
    #pragma pack(push, 1)
    class C_SoundEventOBBEntity : public client::C_SoundEventEntity
    {
    public:
        // metadata: MNetworkEnable
        Vector m_vMins; // 0x5d0        
        // metadata: MNetworkEnable
        Vector m_vMaxs; // 0x5dc        
        [[maybe_unused]] std::uint8_t pad_0x5e8[0x10];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_SoundEventOBBEntity because it is not a standard-layout class
    static_assert(sizeof(C_SoundEventOBBEntity) == 0x5f8);
};
