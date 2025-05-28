#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/HeroID_t.hpp"
#include "source2sdk/entity2/CEntityComponent.hpp"

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: unknown
        // Alignment: 0x4
        // Standard-layout class: false
        // Size: 0x20
        // Has VTable
        // Has Trivial Destructor
        // 
        // static metadata: MNetworkVarNames "HeroID_t m_nHeroID"
        // static metadata: MNetworkVarNames "HeroID_t m_nHeroLoading"
        #pragma pack(push, 1)
        class CCitadelHeroComponent : public source2sdk::entity2::CEntityComponent
        {
        public:
            uint8_t _pad0008[0xc]; // 0x8
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "OnHeroChanged"
            source2sdk::client::HeroID_t m_nHeroID; // 0x14            
            // metadata: MNetworkEnable
            // metadata: MNetworkPriority "32"
            source2sdk::client::HeroID_t m_nHeroLoading; // 0x18            
            uint8_t _pad001c[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadelHeroComponent because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CCitadelHeroComponent) == 0x20);
    };
};
