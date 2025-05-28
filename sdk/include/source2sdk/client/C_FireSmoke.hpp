#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_BaseFire.hpp"
#include "source2sdk/client/TimedEvent.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
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
        class C_FireSmoke : public source2sdk::client::C_BaseFire
        {
        public:
            // metadata: MNetworkEnable
            std::int32_t m_nFlameModelIndex; // 0x5f0            
            // metadata: MNetworkEnable
            std::int32_t m_nFlameFromAboveModelIndex; // 0x5f4            
            float m_flScaleRegister; // 0x5f8            
            float m_flScaleStart; // 0x5fc            
            float m_flScaleEnd; // 0x600            
            source2sdk::entity2::GameTime_t m_flScaleTimeStart; // 0x604            
            source2sdk::entity2::GameTime_t m_flScaleTimeEnd; // 0x608            
            float m_flChildFlameSpread; // 0x60c            
            uint8_t _pad0610[0x10]; // 0x610
            float m_flClipPerc; // 0x620            
            bool m_bClipTested; // 0x624            
            bool m_bFadingOut; // 0x625            
            uint8_t _pad0626[0x2]; // 0x626
            source2sdk::client::TimedEvent m_tParticleSpawn; // 0x628            
            uint8_t _pad0630[0x20];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_FireSmoke because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_FireSmoke) == 0x650);
    };
};
