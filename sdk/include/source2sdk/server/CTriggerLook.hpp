#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/entity2/CEntityIOOutput.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/CTriggerOnce.hpp"
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
        // Size: 0x958
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "bool m_bTestOcclusion"
        // static metadata: MNetworkVarNames "bool m_bTestAllVisibleOcclusion"
        #pragma pack(push, 1)
        class CTriggerLook : public source2sdk::server::CTriggerOnce
        {
        public:
            // m_hLookTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hLookTarget;
            char m_hLookTarget[0x4]; // 0x8f0            
            float m_flFieldOfView; // 0x8f4            
            float m_flLookTime; // 0x8f8            
            float m_flLookTimeTotal; // 0x8fc            
            source2sdk::entity2::GameTime_t m_flLookTimeLast; // 0x900            
            float m_flTimeoutDuration; // 0x904            
            bool m_bTimeoutFired; // 0x908            
            bool m_bIsLooking; // 0x909            
            bool m_b2DFOV; // 0x90a            
            bool m_bUseVelocity; // 0x90b            
            // metadata: MNetworkEnable
            bool m_bTestOcclusion; // 0x90c            
            // metadata: MNetworkEnable
            bool m_bTestAllVisibleOcclusion; // 0x90d            
            uint8_t _pad090e[0x2]; // 0x90e
            source2sdk::entity2::CEntityIOOutput m_OnTimeout; // 0x910            
            source2sdk::entity2::CEntityIOOutput m_OnStartLook; // 0x928            
            source2sdk::entity2::CEntityIOOutput m_OnEndLook; // 0x940            
            
            // Datamap fields:
            // void CTriggerLookTimeoutThink; // 0x0
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CTriggerLook because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CTriggerLook) == 0x958);
    };
};
