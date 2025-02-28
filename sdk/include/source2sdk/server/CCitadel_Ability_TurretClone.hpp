#pragma once
#include "source2sdk/client/ParticleIndex_t.hpp"
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
    // Size: 0xd88
    // Has VTable
    // 
    // static metadata: MNetworkVarNames "EHANDLE m_pActiveTurret"
    #pragma pack(push, 1)
    class CCitadel_Ability_TurretClone : public server::CCitadelBaseAbility
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0xb00[0x118]; // 0xb00
        bool m_bHasTurretReady; // 0xc18        
        [[maybe_unused]] std::uint8_t pad_0xc19[0x3]; // 0xc19
        int32_t m_iCurrentSwapCount; // 0xc1c        
        entity2::GameTime_t m_flTurretExpireTime; // 0xc20        
        [[maybe_unused]] std::uint8_t pad_0xc24[0x4]; // 0xc24
        // metadata: MNetworkEnable
        // m_pActiveTurret has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_pActiveTurret;
        char m_pActiveTurret[0x4]; // 0xc28        
        client::ParticleIndex_t m_nTurretFXIndex; // 0xc2c        
        [[maybe_unused]] std::uint8_t pad_0xc30[0x158];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Ability_TurretClone because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Ability_TurretClone) == 0xd88);
};
