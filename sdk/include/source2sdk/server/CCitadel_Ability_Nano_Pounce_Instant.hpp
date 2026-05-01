#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/ParticleIndex_t.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/CCitadelAutoScaledTime.hpp"
#include "source2sdk/server/CCitadelBaseAbility.hpp"
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
        // Size: 0x1500
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "bool m_bActive"
        // static metadata: MNetworkVarNames "EHANDLE m_hCurrentTarget"
        // static metadata: MNetworkVarNames "EHANDLE m_hLastCastTarget"
        // static metadata: MNetworkVarNames "Vector m_vStartPosition"
        // static metadata: MNetworkVarNames "Vector m_vDeparturePosition"
        // static metadata: MNetworkVarNames "CCitadelAutoScaledTime m_flDepartureTime"
        // static metadata: MNetworkVarNames "CCitadelAutoScaledTime m_flArrivalTime"
        // static metadata: MNetworkVarNames "bool m_bIsFirstCastCompleted"
        // static metadata: MNetworkVarNames "GameTime_t m_tDoubleCastWindow"
        #pragma pack(push, 1)
        class CCitadel_Ability_Nano_Pounce_Instant : public source2sdk::server::CCitadelBaseAbility
        {
        public:
            uint8_t _pad0f90[0x500]; // 0xf90
            // metadata: MNetworkEnable
            bool m_bActive; // 0x1490            
            uint8_t _pad1491[0x3]; // 0x1491
            // metadata: MNetworkEnable
            // m_hCurrentTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hCurrentTarget;
            char m_hCurrentTarget[0x4]; // 0x1494            
            // metadata: MNetworkEnable
            // m_hLastCastTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hLastCastTarget;
            char m_hLastCastTarget[0x4]; // 0x1498            
            // metadata: MNetworkEnable
            Vector m_vStartPosition; // 0x149c            
            // metadata: MNetworkEnable
            Vector m_vDeparturePosition; // 0x14a8            
            uint8_t _pad14b4[0x4]; // 0x14b4
            // metadata: MNetworkEnable
            source2sdk::server::CCitadelAutoScaledTime m_flDepartureTime; // 0x14b8            
            // metadata: MNetworkEnable
            source2sdk::server::CCitadelAutoScaledTime m_flArrivalTime; // 0x14d0            
            Vector m_vLastKnownSafePos; // 0x14e8            
            bool m_bStartedPhase01; // 0x14f4            
            bool m_bStartedPhase02; // 0x14f5            
            // metadata: MNetworkEnable
            bool m_bIsFirstCastCompleted; // 0x14f6            
            uint8_t _pad14f7[0x1]; // 0x14f7
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_tDoubleCastWindow; // 0x14f8            
            source2sdk::client::ParticleIndex_t m_CastStartParticle; // 0x14fc            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Ability_Nano_Pounce_Instant because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadel_Ability_Nano_Pounce_Instant) == 0x1500);
    };
};
