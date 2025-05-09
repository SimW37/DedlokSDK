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
    // Size: 0xf30
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
        bool m_bHitTarget; // 0xdc0        
        [[maybe_unused]] std::uint8_t pad_0xdc1[0x3]; // 0xdc1
        Vector m_vPrevPos; // 0xdc4        
        // metadata: MNetworkEnable
        bool m_bBulletFlying; // 0xdd0        
        // metadata: MNetworkEnable
        bool m_bHasLatchedOnce; // 0xdd1        
        // metadata: MNetworkEnable
        bool m_bLatched; // 0xdd2        
        [[maybe_unused]] std::uint8_t pad_0xdd3[0x1]; // 0xdd3
        // metadata: MNetworkEnable
        Vector m_vHarpoonTarget; // 0xdd4        
        // metadata: MNetworkEnable
        float m_flLatchedYaw; // 0xde0        
        // metadata: MNetworkEnable
        entity2::GameTime_t m_flCloseEnoughStartTime; // 0xde4        
        // metadata: MNetworkEnable
        entity2::GameTime_t m_flStuckStartTime; // 0xde8        
        // metadata: MNetworkEnable
        entity2::GameTime_t m_flReelStartTime; // 0xdec        
        [[maybe_unused]] std::uint8_t pad_0xdf0[0x140];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CAbility_Fathom_ReefdwellerHarpoon because it is not a standard-layout class
    static_assert(sizeof(CAbility_Fathom_ReefdwellerHarpoon) == 0xf30);
};
