#pragma once
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/CCitadelPlayerClipComponent.hpp"
#include "source2sdk/server/CNPC_Trooper.hpp"
#include "source2sdk/server/LaneSide_t.hpp"
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
    // Size: 0x1cc0
    // Has VTable
    // 
    // static metadata: MNetworkVarNames "CCitadelPlayerClipComponent::Storage_t m_CCitadelPlayerClipComponent"
    // static metadata: MNetworkVarNames "GameTime_t m_flFadeOutStart"
    // static metadata: MNetworkVarNames "GameTime_t m_flFadeOutEnd"
    #pragma pack(push, 1)
    class CNPC_TrooperBoss : public server::CNPC_Trooper
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x1aa8[0x18]; // 0x1aa8
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "CCitadelPlayerClipComponent"
        // metadata: MNetworkAlias "CCitadelPlayerClipComponent"
        // metadata: MNetworkTypeAlias "CCitadelPlayerClipComponent"
        server::CCitadelPlayerClipComponent m_CCitadelPlayerClipComponent; // 0x1ac0        
        [[maybe_unused]] std::uint8_t pad_0x1ae0[0x8]; // 0x1ae0
        server::LaneSide_t m_LaneSide; // 0x1ae8        
        [[maybe_unused]] std::uint8_t pad_0x1ae9[0x1cf]; // 0x1ae9
        // metadata: MNetworkEnable
        entity2::GameTime_t m_flFadeOutStart; // 0x1cb8        
        // metadata: MNetworkEnable
        entity2::GameTime_t m_flFadeOutEnd; // 0x1cbc        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CNPC_TrooperBoss because it is not a standard-layout class
    static_assert(sizeof(CNPC_TrooperBoss) == 0x1cc0);
};
