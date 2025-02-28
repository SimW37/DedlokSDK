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
    // Size: 0xc38
    // Has VTable
    // 
    // static metadata: MNetworkVarNames "CPropDataComponent::Storage_t m_CPropDataComponent"
    #pragma pack(push, 1)
    class CBreakableProp : public server::CBaseProp
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0xad0[0x8]; // 0xad0
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "CPropDataComponent"
        // metadata: MNetworkAlias "CPropDataComponent"
        // metadata: MNetworkTypeAlias "CPropDataComponent"
        server::CPropDataComponent m_CPropDataComponent; // 0xad8        
        entity2::CEntityIOOutput m_OnBreak; // 0xb18        
        // m_OnHealthChanged has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEntityOutputTemplate<float> m_OnHealthChanged;
        char m_OnHealthChanged[0x28]; // 0xb40        
        entity2::CEntityIOOutput m_OnTakeDamage; // 0xb68        
        float m_impactEnergyScale; // 0xb90        
        int32_t m_iMinHealthDmg; // 0xb94        
        QAngle m_preferredCarryAngles; // 0xb98        
        float m_flPressureDelay; // 0xba4        
        float m_flDefBurstScale; // 0xba8        
        Vector m_vDefBurstOffset; // 0xbac        
        // m_hBreaker has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hBreaker;
        char m_hBreaker[0x4]; // 0xbb8        
        client::PerformanceMode_t m_PerformanceMode; // 0xbbc        
        entity2::GameTime_t m_flPreventDamageBeforeTime; // 0xbc0        
        client::BreakableContentsType_t m_BreakableContentsType; // 0xbc4        
        CUtlString m_strBreakableContentsPropGroupOverride; // 0xbc8        
        CUtlString m_strBreakableContentsParticleOverride; // 0xbd0        
        bool m_bHasBreakPiecesOrCommands; // 0xbd8        
        [[maybe_unused]] std::uint8_t pad_0xbd9[0x3]; // 0xbd9
        float m_explodeDamage; // 0xbdc        
        float m_explodeRadius; // 0xbe0        
        [[maybe_unused]] std::uint8_t pad_0xbe4[0x4]; // 0xbe4
        float m_explosionDelay; // 0xbe8        
        [[maybe_unused]] std::uint8_t pad_0xbec[0x4]; // 0xbec
        CUtlSymbolLarge m_explosionBuildupSound; // 0xbf0        
        CUtlSymbolLarge m_explosionCustomEffect; // 0xbf8        
        CUtlSymbolLarge m_explosionCustomSound; // 0xc00        
        CUtlSymbolLarge m_explosionModifier; // 0xc08        
        int32_t m_explosionDangerSound; // 0xc10        
        // m_hPhysicsAttacker has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBasePlayerPawn> m_hPhysicsAttacker;
        char m_hPhysicsAttacker[0x4]; // 0xc14        
        entity2::GameTime_t m_flLastPhysicsInfluenceTime; // 0xc18        
        bool m_bOriginalBlockLOS; // 0xc1c        
        [[maybe_unused]] std::uint8_t pad_0xc1d[0x3]; // 0xc1d
        float m_flDefaultFadeScale; // 0xc20        
        // m_hLastAttacker has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hLastAttacker;
        char m_hLastAttacker[0x4]; // 0xc24        
        bool m_bUsePuntSound; // 0xc28        
        [[maybe_unused]] std::uint8_t pad_0xc29[0x7]; // 0xc29
        CUtlSymbolLarge m_iszPuntSound; // 0xc30        
        
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
        // uint32_t m_nExplosionType; // 0xbe4
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CBreakableProp because it is not a standard-layout class
    static_assert(sizeof(CBreakableProp) == 0xc38);
};
