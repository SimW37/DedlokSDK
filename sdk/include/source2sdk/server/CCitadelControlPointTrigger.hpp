#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/ParticleIndex_t.hpp"
#include "source2sdk/entity2/CEntityIOOutput.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/CTriggerMultiple.hpp"
namespace source2sdk
{
    namespace server
    {
        struct CBaseEntity;
    };
};

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x978
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
        class CCitadelControlPointTrigger : public source2sdk::server::CTriggerMultiple
        {
        public:
            source2sdk::entity2::CEntityIOOutput m_OnFullyCaptured; // 0x8f0            
            source2sdk::entity2::CEntityIOOutput m_OnBecomeCapturable; // 0x908            
            // metadata: MNetworkEnable
            float m_flInitialRadius; // 0x920            
            // metadata: MNetworkEnable
            float m_flEndRadius; // 0x924            
            // metadata: MNetworkEnable
            // metadata: MNotSaved
            float m_flProgress; // 0x928            
            // metadata: MNetworkEnable
            float m_flCaptureTime; // 0x92c            
            // metadata: MNetworkEnable
            // metadata: MNotSaved
            // m_hUnlockPrereq has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hUnlockPrereq;
            char m_hUnlockPrereq[0x4]; // 0x930            
            // metadata: MNetworkEnable
            // metadata: MNotSaved
            bool m_bAvailable; // 0x934            
            // metadata: MNetworkEnable
            // metadata: MNotSaved
            bool m_bIsBeingCaptured; // 0x935            
            // metadata: MNetworkEnable
            // metadata: MNotSaved
            bool m_bIsBeingBlocked; // 0x936            
            uint8_t _pad0937[0x9]; // 0x937
            // metadata: MNotSaved
            source2sdk::entity2::GameTime_t m_flLastTouchedTime; // 0x940            
            // metadata: MNotSaved
            Vector m_vecBeamTarget; // 0x944            
            // metadata: MNotSaved
            Vector m_vecBeamStart; // 0x950            
            // metadata: MNotSaved
            source2sdk::client::ParticleIndex_t m_nFXProgressBeam; // 0x95c            
            CUtlSymbolLarge m_strUnlockPrereq; // 0x960            
            CUtlSymbolLarge m_strBeamStart; // 0x968            
            CUtlSymbolLarge m_strBeamTarget; // 0x970            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadelControlPointTrigger because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadelControlPointTrigger) == 0x978);
    };
};
