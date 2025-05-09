#pragma once
#include "source2sdk/client/ParticleIndex_t.hpp"
#include "source2sdk/client/ShotID_t.hpp"
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
    // Size: 0xe58
    // Has VTable
    // 
    // static metadata: MNetworkVarNames "EHANDLE m_pActiveTurret"
    #pragma pack(push, 1)
    class CCitadel_Ability_TurretClone : public server::CCitadelBaseAbility
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0xba0[0x140]; // 0xba0
        bool m_bHasTurretReady; // 0xce0        
        [[maybe_unused]] std::uint8_t pad_0xce1[0x3]; // 0xce1
        int32_t m_iCurrentSwapCount; // 0xce4        
        entity2::GameTime_t m_flTurretExpireTime; // 0xce8        
        [[maybe_unused]] std::uint8_t pad_0xcec[0x4]; // 0xcec
        client::ShotID_t m_nLastBulletShotID; // 0xcf0        
        // metadata: MNetworkEnable
        // m_pActiveTurret has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_pActiveTurret;
        char m_pActiveTurret[0x4]; // 0xcf4        
        client::ParticleIndex_t m_nTurretFXIndex; // 0xcf8        
        [[maybe_unused]] std::uint8_t pad_0xcfc[0x15c];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Ability_TurretClone because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Ability_TurretClone) == 0xe58);
};
