#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CAI_CitadelNPC.hpp"

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
        // Size: 0x17f0
        // Has VTable
        #pragma pack(push, 1)
        class CNPC_MortarSentry : public source2sdk::server::CAI_CitadelNPC
        {
        public:
            uint8_t _pad1790[0xc]; // 0x1790
            float m_flAttackCone; // 0x179c            
            // metadata: MNotSaved
            float m_flLastAlertSound; // 0x17a0            
            float m_flTrackingSpeed; // 0x17a4            
            VectorWS m_vTargetPosition; // 0x17a8            
            float m_flSearchRadius; // 0x17b4            
            float m_flLifeTime; // 0x17b8            
            uint8_t _pad17bc[0x34];
            
            // Datamap fields:
            // void m_nCurrentVolley; // 0x17c8
            // void m_nGrenadesPerVolley; // 0x17cc
            // void m_flNextAttackTime; // 0x17d0
            // void m_flAttackRateInnerVolley; // 0x17d4
            // void m_flAttackRate; // 0x17d8
            // void m_vLastTargetPos; // 0x17dc
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CNPC_MortarSentry because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CNPC_MortarSentry) == 0x17f0);
    };
};
