#pragma once
#include "source2sdk/client/C_CitadelBaseAbility.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"
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
    // Size: 0xed8
    // Has VTable
    // 
    // static metadata: MNetworkVarNames "EHANDLE m_pActiveTurret"
    #pragma pack(push, 1)
    class CCitadel_Ability_TurretClone : public client::C_CitadelBaseAbility
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0xc50[0x118]; // 0xc50
        bool m_bHasTurretReady; // 0xd68        
        [[maybe_unused]] std::uint8_t pad_0xd69[0x3]; // 0xd69
        int32_t m_iCurrentSwapCount; // 0xd6c        
        entity2::GameTime_t m_flTurretExpireTime; // 0xd70        
        [[maybe_unused]] std::uint8_t pad_0xd74[0x4]; // 0xd74
        // metadata: MNetworkEnable
        // m_pActiveTurret has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<client::C_BaseEntity> m_pActiveTurret;
        char m_pActiveTurret[0x4]; // 0xd78        
        client::ParticleIndex_t m_nTurretFXIndex; // 0xd7c        
        [[maybe_unused]] std::uint8_t pad_0xd80[0x158];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Ability_TurretClone because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Ability_TurretClone) == 0xed8);
};
