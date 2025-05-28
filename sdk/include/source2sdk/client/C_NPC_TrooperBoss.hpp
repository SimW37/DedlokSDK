#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CCitadelPlayerClipComponent.hpp"
#include "source2sdk/client/C_NPC_Trooper.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x1790
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "CCitadelPlayerClipComponent::Storage_t m_CCitadelPlayerClipComponent"
        // static metadata: MNetworkVarNames "GameTime_t m_flFadeOutStart"
        // static metadata: MNetworkVarNames "GameTime_t m_flFadeOutEnd"
        #pragma pack(push, 1)
        class C_NPC_TrooperBoss : public source2sdk::client::C_NPC_Trooper
        {
        public:
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "CCitadelPlayerClipComponent"
            // metadata: MNetworkAlias "CCitadelPlayerClipComponent"
            // metadata: MNetworkTypeAlias "CCitadelPlayerClipComponent"
            source2sdk::client::CCitadelPlayerClipComponent m_CCitadelPlayerClipComponent; // 0x1758            
            uint8_t _pad1778[0xc]; // 0x1778
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_flFadeOutStart; // 0x1784            
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_flFadeOutEnd; // 0x1788            
            uint8_t _pad178c[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_NPC_TrooperBoss because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_NPC_TrooperBoss) == 0x1790);
    };
};
