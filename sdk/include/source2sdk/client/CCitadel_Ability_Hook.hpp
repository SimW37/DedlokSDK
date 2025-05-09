#pragma once
#include "source2sdk/client/C_CitadelBaseAbility.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    class C_BaseEntity;
};

namespace source2sdk::client
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x1078
    // Has VTable
    // 
    // static metadata: MNetworkVarNames "EHANDLE m_hHookVictim"
    // static metadata: MNetworkVarNames "Vector m_vecHookTargetStartPos"
    // static metadata: MNetworkVarNames "GameTime_t m_flCancelHookTime"
    // static metadata: MNetworkVarNames "GameTime_t m_flBeginReelHookTime"
    // static metadata: MNetworkVarNames "GameTime_t m_flBulletShouldExpireTime"
    #pragma pack(push, 1)
    class CCitadel_Ability_Hook : public client::C_CitadelBaseAbility
    {
    public:
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "HookVictimChanged"
        // m_hHookVictim has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<client::C_BaseEntity> m_hHookVictim;
        char m_hHookVictim[0x4]; // 0xdc0        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
        Vector m_vecHookTargetStartPos; // 0xdc4        
        // metadata: MNetworkEnable
        entity2::GameTime_t m_flCancelHookTime; // 0xdd0        
        // metadata: MNetworkEnable
        entity2::GameTime_t m_flBeginReelHookTime; // 0xdd4        
        // metadata: MNetworkEnable
        entity2::GameTime_t m_flBulletShouldExpireTime; // 0xdd8        
        [[maybe_unused]] std::uint8_t pad_0xddc[0x4]; // 0xddc
        float m_flMaxHookTravelTime; // 0xde0        
        [[maybe_unused]] std::uint8_t pad_0xde4[0x294];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Ability_Hook because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Ability_Hook) == 0x1078);
};
