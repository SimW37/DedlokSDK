#pragma once
#include "source2sdk/client/C_BaseCombatCharacter.hpp"
#include "source2sdk/client/CitadelPortraitEnvironmentType_t.hpp"
#include "source2sdk/client/HeroID_t.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"
#include "source2sdk/client/StartupBehavior_t.hpp"
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
    // Size: 0x1158
    // Has VTable
    // 
    // static metadata: MEntityAllowsPortraitWorldSpawn
    #pragma pack(push, 1)
    class C_PortraitWorldUnit : public client::C_BaseCombatCharacter
    {
    public:
        bool m_bSuppressIntroEffects; // 0xf48        
        bool m_bIsAlternateLoadout; // 0xf49        
        bool m_bSpawnBackgroundModels; // 0xf4a        
        bool m_bDeferredPortrait; // 0xf4b        
        bool m_bShowParticleAssetModifiers; // 0xf4c        
        bool m_bIgnorePortraitInfo; // 0xf4d        
        bool m_bFlyingCourier; // 0xf4e        
        [[maybe_unused]] std::uint8_t pad_0xf4f[0x1]; // 0xf4f
        int32_t m_nEffigyStatusEffect; // 0xf50        
        [[maybe_unused]] std::uint8_t pad_0xf54[0x4]; // 0xf54
        CUtlSymbolLarge m_effigySequenceName; // 0xf58        
        CUtlSymbolLarge m_BodyGroup; // 0xf60        
        float m_flStartingAnimationCycle; // 0xf68        
        float m_flRareLoadoutAnimChance; // 0xf6c        
        [[maybe_unused]] std::uint8_t pad_0xf70[0x10]; // 0xf70
        client::CitadelPortraitEnvironmentType_t m_environment; // 0xf80        
        client::StartupBehavior_t m_nStartupBehavior; // 0xf84        
        [[maybe_unused]] std::uint8_t pad_0xf88[0x170]; // 0xf88
        CUtlSymbolLarge m_cameraName; // 0x10f8        
        [[maybe_unused]] std::uint8_t pad_0x1100[0x30]; // 0x1100
        client::ParticleIndex_t m_nPortraitParticle; // 0x1130        
        client::ParticleIndex_t m_nAmbientParticle; // 0x1134        
        int32_t m_nCourierType; // 0x1138        
        client::HeroID_t m_heroID; // 0x113c        
        CUtlSymbolLarge m_heroAnimGraphEnumName; // 0x1140        
        CUtlSymbolLarge m_heroShopAnimGraphEnumName; // 0x1148        
        CUtlSymbolLarge m_sceneName; // 0x1150        
        
        // Datamap fields:
        // uint32_t heroid; // 0x7fffffff
        // bool skip_pet_spawn; // 0x7fffffff
        // int32_t model_index; // 0x7fffffff
        // bool StartDisabled; // 0x7fffffff
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_PortraitWorldUnit because it is not a standard-layout class
    static_assert(sizeof(C_PortraitWorldUnit) == 0x1158);
};
