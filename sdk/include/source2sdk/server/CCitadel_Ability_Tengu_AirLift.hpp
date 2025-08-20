#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/EFlightState.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"
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
        // Size: 0xe40
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "EHANDLE m_hGrabTarget"
        // static metadata: MNetworkVarNames "EFlightState m_eFlightState"
        // static metadata: MNetworkVarNames "bool m_bIsGrabbing"
        // static metadata: MNetworkVarNames "bool m_bIsHoldingBomb"
        // static metadata: MNetworkVarNames "float m_flCurrentSpeed"
        #pragma pack(push, 1)
        class CCitadel_Ability_Tengu_AirLift : public source2sdk::server::CCitadelBaseAbility
        {
        public:
            uint8_t _pad0b98[0x18]; // 0xb98
            // metadata: MNetworkEnable
            // m_hGrabTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hGrabTarget;
            char m_hGrabTarget[0x4]; // 0xbb0            
            source2sdk::client::ParticleIndex_t m_nHoldBombEffect; // 0xbb4            
            uint8_t _pad0bb8[0x280]; // 0xbb8
            // metadata: MNetworkEnable
            source2sdk::client::EFlightState m_eFlightState; // 0xe38            
            // metadata: MNetworkEnable
            bool m_bIsGrabbing; // 0xe39            
            // metadata: MNetworkEnable
            bool m_bIsHoldingBomb; // 0xe3a            
            uint8_t _pad0e3b[0x1]; // 0xe3b
            // metadata: MNetworkEnable
            float m_flCurrentSpeed; // 0xe3c            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Ability_Tengu_AirLift because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadel_Ability_Tengu_AirLift) == 0xe40);
    };
};
