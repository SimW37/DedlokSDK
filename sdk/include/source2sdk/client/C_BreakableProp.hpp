#pragma once
#include "source2sdk/client/BreakableContentsType_t.hpp"
#include "source2sdk/client/CBaseProp.hpp"
#include "source2sdk/client/CPropDataComponent.hpp"
#include "source2sdk/client/PerformanceMode_t.hpp"
#include "source2sdk/entity2/CEntityIOOutput.hpp"
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
    class C_BasePlayerPawn;
};

namespace source2sdk::client
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0xe60
    // Has VTable
    // 
    // static metadata: MNetworkVarNames "CPropDataComponent::Storage_t m_CPropDataComponent"
    #pragma pack(push, 1)
    class C_BreakableProp : public client::CBaseProp
    {
    public:
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "CPropDataComponent"
        // metadata: MNetworkAlias "CPropDataComponent"
        // metadata: MNetworkTypeAlias "CPropDataComponent"
        client::CPropDataComponent m_CPropDataComponent; // 0xcf0        
        entity2::CEntityIOOutput m_OnStartDeath; // 0xd30        
        entity2::CEntityIOOutput m_OnBreak; // 0xd58        
        // m_OnHealthChanged has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEntityOutputTemplate<float> m_OnHealthChanged;
        char m_OnHealthChanged[0x28]; // 0xd80        
        entity2::CEntityIOOutput m_OnTakeDamage; // 0xda8        
        float m_impactEnergyScale; // 0xdd0        
        int32_t m_iMinHealthDmg; // 0xdd4        
        float m_flPressureDelay; // 0xdd8        
        float m_flDefBurstScale; // 0xddc        
        Vector m_vDefBurstOffset; // 0xde0        
        // m_hBreaker has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<client::C_BaseEntity> m_hBreaker;
        char m_hBreaker[0x4]; // 0xdec        
        client::PerformanceMode_t m_PerformanceMode; // 0xdf0        
        entity2::GameTime_t m_flPreventDamageBeforeTime; // 0xdf4        
        client::BreakableContentsType_t m_BreakableContentsType; // 0xdf8        
        [[maybe_unused]] std::uint8_t pad_0xdfc[0x4]; // 0xdfc
        CUtlString m_strBreakableContentsPropGroupOverride; // 0xe00        
        CUtlString m_strBreakableContentsParticleOverride; // 0xe08        
        bool m_bHasBreakPiecesOrCommands; // 0xe10        
        [[maybe_unused]] std::uint8_t pad_0xe11[0x3]; // 0xe11
        float m_explodeDamage; // 0xe14        
        float m_explodeRadius; // 0xe18        
        [[maybe_unused]] std::uint8_t pad_0xe1c[0x4]; // 0xe1c
        float m_explosionDelay; // 0xe20        
        [[maybe_unused]] std::uint8_t pad_0xe24[0x4]; // 0xe24
        CUtlSymbolLarge m_explosionBuildupSound; // 0xe28        
        CUtlSymbolLarge m_explosionCustomEffect; // 0xe30        
        CUtlSymbolLarge m_explosionCustomSound; // 0xe38        
        CUtlSymbolLarge m_explosionModifier; // 0xe40        
        int32_t m_explosionDangerSound; // 0xe48        
        // m_hPhysicsAttacker has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<client::C_BasePlayerPawn> m_hPhysicsAttacker;
        char m_hPhysicsAttacker[0x4]; // 0xe4c        
        entity2::GameTime_t m_flLastPhysicsInfluenceTime; // 0xe50        
        float m_flDefaultFadeScale; // 0xe54        
        // m_hLastAttacker has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<client::C_BaseEntity> m_hLastAttacker;
        char m_hLastAttacker[0x4]; // 0xe58        
        [[maybe_unused]] std::uint8_t pad_0xe5c[0x4];
        
        // Datamap fields:
        // void InputBreak; // 0x0
        // int32_t InputSetHealth; // 0x0
        // int32_t InputAddHealth; // 0x0
        // int32_t InputRemoveHealth; // 0x0
        // void C_BreakablePropBreakThink; // 0x0
        // void C_BreakablePropRampToDefaultFadeScale; // 0x0
        // uint32_t m_nExplosionType; // 0xe1c
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_BreakableProp because it is not a standard-layout class
    static_assert(sizeof(C_BreakableProp) == 0xe60);
};
