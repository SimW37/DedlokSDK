#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/CCitadelBaseAbility.hpp"

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
        // Size: 0x1678
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "Vector m_vStartPosition"
        // static metadata: MNetworkVarNames "Vector m_vEndPosition"
        // static metadata: MNetworkVarNames "bool m_bIsDashing"
        #pragma pack(push, 1)
        class CCitadel_Ability_NanoDash : public source2sdk::server::CCitadelBaseAbility
        {
        public:
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            Vector m_vStartPosition; // 0xf90            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            Vector m_vEndPosition; // 0xf9c            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            bool m_bIsDashing; // 0xfa8            
            uint8_t _pad0fa9[0x7]; // 0xfa9
            // m_vecHitEnemies has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CEntityIndex> m_vecHitEnemies;
            char m_vecHitEnemies[0x18]; // 0xfb0            
            Vector m_vecLastPosition; // 0xfc8            
            uint8_t _pad0fd4[0x684]; // 0xfd4
            source2sdk::entity2::GameTime_t m_flStuckTime; // 0x1658            
            uint8_t _pad165c[0x1c];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Ability_NanoDash because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadel_Ability_NanoDash) == 0x1678);
    };
};
