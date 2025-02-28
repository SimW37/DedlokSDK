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
    // Size: 0x580
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
        int32_t m_nFlameModelIndex; // 0x520        
        // metadata: MNetworkEnable
        int32_t m_nFlameFromAboveModelIndex; // 0x524        
        float m_flScaleRegister; // 0x528        
        float m_flScaleStart; // 0x52c        
        float m_flScaleEnd; // 0x530        
        entity2::GameTime_t m_flScaleTimeStart; // 0x534        
        entity2::GameTime_t m_flScaleTimeEnd; // 0x538        
        float m_flChildFlameSpread; // 0x53c        
        [[maybe_unused]] std::uint8_t pad_0x540[0x10]; // 0x540
        float m_flClipPerc; // 0x550        
        bool m_bClipTested; // 0x554        
        bool m_bFadingOut; // 0x555        
        [[maybe_unused]] std::uint8_t pad_0x556[0x2]; // 0x556
        client::TimedEvent m_tParticleSpawn; // 0x558        
        [[maybe_unused]] std::uint8_t pad_0x560[0x20];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_FireSmoke because it is not a standard-layout class
    static_assert(sizeof(C_FireSmoke) == 0x580);
};
