#pragma once
#include "source2sdk/entity2/CEntityIOOutput.hpp"
#include "source2sdk/server/CBaseAnimGraph.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0xb90
    // Has VTable
    #pragma pack(push, 1)
    class CItem : public server::CBaseAnimGraph
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0xab8[0x8]; // 0xab8
        entity2::CEntityIOOutput m_OnPlayerTouch; // 0xac0        
        entity2::CEntityIOOutput m_OnPlayerPickup; // 0xae8        
        bool m_bActivateWhenAtRest; // 0xb10        
        [[maybe_unused]] std::uint8_t pad_0xb11[0x7]; // 0xb11
        entity2::CEntityIOOutput m_OnCacheInteraction; // 0xb18        
        entity2::CEntityIOOutput m_OnGlovePulled; // 0xb40        
        Vector m_vOriginalSpawnOrigin; // 0xb68        
        QAngle m_vOriginalSpawnAngles; // 0xb74        
        bool m_bPhysStartAsleep; // 0xb80        
        [[maybe_unused]] std::uint8_t pad_0xb81[0xf];
        
        // Datamap fields:
        // void CItemItemTouch; // 0x0
        // void CItemMaterialize; // 0x0
        // void CItemComeToRest; // 0x0
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CItem because it is not a standard-layout class
    static_assert(sizeof(CItem) == 0xb90);
};
