#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/CCitadelBaseShivAbility.hpp"
namespace source2sdk
{
    namespace server
    {
        struct CPointModifierThinker;
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
        // Size: 0xe90
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "Vector m_vStartPosition"
        // static metadata: MNetworkVarNames "Vector m_vDashDirection"
        // static metadata: MNetworkVarNames "bool m_bIsDashing"
        // static metadata: MNetworkVarNames "bool m_bStartedInAir"
        #pragma pack(push, 1)
        class CCitadel_Ability_ShivDash : public source2sdk::server::CCitadelBaseShivAbility
        {
        public:
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            Vector m_vStartPosition; // 0xb98            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            Vector m_vDashDirection; // 0xba4            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            bool m_bIsDashing; // 0xbb0            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            bool m_bStartedInAir; // 0xbb1            
            uint8_t _pad0bb2[0x6]; // 0xbb2
            // m_vecHitEnemies has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CEntityIndex> m_vecHitEnemies;
            char m_vecHitEnemies[0x18]; // 0xbb8            
            Vector m_vecLastPosition; // 0xbd0            
            std::int32_t m_nReductionsLeft; // 0xbdc            
            uint8_t _pad0be0[0x280]; // 0xbe0
            source2sdk::entity2::GameTime_t m_flStuckTime; // 0xe60            
            // m_hEchoThinker has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CPointModifierThinker> m_hEchoThinker;
            char m_hEchoThinker[0x4]; // 0xe64            
            source2sdk::entity2::GameTime_t m_EchoStartTime; // 0xe68            
            bool m_bLetEchoPlay; // 0xe6c            
            uint8_t _pad0e6d[0x1b]; // 0xe6d
            bool m_bDiscontinuityInEcho; // 0xe88            
            uint8_t _pad0e89[0x7];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Ability_ShivDash because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadel_Ability_ShivDash) == 0xe90);
    };
};
