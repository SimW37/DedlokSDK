#pragma once
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/CCitadelBaseAbility.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0xe40
    // Has VTable
    // 
    // static metadata: MNetworkVarNames "Vector m_vStartPosition"
    // static metadata: MNetworkVarNames "Vector m_vDashDirection"
    // static metadata: MNetworkVarNames "bool m_bIsDashing"
    // static metadata: MNetworkVarNames "bool m_bStartedInAir"
    #pragma pack(push, 1)
    class CCitadel_Ability_NanoDash : public server::CCitadelBaseAbility
    {
    public:
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
        Vector m_vStartPosition; // 0xb00        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
        Vector m_vDashDirection; // 0xb0c        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
        bool m_bIsDashing; // 0xb18        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
        bool m_bStartedInAir; // 0xb19        
        [[maybe_unused]] std::uint8_t pad_0xb1a[0x6]; // 0xb1a
        // m_vecHitEnemies has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CEntityIndex> m_vecHitEnemies;
        char m_vecHitEnemies[0x18]; // 0xb20        
        Vector m_vecLastPosition; // 0xb38        
        [[maybe_unused]] std::uint8_t pad_0xb44[0x2dc]; // 0xb44
        entity2::GameTime_t m_flStuckTime; // 0xe20        
        [[maybe_unused]] std::uint8_t pad_0xe24[0x1c];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Ability_NanoDash because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Ability_NanoDash) == 0xe40);
};
