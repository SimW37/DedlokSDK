#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_BaseCombatCharacter.hpp"
#include "source2sdk/client/CitadelPortraitEnvironmentType_t.hpp"
#include "source2sdk/client/HeroID_t.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"
#include "source2sdk/client/StartupBehavior_t.hpp"

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
        // Size: 0x10e8
        // Has VTable
        // 
        // static metadata: MEntityAllowsPortraitWorldSpawn
        #pragma pack(push, 1)
        class C_PortraitWorldUnit : public source2sdk::client::C_BaseCombatCharacter
        {
        public:
            bool m_bSuppressIntroEffects; // 0xee0            
            bool m_bIsAlternateLoadout; // 0xee1            
            bool m_bSpawnBackgroundModels; // 0xee2            
            bool m_bAnimateCloth; // 0xee3            
            bool m_bDeferredPortrait; // 0xee4            
            bool m_bShowParticleAssetModifiers; // 0xee5            
            bool m_bIgnorePortraitInfo; // 0xee6            
            uint8_t _pad0ee7[0x1]; // 0xee7
            CUtlSymbolLarge m_BodyGroup; // 0xee8            
            float m_flStartingAnimationCycle; // 0xef0            
            float m_flRareLoadoutAnimChance; // 0xef4            
            uint8_t _pad0ef8[0x10]; // 0xef8
            source2sdk::client::CitadelPortraitEnvironmentType_t m_environment; // 0xf08            
            source2sdk::client::StartupBehavior_t m_nStartupBehavior; // 0xf0c            
            uint8_t _pad0f10[0x170]; // 0xf10
            CUtlSymbolLarge m_cameraName; // 0x1080            
            uint8_t _pad1088[0x30]; // 0x1088
            source2sdk::client::ParticleIndex_t m_nPortraitParticle; // 0x10b8            
            source2sdk::client::ParticleIndex_t m_nAmbientParticle; // 0x10bc            
            source2sdk::client::HeroID_t m_heroID; // 0x10c0            
            uint8_t _pad10c4[0x4]; // 0x10c4
            CUtlSymbolLarge m_strGraphBaseState; // 0x10c8            
            CUtlSymbolLarge m_sceneName; // 0x10d0            
            std::int32_t m_nThinksUntilPresent; // 0x10d8            
            uint8_t _pad10dc[0xc];
            
            // Datamap fields:
            // uint32_t heroid; // 0x7fffffff
            // bool skip_pet_spawn; // 0x7fffffff
            // int32_t model_index; // 0x7fffffff
            // bool StartDisabled; // 0x7fffffff
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_PortraitWorldUnit because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_PortraitWorldUnit) == 0x10e8);
    };
};
