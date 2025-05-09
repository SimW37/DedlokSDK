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
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0xe00
    // Has VTable
    // 
    // static metadata: MNetworkVarNames "bool m_bPreparing"
    // static metadata: MNetworkVarNames "bool m_bTackling"
    // static metadata: MNetworkVarNames "GameTime_t m_flTackleStartTime"
    // static metadata: MNetworkVarNames "float m_flTackleDuration"
    // static metadata: MNetworkVarNames "Vector m_vecTackleDir"
    #pragma pack(push, 1)
    class CCitadel_Ability_SuperNeutralCharge : public server::CCitadelBaseAbility
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0xba0[0x200]; // 0xba0
        // metadata: MNetworkEnable
        bool m_bPreparing; // 0xda0        
        // metadata: MNetworkEnable
        bool m_bTackling; // 0xda1        
        [[maybe_unused]] std::uint8_t pad_0xda2[0x2]; // 0xda2
        // metadata: MNetworkEnable
        entity2::GameTime_t m_flTackleStartTime; // 0xda4        
        // metadata: MNetworkEnable
        float m_flTackleDuration; // 0xda8        
        // metadata: MNetworkEnable
        Vector m_vecTackleDir; // 0xdac        
        Vector m_vecLastPosition; // 0xdb8        
        int32_t m_nStuckFramesCount; // 0xdc4        
        // m_vecHitEnemies has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CEntityIndex> m_vecHitEnemies;
        char m_vecHitEnemies[0x18]; // 0xdc8        
        entity2::GameTime_t m_flPrepareStartTime; // 0xde0        
        client::ParticleIndex_t m_nDistancePreview; // 0xde4        
        [[maybe_unused]] std::uint8_t pad_0xde8[0x18];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Ability_SuperNeutralCharge because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Ability_SuperNeutralCharge) == 0xe00);
};
