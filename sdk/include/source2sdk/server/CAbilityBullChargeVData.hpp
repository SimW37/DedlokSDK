#pragma once
#include "source2sdk/client/CitadelCameraOperationsSequence_t.hpp"
#include "source2sdk/resourcesystem/InfoForResourceTypeIParticleSystemDefinition.hpp"
#include "source2sdk/server/CBaseModifier.hpp"
#include "source2sdk/server/CitadelAbilityVData.hpp"
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
    // Size: 0x17c0
    // Has VTable
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CAbilityBullChargeVData : public server::CitadelAbilityVData
    {
    public:
        // metadata: MPropertyStartGroup "Camera"
        client::CitadelCameraOperationsSequence_t m_cameraSequenceImpact; // 0x15f0        
        // metadata: MPropertyStartGroup "Modifiers"
        // m_ModifierTossAirControlLockout has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<server::CBaseModifier> m_ModifierTossAirControlLockout;
        char m_ModifierTossAirControlLockout[0x10]; // 0x1678        
        // m_ModifierWeaponPowerIncrease has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<server::CBaseModifier> m_ModifierWeaponPowerIncrease;
        char m_ModifierWeaponPowerIncrease[0x10]; // 0x1688        
        // m_ModifierChargeDragEnemy has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<server::CBaseModifier> m_ModifierChargeDragEnemy;
        char m_ModifierChargeDragEnemy[0x10]; // 0x1698        
        // m_ModifierBullCharging has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<server::CBaseModifier> m_ModifierBullCharging;
        char m_ModifierBullCharging[0x10]; // 0x16a8        
        // m_SlowModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<server::CBaseModifier> m_SlowModifier;
        char m_SlowModifier[0x10]; // 0x16b8        
        // metadata: MPropertyStartGroup "Visuals"
        // m_WallImpactParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_WallImpactParticle;
        char m_WallImpactParticle[0xe0]; // 0x16c8        
        // metadata: MPropertyStartGroup "Sounds"
        CSoundEventName m_strWallSlamSound; // 0x17a8        
        // metadata: MPropertyStartGroup "GamePlay"
        float m_flWallStunLookAheadDist; // 0x17b8        
        float m_flEndChargeVelocityScale; // 0x17bc        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CAbilityBullChargeVData because it is not a standard-layout class
    static_assert(sizeof(CAbilityBullChargeVData) == 0x17c0);
};
