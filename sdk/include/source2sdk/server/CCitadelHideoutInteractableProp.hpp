#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/EHideoutButtonAction.hpp"
#include "source2sdk/client/EHideoutButtonInteractStyle.hpp"
#include "source2sdk/entity2/CEntityIOOutput.hpp"
#include "source2sdk/server/CDynamicProp.hpp"

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
        // Size: 0xdd0
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "CUtlString m_strInteractLocString"
        // static metadata: MNetworkVarNames "EHideoutButtonInteractStyle m_eInteractStyle"
        // static metadata: MNetworkVarNames "EHideoutButtonAction m_eHideoutAction"
        // static metadata: MNetworkVarNames "float m_flInteractDistance"
        // static metadata: MNetworkVarNames "CUtlString m_strWorldPanelEntity"
        // static metadata: MNetworkVarNames "CUtlString m_strOpacityCurveString"
        #pragma pack(push, 1)
        class CCitadelHideoutInteractableProp : public source2sdk::server::CDynamicProp
        {
        public:
            uint8_t _pad0cc0[0x20]; // 0xcc0
            source2sdk::entity2::CEntityIOOutput m_OnStartTouch; // 0xce0            
            source2sdk::entity2::CEntityIOOutput m_OnStartTouchAll; // 0xcf8            
            source2sdk::entity2::CEntityIOOutput m_OnEndTouch; // 0xd10            
            source2sdk::entity2::CEntityIOOutput m_OnEndTouchAll; // 0xd28            
            source2sdk::entity2::CEntityIOOutput m_OnInteracted; // 0xd40            
            // metadata: MNetworkEnable
            CUtlString m_strInteractLocString; // 0xd58            
            // metadata: MNetworkEnable
            source2sdk::client::EHideoutButtonInteractStyle m_eInteractStyle; // 0xd60            
            // metadata: MNetworkEnable
            source2sdk::client::EHideoutButtonAction m_eHideoutAction; // 0xd64            
            // metadata: MNetworkEnable
            float m_flInteractDistance; // 0xd68            
            uint8_t _pad0d6c[0x4]; // 0xd6c
            // metadata: MNetworkEnable
            CUtlString m_strWorldPanelEntity; // 0xd70            
            // metadata: MNetworkEnable
            CUtlString m_strOpacityCurveString; // 0xd78            
            uint8_t _pad0d80[0x50];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadelHideoutInteractableProp because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadelHideoutInteractableProp) == 0xdd0);
    };
};
