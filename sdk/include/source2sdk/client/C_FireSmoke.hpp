#pragma once
#include "source2sdk/client/C_BaseFire.hpp"
#include "source2sdk/client/TimedEvent.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
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
    // Size: 0x650
    // Has VTable
    // 
    // static metadata: MNetworkOverride "m_flScale"
    // static metadata: MNetworkOverride "m_flScaleTime"
    // static metadata: MNetworkVarNames "int32 m_nFlameModelIndex"
    // static metadata: MNetworkVarNames "int32 m_nFlameFromAboveModelIndex"
    #pragma pack(push, 1)
    class C_FireSmoke : public client::C_BaseFire
    {
    public:
        // metadata: MNetworkEnable
        int32_t m_nFlameModelIndex; // 0x5f0        
        // metadata: MNetworkEnable
        int32_t m_nFlameFromAboveModelIndex; // 0x5f4        
        float m_flScaleRegister; // 0x5f8        
        float m_flScaleStart; // 0x5fc        
        float m_flScaleEnd; // 0x600        
        entity2::GameTime_t m_flScaleTimeStart; // 0x604        
        entity2::GameTime_t m_flScaleTimeEnd; // 0x608        
        float m_flChildFlameSpread; // 0x60c        
        [[maybe_unused]] std::uint8_t pad_0x610[0x10]; // 0x610
        float m_flClipPerc; // 0x620        
        bool m_bClipTested; // 0x624        
        bool m_bFadingOut; // 0x625        
        [[maybe_unused]] std::uint8_t pad_0x626[0x2]; // 0x626
        client::TimedEvent m_tParticleSpawn; // 0x628        
        [[maybe_unused]] std::uint8_t pad_0x630[0x20];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_FireSmoke because it is not a standard-layout class
    static_assert(sizeof(C_FireSmoke) == 0x650);
};
