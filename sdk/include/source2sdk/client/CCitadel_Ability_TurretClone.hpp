#pragma once
#include "source2sdk/client/C_CitadelBaseAbility.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"
#include "source2sdk/client/ShotID_t.hpp"
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
    // static metadata: MNetworkVarNames "EHANDLE m_pActiveTurret"
    #pragma pack(push, 1)
    class CCitadel_Ability_TurretClone : public client::C_CitadelBaseAbility
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0xdc0[0x140]; // 0xdc0
        bool m_bHasTurretReady; // 0xf00        
        [[maybe_unused]] std::uint8_t pad_0xf01[0x3]; // 0xf01
        int32_t m_iCurrentSwapCount; // 0xf04        
        entity2::GameTime_t m_flTurretExpireTime; // 0xf08        
        [[maybe_unused]] std::uint8_t pad_0xf0c[0x4]; // 0xf0c
        client::ShotID_t m_nLastBulletShotID; // 0xf10        
        // metadata: MNetworkEnable
        // m_pActiveTurret has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<client::C_BaseEntity> m_pActiveTurret;
        char m_pActiveTurret[0x4]; // 0xf14        
        client::ParticleIndex_t m_nTurretFXIndex; // 0xf18        
        [[maybe_unused]] std::uint8_t pad_0xf1c[0x15c];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Ability_TurretClone because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Ability_TurretClone) == 0x1078);
};
