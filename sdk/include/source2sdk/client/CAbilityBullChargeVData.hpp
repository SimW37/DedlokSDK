#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CBaseModifier.hpp"
#include "source2sdk/client/CitadelAbilityVData.hpp"
#include "source2sdk/client/CitadelCameraOperationsSequence_t.hpp"
#include "source2sdk/resourcesystem/InfoForResourceTypeIParticleSystemDefinition.hpp"

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
        // Size: 0x17b8
        // Has VTable
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CAbilityBullChargeVData : public source2sdk::client::CitadelAbilityVData
        {
        public:
            // metadata: MPropertyStartGroup "Camera"
            source2sdk::client::CitadelCameraOperationsSequence_t m_cameraSequenceImpact; // 0x15e8            
            // metadata: MPropertyStartGroup "Modifiers"
            // m_ModifierTossAirControlLockout has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::client::CBaseModifier> m_ModifierTossAirControlLockout;
            char m_ModifierTossAirControlLockout[0x10]; // 0x1670            
            // m_ModifierWeaponPowerIncrease has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::client::CBaseModifier> m_ModifierWeaponPowerIncrease;
            char m_ModifierWeaponPowerIncrease[0x10]; // 0x1680            
            // m_ModifierChargeDragEnemy has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::client::CBaseModifier> m_ModifierChargeDragEnemy;
            char m_ModifierChargeDragEnemy[0x10]; // 0x1690            
            // m_ModifierBullCharging has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::client::CBaseModifier> m_ModifierBullCharging;
            char m_ModifierBullCharging[0x10]; // 0x16a0            
            // m_SlowModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::client::CBaseModifier> m_SlowModifier;
            char m_SlowModifier[0x10]; // 0x16b0            
            // metadata: MPropertyStartGroup "Visuals"
            // m_WallImpactParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_WallImpactParticle;
            char m_WallImpactParticle[0xe0]; // 0x16c0            
            // metadata: MPropertyStartGroup "Sounds"
            CSoundEventName m_strWallSlamSound; // 0x17a0            
            // metadata: MPropertyStartGroup "GamePlay"
            float m_flWallStunLookAheadDist; // 0x17b0            
            float m_flEndChargeVelocityScale; // 0x17b4            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CAbilityBullChargeVData because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CAbilityBullChargeVData) == 0x17b8);
    };
};
