#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/entity2/CEntityIOOutput.hpp"
#include "source2sdk/server/CBaseAnimGraph.hpp"

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Registered alignment: 0x10
        // Alignment: 0x10
        // Standard-layout class: false
        // Size: 0xb20
        // Has VTable
        #pragma pack(push, 1)
        class CItem : public source2sdk::server::CBaseAnimGraph
        {
        public:
            uint8_t _pad0a80[0x8]; // 0xa80
            source2sdk::entity2::CEntityIOOutput m_OnPlayerTouch; // 0xa88            
            source2sdk::entity2::CEntityIOOutput m_OnPlayerPickup; // 0xaa0            
            bool m_bActivateWhenAtRest; // 0xab8            
            uint8_t _pad0ab9[0x7]; // 0xab9
            source2sdk::entity2::CEntityIOOutput m_OnCacheInteraction; // 0xac0            
            source2sdk::entity2::CEntityIOOutput m_OnGlovePulled; // 0xad8            
            VectorWS m_vOriginalSpawnOrigin; // 0xaf0            
            QAngle m_vOriginalSpawnAngles; // 0xafc            
            // metadata: MNotSaved
            bool m_bPhysStartAsleep; // 0xb08            
            uint8_t _pad0b09[0x17];
            
            // Datamap fields:
            // void CItemItemTouch; // 0x0
            // void CItemMaterialize; // 0x0
            // void CItemComeToRest; // 0x0
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CItem because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CItem) == 0xb20);
    };
};
