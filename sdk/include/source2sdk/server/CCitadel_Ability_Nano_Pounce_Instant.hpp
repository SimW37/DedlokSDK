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
        // Size: 0xe88
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
            uint8_t _pad0b98[0x280]; // 0xb98
            // metadata: MNetworkEnable
            bool m_bActive; // 0xe18            
            uint8_t _pad0e19[0x3]; // 0xe19
            // metadata: MNetworkEnable
            // m_hCurrentTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hCurrentTarget;
            char m_hCurrentTarget[0x4]; // 0xe1c            
            // metadata: MNetworkEnable
            // m_hLastCastTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hLastCastTarget;
            char m_hLastCastTarget[0x4]; // 0xe20            
            // metadata: MNetworkEnable
            Vector m_vStartPosition; // 0xe24            
            // metadata: MNetworkEnable
            Vector m_vDeparturePosition; // 0xe30            
            uint8_t _pad0e3c[0x4]; // 0xe3c
            // metadata: MNetworkEnable
            source2sdk::server::CCitadelAutoScaledTime m_flDepartureTime; // 0xe40            
            // metadata: MNetworkEnable
            source2sdk::server::CCitadelAutoScaledTime m_flArrivalTime; // 0xe58            
            Vector m_vLastKnownSafePos; // 0xe70            
            uint8_t _pad0e7c[0x2]; // 0xe7c
            // metadata: MNetworkEnable
            bool m_bIsFirstCastCompleted; // 0xe7e            
            uint8_t _pad0e7f[0x1]; // 0xe7f
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_tDoubleCastWindow; // 0xe80            
            source2sdk::client::ParticleIndex_t m_CastStartParticle; // 0xe84            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Ability_Nano_Pounce_Instant because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadel_Ability_Nano_Pounce_Instant) == 0xe88);
    };
};
