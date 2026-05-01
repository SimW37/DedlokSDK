#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_BaseTrigger.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
namespace source2sdk
{
    namespace client
    {
        struct C_BaseEntity;
    };
};

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
        // Size: 0xac8
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "float m_flInitialRadius"
        // static metadata: MNetworkVarNames "float m_flEndRadius"
        // static metadata: MNetworkVarNames "float m_flProgress"
        // static metadata: MNetworkVarNames "float m_flCaptureTime"
        // static metadata: MNetworkVarNames "EHANDLE m_hUnlockPrereq"
        // static metadata: MNetworkVarNames "bool m_bAvailable"
        // static metadata: MNetworkVarNames "bool m_bIsBeingCaptured"
        // static metadata: MNetworkVarNames "bool m_bIsBeingBlocked"
        #pragma pack(push, 1)
        class CCitadelControlPointTrigger : public source2sdk::client::C_BaseTrigger
        {
        public:
            // metadata: MNetworkEnable
            float m_flInitialRadius; // 0xa70            
            // metadata: MNetworkEnable
            float m_flEndRadius; // 0xa74            
            // metadata: MNetworkEnable
            // metadata: MNotSaved
            float m_flProgress; // 0xa78            
            // metadata: MNetworkEnable
            float m_flCaptureTime; // 0xa7c            
            // metadata: MNetworkEnable
            // metadata: MNotSaved
            // m_hUnlockPrereq has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_hUnlockPrereq;
            char m_hUnlockPrereq[0x4]; // 0xa80            
            // metadata: MNetworkEnable
            // metadata: MNotSaved
            bool m_bAvailable; // 0xa84            
            // metadata: MNetworkEnable
            // metadata: MNotSaved
            bool m_bIsBeingCaptured; // 0xa85            
            // metadata: MNetworkEnable
            // metadata: MNotSaved
            bool m_bIsBeingBlocked; // 0xa86            
            uint8_t _pad0a87[0x9]; // 0xa87
            // metadata: MNotSaved
            source2sdk::entity2::GameTime_t m_flLastTouchedTime; // 0xa90            
            // metadata: MNotSaved
            Vector m_vecBeamTarget; // 0xa94            
            // metadata: MNotSaved
            Vector m_vecBeamStart; // 0xaa0            
            // metadata: MNotSaved
            source2sdk::client::ParticleIndex_t m_nFXProgressBeam; // 0xaac            
            CUtlSymbolLarge m_strUnlockPrereq; // 0xab0            
            CUtlSymbolLarge m_strBeamStart; // 0xab8            
            CUtlSymbolLarge m_strBeamTarget; // 0xac0            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadelControlPointTrigger because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CCitadelControlPointTrigger) == 0xac8);
    };
};
