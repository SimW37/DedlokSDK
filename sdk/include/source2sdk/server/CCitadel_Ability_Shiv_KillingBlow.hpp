#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/ParticleIndex_t.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/CCitadelAutoScaledTime.hpp"
#include "source2sdk/server/CCitadelBaseShivAbility.hpp"
#include "source2sdk/server/CCitadelModifier.hpp"
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
        // Size: 0x17b8
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "bool m_bActive"
        // static metadata: MNetworkVarNames "bool m_bStartedOnGround"
        // static metadata: MNetworkVarNames "Vector m_vStartPosition"
        // static metadata: MNetworkVarNames "QAngle m_qCurrentAngles"
        // static metadata: MNetworkVarNames "CCitadelAutoScaledTime m_flDepartureTime"
        // static metadata: MNetworkVarNames "CCitadelAutoScaledTime m_flArrivalTime"
        // static metadata: MNetworkVarNames "GameTime_t m_flDrainSuppressEndTime"
        // static metadata: MNetworkVarNames "GameTime_t m_flRecastWindowEnd"
        #pragma pack(push, 1)
        class CCitadel_Ability_Shiv_KillingBlow : public source2sdk::server::CCitadelBaseShivAbility
        {
        public:
            // m_vHitEnts has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::server::CBaseEntity>> m_vHitEnts;
            char m_vHitEnts[0x18]; // 0xf90            
            uint8_t _pad0fa8[0x408]; // 0xfa8
            // metadata: MNetworkEnable
            bool m_bActive; // 0x13b0            
            // metadata: MNetworkEnable
            bool m_bStartedOnGround; // 0x13b1            
            uint8_t _pad13b2[0x2]; // 0x13b2
            // metadata: MNetworkEnable
            Vector m_vStartPosition; // 0x13b4            
            // metadata: MNetworkEnable
            QAngle m_qCurrentAngles; // 0x13c0            
            uint8_t _pad13cc[0x4]; // 0x13cc
            // metadata: MNetworkEnable
            source2sdk::server::CCitadelAutoScaledTime m_flDepartureTime; // 0x13d0            
            // metadata: MNetworkEnable
            source2sdk::server::CCitadelAutoScaledTime m_flArrivalTime; // 0x13e8            
            Vector m_vLastKnownSafePos; // 0x1400            
            bool m_bMadeSlashParticle; // 0x140c            
            uint8_t _pad140d[0x3]; // 0x140d
            source2sdk::client::ParticleIndex_t m_ChannelParticle; // 0x1410            
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_flDrainSuppressEndTime; // 0x1414            
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_flRecastWindowEnd; // 0x1418            
            uint8_t _pad141c[0x384]; // 0x141c
            // m_BuffModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CModifierHandleTyped<source2sdk::server::CCitadelModifier> m_BuffModifier;
            char m_BuffModifier[0x18]; // 0x17a0            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Ability_Shiv_KillingBlow because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadel_Ability_Shiv_KillingBlow) == 0x17b8);
    };
};
