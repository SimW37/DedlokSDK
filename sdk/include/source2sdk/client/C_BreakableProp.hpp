#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/BreakableContentsType_t.hpp"
#include "source2sdk/client/CBaseProp.hpp"
#include "source2sdk/client/CPropDataComponent.hpp"
#include "source2sdk/client/PerformanceMode_t.hpp"
#include "source2sdk/entity2/CEntityIOOutput.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
namespace source2sdk
{
    namespace client
    {
        struct C_BaseEntity;
    };
};
namespace source2sdk
{
    namespace client
    {
        struct C_BasePlayerPawn;
    };
};

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: 0x10
        // Alignment: 0x10
        // Standard-layout class: false
        // Size: 0xe10
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "CPropDataComponent::Storage_t m_CPropDataComponent"
        #pragma pack(push, 1)
        class C_BreakableProp : public source2sdk::client::CBaseProp
        {
        public:
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "CPropDataComponent"
            // metadata: MNetworkAlias "CPropDataComponent"
            // metadata: MNetworkTypeAlias "CPropDataComponent"
            source2sdk::client::CPropDataComponent m_CPropDataComponent; // 0xcd0            
            source2sdk::entity2::CEntityIOOutput m_OnStartDeath; // 0xd10            
            source2sdk::entity2::CEntityIOOutput m_OnBreak; // 0xd28            
            // m_OnHealthChanged has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEntityOutputTemplate<float> m_OnHealthChanged;
            char m_OnHealthChanged[0x20]; // 0xd40            
            source2sdk::entity2::CEntityIOOutput m_OnTakeDamage; // 0xd60            
            float m_impactEnergyScale; // 0xd78            
            std::int32_t m_iMinHealthDmg; // 0xd7c            
            float m_flPressureDelay; // 0xd80            
            float m_flDefBurstScale; // 0xd84            
            Vector m_vDefBurstOffset; // 0xd88            
            // m_hBreaker has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_hBreaker;
            char m_hBreaker[0x4]; // 0xd94            
            source2sdk::client::PerformanceMode_t m_PerformanceMode; // 0xd98            
            source2sdk::entity2::GameTime_t m_flPreventDamageBeforeTime; // 0xd9c            
            source2sdk::client::BreakableContentsType_t m_BreakableContentsType; // 0xda0            
            uint8_t _pad0da4[0x4]; // 0xda4
            CUtlString m_strBreakableContentsPropGroupOverride; // 0xda8            
            CUtlString m_strBreakableContentsParticleOverride; // 0xdb0            
            bool m_bHasBreakPiecesOrCommands; // 0xdb8            
            uint8_t _pad0db9[0x3]; // 0xdb9
            float m_explodeDamage; // 0xdbc            
            float m_explodeRadius; // 0xdc0            
            uint8_t _pad0dc4[0x4]; // 0xdc4
            CGlobalSymbol m_sExplosionType; // 0xdc8            
            float m_explosionDelay; // 0xdd0            
            uint8_t _pad0dd4[0x4]; // 0xdd4
            CUtlSymbolLarge m_explosionBuildupSound; // 0xdd8            
            CUtlSymbolLarge m_explosionCustomEffect; // 0xde0            
            CUtlSymbolLarge m_explosionCustomSound; // 0xde8            
            CUtlSymbolLarge m_explosionModifier; // 0xdf0            
            // m_hPhysicsAttacker has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BasePlayerPawn> m_hPhysicsAttacker;
            char m_hPhysicsAttacker[0x4]; // 0xdf8            
            source2sdk::entity2::GameTime_t m_flLastPhysicsInfluenceTime; // 0xdfc            
            float m_flDefaultFadeScale; // 0xe00            
            // m_hLastAttacker has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_hLastAttacker;
            char m_hLastAttacker[0x4]; // 0xe04            
            uint8_t _pad0e08[0x8];
            
            // Datamap fields:
            // void InputBreak; // 0x0
            // int32_t InputSetHealth; // 0x0
            // int32_t InputAddHealth; // 0x0
            // int32_t InputRemoveHealth; // 0x0
            // bool InputSetEnableBreaking; // 0x0
            // bool InputSetEnableCollisions; // 0x0
            // void C_BreakablePropBreakThink; // 0x0
            // void C_BreakablePropRampToDefaultFadeScale; // 0x0
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_BreakableProp because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_BreakableProp) == 0xe10);
    };
};
