#pragma once
#include "source2sdk/client/BreakableContentsType_t.hpp"
#include "source2sdk/client/PerformanceMode_t.hpp"
#include "source2sdk/entity2/CEntityIOOutput.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/CBaseProp.hpp"
#include "source2sdk/server/CPropDataComponent.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    class CBaseEntity;
};

namespace source2sdk::server
{
    class CBasePlayerPawn;
};

namespace source2sdk::server
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0xc88
    // Has VTable
    // 
    // static metadata: MNetworkVarNames "CPropDataComponent::Storage_t m_CPropDataComponent"
    #pragma pack(push, 1)
    class CBreakableProp : public server::CBaseProp
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0xaf8[0x8]; // 0xaf8
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "CPropDataComponent"
        // metadata: MNetworkAlias "CPropDataComponent"
        // metadata: MNetworkTypeAlias "CPropDataComponent"
        server::CPropDataComponent m_CPropDataComponent; // 0xb00        
        entity2::CEntityIOOutput m_OnStartDeath; // 0xb40        
        entity2::CEntityIOOutput m_OnBreak; // 0xb68        
        // m_OnHealthChanged has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEntityOutputTemplate<float> m_OnHealthChanged;
        char m_OnHealthChanged[0x28]; // 0xb90        
        entity2::CEntityIOOutput m_OnTakeDamage; // 0xbb8        
        float m_impactEnergyScale; // 0xbe0        
        int32_t m_iMinHealthDmg; // 0xbe4        
        QAngle m_preferredCarryAngles; // 0xbe8        
        float m_flPressureDelay; // 0xbf4        
        float m_flDefBurstScale; // 0xbf8        
        Vector m_vDefBurstOffset; // 0xbfc        
        // m_hBreaker has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hBreaker;
        char m_hBreaker[0x4]; // 0xc08        
        client::PerformanceMode_t m_PerformanceMode; // 0xc0c        
        entity2::GameTime_t m_flPreventDamageBeforeTime; // 0xc10        
        client::BreakableContentsType_t m_BreakableContentsType; // 0xc14        
        CUtlString m_strBreakableContentsPropGroupOverride; // 0xc18        
        CUtlString m_strBreakableContentsParticleOverride; // 0xc20        
        bool m_bHasBreakPiecesOrCommands; // 0xc28        
        [[maybe_unused]] std::uint8_t pad_0xc29[0x3]; // 0xc29
        float m_explodeDamage; // 0xc2c        
        float m_explodeRadius; // 0xc30        
        [[maybe_unused]] std::uint8_t pad_0xc34[0x4]; // 0xc34
        float m_explosionDelay; // 0xc38        
        [[maybe_unused]] std::uint8_t pad_0xc3c[0x4]; // 0xc3c
        CUtlSymbolLarge m_explosionBuildupSound; // 0xc40        
        CUtlSymbolLarge m_explosionCustomEffect; // 0xc48        
        CUtlSymbolLarge m_explosionCustomSound; // 0xc50        
        CUtlSymbolLarge m_explosionModifier; // 0xc58        
        int32_t m_explosionDangerSound; // 0xc60        
        // m_hPhysicsAttacker has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBasePlayerPawn> m_hPhysicsAttacker;
        char m_hPhysicsAttacker[0x4]; // 0xc64        
        entity2::GameTime_t m_flLastPhysicsInfluenceTime; // 0xc68        
        float m_flDefaultFadeScale; // 0xc6c        
        // m_hLastAttacker has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hLastAttacker;
        char m_hLastAttacker[0x4]; // 0xc70        
        [[maybe_unused]] std::uint8_t pad_0xc74[0x4]; // 0xc74
        CUtlSymbolLarge m_iszPuntSound; // 0xc78        
        bool m_bUsePuntSound; // 0xc80        
        bool m_bOriginalBlockLOS; // 0xc81        
        [[maybe_unused]] std::uint8_t pad_0xc82[0x6];
        
        // Datamap fields:
        // void InputBreak; // 0x0
        // int32_t InputSetHealth; // 0x0
        // int32_t InputAddHealth; // 0x0
        // int32_t InputRemoveHealth; // 0x0
        // bool InputSetNavIgnore; // 0x0
        // void InputEnablePuntSound; // 0x0
        // void InputDisablePuntSound; // 0x0
        // void CBreakablePropBreakThink; // 0x0
        // void CBreakablePropRampToDefaultFadeScale; // 0x0
        // uint32_t m_nExplosionType; // 0xc34
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CBreakableProp because it is not a standard-layout class
    static_assert(sizeof(CBreakableProp) == 0xc88);
};
