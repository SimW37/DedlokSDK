#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_CitadelBaseAbility.hpp"
#include "source2sdk/client/EFlightState.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"
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
        // Size: 0x1060
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "EHANDLE m_hGrabTarget"
        // static metadata: MNetworkVarNames "EFlightState m_eFlightState"
        // static metadata: MNetworkVarNames "bool m_bIsGrabbing"
        // static metadata: MNetworkVarNames "bool m_bIsHoldingBomb"
        // static metadata: MNetworkVarNames "float m_flCurrentSpeed"
        #pragma pack(push, 1)
        class CCitadel_Ability_Tengu_AirLift : public source2sdk::client::C_CitadelBaseAbility
        {
        public:
            // metadata: MNetworkEnable
            // m_hGrabTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_hGrabTarget;
            char m_hGrabTarget[0x4]; // 0xdc0            
            source2sdk::client::ParticleIndex_t m_nHoldBombEffect; // 0xdc4            
            uint8_t _pad0dc8[0x280]; // 0xdc8
            // metadata: MNetworkEnable
            source2sdk::client::EFlightState m_eFlightState; // 0x1048            
            // metadata: MNetworkEnable
            bool m_bIsGrabbing; // 0x1049            
            // metadata: MNetworkEnable
            bool m_bIsHoldingBomb; // 0x104a            
            uint8_t _pad104b[0x1]; // 0x104b
            // metadata: MNetworkEnable
            float m_flCurrentSpeed; // 0x104c            
            uint8_t _pad1050[0x10];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Ability_Tengu_AirLift because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CCitadel_Ability_Tengu_AirLift) == 0x1060);
    };
};
