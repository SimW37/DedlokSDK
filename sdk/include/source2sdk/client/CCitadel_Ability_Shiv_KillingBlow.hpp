#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CCitadelAutoScaledTime.hpp"
#include "source2sdk/client/CCitadelBaseShivAbility.hpp"
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
        // Size: 0x11e8
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
        class CCitadel_Ability_Shiv_KillingBlow : public source2sdk::client::CCitadelBaseShivAbility
        {
        public:
            uint8_t _pad0dc0[0x200]; // 0xdc0
            // metadata: MNetworkEnable
            bool m_bActive; // 0xfc0            
            uint8_t _pad0fc1[0x3]; // 0xfc1
            // metadata: MNetworkEnable
            // m_hCurrentTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_hCurrentTarget;
            char m_hCurrentTarget[0x4]; // 0xfc4            
            // metadata: MNetworkEnable
            Vector m_vStartPosition; // 0xfc8            
            // metadata: MNetworkEnable
            Vector m_vDeparturePosition; // 0xfd4            
            // metadata: MNetworkEnable
            source2sdk::client::CCitadelAutoScaledTime m_flDepartureTime; // 0xfe0            
            // metadata: MNetworkEnable
            source2sdk::client::CCitadelAutoScaledTime m_flArrivalTime; // 0xff8            
            Vector m_vLastKnownSafePos; // 0x1010            
            uint8_t _pad101c[0x4]; // 0x101c
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_flDrainSuppressEndTime; // 0x1020            
            uint8_t _pad1024[0x1c4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Ability_Shiv_KillingBlow because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CCitadel_Ability_Shiv_KillingBlow) == 0x11e8);
    };
};
