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
        // Size: 0xfe8
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
            uint8_t _pad0d88[0x200]; // 0xd88
            // metadata: MNetworkEnable
            bool m_bPreparing; // 0xf88            
            // metadata: MNetworkEnable
            bool m_bTackling; // 0xf89            
            uint8_t _pad0f8a[0x2]; // 0xf8a
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_flTackleStartTime; // 0xf8c            
            // metadata: MNetworkEnable
            float m_flTackleDuration; // 0xf90            
            // metadata: MNetworkEnable
            Vector m_vecTackleDir; // 0xf94            
            Vector m_vecLastPosition; // 0xfa0            
            std::int32_t m_nStuckFramesCount; // 0xfac            
            // m_vecHitEnemies has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CEntityIndex> m_vecHitEnemies;
            char m_vecHitEnemies[0x18]; // 0xfb0            
            source2sdk::entity2::GameTime_t m_flPrepareStartTime; // 0xfc8            
            source2sdk::client::ParticleIndex_t m_nDistancePreview; // 0xfcc            
            uint8_t _pad0fd0[0x18];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Ability_SuperNeutralCharge because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CCitadel_Ability_SuperNeutralCharge) == 0xfe8);
    };
};
