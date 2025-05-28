#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_CitadelBaseAbility.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"
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
        // Size: 0xfe0
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "GameTime_t m_flStartTime"
        // static metadata: MNetworkVarNames "GameTime_t m_flLandedTime"
        // static metadata: MNetworkVarNames "bool m_bLanded"
        // static metadata: MNetworkVarNames "bool m_bFalling"
        // static metadata: MNetworkVarNames "bool m_bInStoneForm"
        // static metadata: MNetworkVarNames "float m_flStartHeight"
        #pragma pack(push, 1)
        class CCitadel_Ability_Tengu_StoneForm : public source2sdk::client::C_CitadelBaseAbility
        {
        public:
            uint8_t _pad0dc0[0x208]; // 0xdc0
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            source2sdk::entity2::GameTime_t m_flStartTime; // 0xfc8            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            source2sdk::entity2::GameTime_t m_flLandedTime; // 0xfcc            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            bool m_bLanded; // 0xfd0            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            bool m_bFalling; // 0xfd1            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            bool m_bInStoneForm; // 0xfd2            
            uint8_t _pad0fd3[0x1]; // 0xfd3
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            float m_flStartHeight; // 0xfd4            
            source2sdk::client::ParticleIndex_t m_nStoneFormEffect; // 0xfd8            
            uint8_t _pad0fdc[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Ability_Tengu_StoneForm because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CCitadel_Ability_Tengu_StoneForm) == 0xfe0);
    };
};
