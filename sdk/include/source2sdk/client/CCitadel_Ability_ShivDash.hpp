#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CCitadelBaseShivAbility.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"

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
        // Size: 0x1090
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "Vector m_vStartPosition"
        // static metadata: MNetworkVarNames "Vector m_vDashDirection"
        // static metadata: MNetworkVarNames "bool m_bIsDashing"
        // static metadata: MNetworkVarNames "bool m_bStartedInAir"
        #pragma pack(push, 1)
        class CCitadel_Ability_ShivDash : public source2sdk::client::CCitadelBaseShivAbility
        {
        public:
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            Vector m_vStartPosition; // 0xdc0            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            Vector m_vDashDirection; // 0xdcc            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            bool m_bIsDashing; // 0xdd8            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            bool m_bStartedInAir; // 0xdd9            
            uint8_t _pad0dda[0x6]; // 0xdda
            // m_vecHitEnemies has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CEntityIndex> m_vecHitEnemies;
            char m_vecHitEnemies[0x18]; // 0xde0            
            Vector m_vecLastPosition; // 0xdf8            
            std::int32_t m_nReductionsLeft; // 0xe04            
            uint8_t _pad0e08[0x280]; // 0xe08
            source2sdk::entity2::GameTime_t m_flStuckTime; // 0x1088            
            uint8_t _pad108c[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Ability_ShivDash because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CCitadel_Ability_ShivDash) == 0x1090);
    };
};
