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
        // Size: 0x1020
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "bool m_bPreparing"
        // static metadata: MNetworkVarNames "bool m_bTackling"
        // static metadata: MNetworkVarNames "GameTime_t m_flTackleStartTime"
        // static metadata: MNetworkVarNames "float m_flTackleDuration"
        // static metadata: MNetworkVarNames "Vector m_vecTackleDir"
        #pragma pack(push, 1)
        class CCitadel_Ability_SuperNeutralCharge : public source2sdk::client::C_CitadelBaseAbility
        {
        public:
            uint8_t _pad0dc0[0x200]; // 0xdc0
            // metadata: MNetworkEnable
            bool m_bPreparing; // 0xfc0            
            // metadata: MNetworkEnable
            bool m_bTackling; // 0xfc1            
            uint8_t _pad0fc2[0x2]; // 0xfc2
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_flTackleStartTime; // 0xfc4            
            // metadata: MNetworkEnable
            float m_flTackleDuration; // 0xfc8            
            // metadata: MNetworkEnable
            Vector m_vecTackleDir; // 0xfcc            
            Vector m_vecLastPosition; // 0xfd8            
            std::int32_t m_nStuckFramesCount; // 0xfe4            
            // m_vecHitEnemies has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CEntityIndex> m_vecHitEnemies;
            char m_vecHitEnemies[0x18]; // 0xfe8            
            source2sdk::entity2::GameTime_t m_flPrepareStartTime; // 0x1000            
            source2sdk::client::ParticleIndex_t m_nDistancePreview; // 0x1004            
            uint8_t _pad1008[0x18];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Ability_SuperNeutralCharge because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CCitadel_Ability_SuperNeutralCharge) == 0x1020);
    };
};
