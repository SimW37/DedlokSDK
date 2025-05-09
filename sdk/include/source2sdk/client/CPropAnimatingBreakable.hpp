#pragma once
#include "source2sdk/client/CBaseAnimGraph.hpp"
#include "source2sdk/client/CBreakableStageHelper.hpp"
#include "source2sdk/entity2/CEntityIOOutput.hpp"
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
    // Size: 0xd40
    // Has VTable
    // 
    // static metadata: MNetworkIncludeByName "m_iMaxHealth"
    // static metadata: MNetworkIncludeByName "m_iHealth"
    #pragma pack(push, 1)
    class CPropAnimatingBreakable : public client::CBaseAnimGraph
    {
    public:
        client::CBreakableStageHelper m_stages; // 0xcb0        
        entity2::CEntityIOOutput m_OnTakeDamage; // 0xcc8        
        entity2::CEntityIOOutput m_OnFinalBreak; // 0xcf0        
        entity2::CEntityIOOutput m_OnStageAdvanced; // 0xd18        
        
        // Datamap fields:
        // void InputNextBreakStage; // 0x0
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CPropAnimatingBreakable because it is not a standard-layout class
    static_assert(sizeof(CPropAnimatingBreakable) == 0xd40);
};
