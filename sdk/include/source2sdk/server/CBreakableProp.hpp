#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/BreakableContentsType_t.hpp"
#include "source2sdk/client/PerformanceMode_t.hpp"
#include "source2sdk/entity2/CEntityIOOutput.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/AI_VolumetricEventHandle_t.hpp"
#include "source2sdk/server/CBaseProp.hpp"
#include "source2sdk/server/CPropDataComponent.hpp"
namespace source2sdk
{
    namespace server
    {
        struct CBaseEntity;
    };
};
namespace source2sdk
{
    namespace server
    {
        struct CBasePlayerPawn;
    };
};

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Registered alignment: 0x10
        // Alignment: 0x10
        // Standard-layout class: false
        // Size: 0xc10
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "CPropDataComponent::Storage_t m_CPropDataComponent"
        #pragma pack(push, 1)
        class CBreakableProp : public source2sdk::server::CBaseProp
        {
        public:
            uint8_t _pad0ab0[0x8]; // 0xab0
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "CPropDataComponent"
            // metadata: MNetworkAlias "CPropDataComponent"
            // metadata: MNetworkTypeAlias "CPropDataComponent"
            source2sdk::server::CPropDataComponent m_CPropDataComponent; // 0xab8            
            source2sdk::entity2::CEntityIOOutput m_OnStartDeath; // 0xaf8            
            source2sdk::entity2::CEntityIOOutput m_OnBreak; // 0xb10            
            // m_OnHealthChanged has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEntityOutputTemplate<float> m_OnHealthChanged;
            char m_OnHealthChanged[0x20]; // 0xb28            
            source2sdk::entity2::CEntityIOOutput m_OnTakeDamage; // 0xb48            
            float m_impactEnergyScale; // 0xb60            
            std::int32_t m_iMinHealthDmg; // 0xb64            
            QAngle m_preferredCarryAngles; // 0xb68            
            float m_flPressureDelay; // 0xb74            
            float m_flDefBurstScale; // 0xb78            
            Vector m_vDefBurstOffset; // 0xb7c            
            // m_hBreaker has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hBreaker;
            char m_hBreaker[0x4]; // 0xb88            
            source2sdk::client::PerformanceMode_t m_PerformanceMode; // 0xb8c            
            source2sdk::entity2::GameTime_t m_flPreventDamageBeforeTime; // 0xb90            
            source2sdk::client::BreakableContentsType_t m_BreakableContentsType; // 0xb94            
            CUtlString m_strBreakableContentsPropGroupOverride; // 0xb98            
            CUtlString m_strBreakableContentsParticleOverride; // 0xba0            
            bool m_bHasBreakPiecesOrCommands; // 0xba8            
            uint8_t _pad0ba9[0x3]; // 0xba9
            float m_explodeDamage; // 0xbac            
            float m_explodeRadius; // 0xbb0            
            uint8_t _pad0bb4[0x4]; // 0xbb4
            CGlobalSymbol m_sExplosionType; // 0xbb8            
            float m_explosionDelay; // 0xbc0            
            uint8_t _pad0bc4[0x4]; // 0xbc4
            CUtlSymbolLarge m_explosionBuildupSound; // 0xbc8            
            CUtlSymbolLarge m_explosionCustomEffect; // 0xbd0            
            CUtlSymbolLarge m_explosionCustomSound; // 0xbd8            
            CUtlSymbolLarge m_explosionModifier; // 0xbe0            
            source2sdk::server::AI_VolumetricEventHandle_t m_explosionDangerSound; // 0xbe8            
            // m_hPhysicsAttacker has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBasePlayerPawn> m_hPhysicsAttacker;
            char m_hPhysicsAttacker[0x4]; // 0xbf0            
            source2sdk::entity2::GameTime_t m_flLastPhysicsInfluenceTime; // 0xbf4            
            float m_flDefaultFadeScale; // 0xbf8            
            // m_hLastAttacker has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hLastAttacker;
            char m_hLastAttacker[0x4]; // 0xbfc            
            CUtlSymbolLarge m_iszPuntSound; // 0xc00            
            bool m_bUsePuntSound; // 0xc08            
            bool m_bOriginalBlockLOS; // 0xc09            
            uint8_t _pad0c0a[0x6];
            
            // Datamap fields:
            // void InputBreak; // 0x0
            // int32_t InputSetHealth; // 0x0
            // int32_t InputAddHealth; // 0x0
            // int32_t InputRemoveHealth; // 0x0
            // bool InputSetEnableBreaking; // 0x0
            // bool InputSetEnableCollisions; // 0x0
            // bool InputSetNavIgnore; // 0x0
            // void InputEnablePuntSound; // 0x0
            // void InputDisablePuntSound; // 0x0
            // void CBreakablePropBreakThink; // 0x0
            // void CBreakablePropRampToDefaultFadeScale; // 0x0
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CBreakableProp because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CBreakableProp) == 0xc10);
    };
};
