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
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0xdb0
    // Has VTable
    // 
    // static metadata: MNetworkVarNames "float m_flDissipationRate"
    // static metadata: MNetworkVarNames "GameTime_t m_flDissipationTime"
    // static metadata: MNetworkVarNames "GameTime_t m_flHeatTime"
    // static metadata: MNetworkVarNames "GameTime_t m_flOverheatSoundTime"
    // static metadata: MNetworkVarNames "bool m_bOverheating"
    #pragma pack(push, 1)
    class CCitadel_Ability_Tokamak_HeatSinks_Inherent : public client::C_CitadelBaseAbility
    {
    public:
        int32_t m_nIntervalsElapsed; // 0xc50        
        entity2::GameTime_t m_NextShotTime; // 0xc54        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
        float m_flDissipationRate; // 0xc58        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
        entity2::GameTime_t m_flDissipationTime; // 0xc5c        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
        entity2::GameTime_t m_flHeatTime; // 0xc60        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
        entity2::GameTime_t m_flOverheatSoundTime; // 0xc64        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
        bool m_bOverheating; // 0xc68        
        [[maybe_unused]] std::uint8_t pad_0xc69[0x147];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Ability_Tokamak_HeatSinks_Inherent because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Ability_Tokamak_HeatSinks_Inherent) == 0xdb0);
};
