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
    class CBaseEntity;
};

namespace source2sdk::server
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0xe48
    // Has VTable
    // 
    // static metadata: MNetworkVarNames "EHANDLE m_hHookVictim"
    // static metadata: MNetworkVarNames "Vector m_vecHookTargetStartPos"
    // static metadata: MNetworkVarNames "GameTime_t m_flCancelHookTime"
    // static metadata: MNetworkVarNames "GameTime_t m_flBeginReelHookTime"
    // static metadata: MNetworkVarNames "GameTime_t m_flBulletShouldExpireTime"
    #pragma pack(push, 1)
    class CCitadel_Ability_Hook : public server::CCitadelBaseAbility
    {
    public:
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "HookVictimChanged"
        // m_hHookVictim has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hHookVictim;
        char m_hHookVictim[0x4]; // 0xba0        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
        Vector m_vecHookTargetStartPos; // 0xba4        
        // metadata: MNetworkEnable
        entity2::GameTime_t m_flCancelHookTime; // 0xbb0        
        // metadata: MNetworkEnable
        entity2::GameTime_t m_flBeginReelHookTime; // 0xbb4        
        // metadata: MNetworkEnable
        entity2::GameTime_t m_flBulletShouldExpireTime; // 0xbb8        
        [[maybe_unused]] std::uint8_t pad_0xbbc[0x4]; // 0xbbc
        float m_flMaxHookTravelTime; // 0xbc0        
        float m_flLastUppercutRestoreTime; // 0xbc4        
        [[maybe_unused]] std::uint8_t pad_0xbc8[0x280];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Ability_Hook because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Ability_Hook) == 0xe48);
};
