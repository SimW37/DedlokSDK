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
    // Size: 0xd98
    // Has VTable
    // 
    // static metadata: MNetworkVarNames "bool m_bBulletFlying"
    // static metadata: MNetworkVarNames "bool m_bHasLatchedOnce"
    // static metadata: MNetworkVarNames "bool m_bLatched"
    // static metadata: MNetworkVarNames "Vector m_vHarpoonTarget"
    // static metadata: MNetworkVarNames "float m_flLatchedYaw"
    // static metadata: MNetworkVarNames "GameTime_t m_flCloseEnoughStartTime"
    // static metadata: MNetworkVarNames "GameTime_t m_flStuckStartTime"
    // static metadata: MNetworkVarNames "GameTime_t m_flReelStartTime"
    #pragma pack(push, 1)
    class CAbility_Fathom_ReefdwellerHarpoon : public client::C_CitadelBaseAbility
    {
    public:
        bool m_bHitTarget; // 0xc50        
        [[maybe_unused]] std::uint8_t pad_0xc51[0x3]; // 0xc51
        Vector m_vPrevPos; // 0xc54        
        // metadata: MNetworkEnable
        bool m_bBulletFlying; // 0xc60        
        // metadata: MNetworkEnable
        bool m_bHasLatchedOnce; // 0xc61        
        // metadata: MNetworkEnable
        bool m_bLatched; // 0xc62        
        [[maybe_unused]] std::uint8_t pad_0xc63[0x1]; // 0xc63
        // metadata: MNetworkEnable
        Vector m_vHarpoonTarget; // 0xc64        
        // metadata: MNetworkEnable
        float m_flLatchedYaw; // 0xc70        
        // metadata: MNetworkEnable
        entity2::GameTime_t m_flCloseEnoughStartTime; // 0xc74        
        // metadata: MNetworkEnable
        entity2::GameTime_t m_flStuckStartTime; // 0xc78        
        // metadata: MNetworkEnable
        entity2::GameTime_t m_flReelStartTime; // 0xc7c        
        [[maybe_unused]] std::uint8_t pad_0xc80[0x118];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CAbility_Fathom_ReefdwellerHarpoon because it is not a standard-layout class
    static_assert(sizeof(CAbility_Fathom_ReefdwellerHarpoon) == 0xd98);
};
