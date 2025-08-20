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
        // Size: 0xff0
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "bool m_bActive"
        // static metadata: MNetworkVarNames "EHANDLE m_hCurrentTarget"
        // static metadata: MNetworkVarNames "Vector m_vStartPosition"
        // static metadata: MNetworkVarNames "Vector m_vDeparturePosition"
        // static metadata: MNetworkVarNames "CCitadelAutoScaledTime m_flDepartureTime"
        // static metadata: MNetworkVarNames "CCitadelAutoScaledTime m_flArrivalTime"
        // static metadata: MNetworkVarNames "GameTime_t m_flDrainSuppressEndTime"
        #pragma pack(push, 1)
        class CCitadel_Ability_Shiv_KillingBlow : public source2sdk::server::CCitadelBaseShivAbility
        {
        public:
            uint8_t _pad0b98[0x200]; // 0xb98
            // metadata: MNetworkEnable
            bool m_bActive; // 0xd98            
            uint8_t _pad0d99[0x3]; // 0xd99
            // metadata: MNetworkEnable
            // m_hCurrentTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hCurrentTarget;
            char m_hCurrentTarget[0x4]; // 0xd9c            
            // metadata: MNetworkEnable
            Vector m_vStartPosition; // 0xda0            
            // metadata: MNetworkEnable
            Vector m_vDeparturePosition; // 0xdac            
            // metadata: MNetworkEnable
            source2sdk::server::CCitadelAutoScaledTime m_flDepartureTime; // 0xdb8            
            // metadata: MNetworkEnable
            source2sdk::server::CCitadelAutoScaledTime m_flArrivalTime; // 0xdd0            
            Vector m_vLastKnownSafePos; // 0xde8            
            uint8_t _pad0df4[0x4]; // 0xdf4
            source2sdk::client::ParticleIndex_t m_ChannelParticle; // 0xdf8            
            uint8_t _pad0dfc[0x18]; // 0xdfc
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_flDrainSuppressEndTime; // 0xe14            
            uint8_t _pad0e18[0x1c0]; // 0xe18
            // m_BuffModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CModifierHandleTyped<source2sdk::server::CCitadelModifier> m_BuffModifier;
            char m_BuffModifier[0x18]; // 0xfd8            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Ability_Shiv_KillingBlow because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadel_Ability_Shiv_KillingBlow) == 0xff0);
    };
};
