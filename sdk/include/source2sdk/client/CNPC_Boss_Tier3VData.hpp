#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CAI_CitadelNPCVData.hpp"
#include "source2sdk/client/CBaseModifier.hpp"
#include "source2sdk/resourcesystem/InfoForResourceTypeCModel.hpp"
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
        // Size: 0x1a40
        // Has VTable
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CNPC_Boss_Tier3VData : public source2sdk::client::CAI_CitadelNPCVData
        {
        public:
            std::int32_t m_nPhase2Health; // 0x10f8            
            float m_flEyeZOffset; // 0x10fc            
            float m_flDefaultMoveSpeed; // 0x1100            
            float m_flNoShieldMoveSpeed; // 0x1104            
            float m_flDyingMoveSpeed; // 0x1108            
            float m_flMovingToFinalPositionSpeed; // 0x110c            
            float m_flEnemyTrooperProtectionRange; // 0x1110            
            uint8_t _pad1114[0x4]; // 0x1114
            // metadata: MPropertyStartGroup "Visuals"
            // m_DeathSmallExplosionParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_DeathSmallExplosionParticle;
            char m_DeathSmallExplosionParticle[0xe0]; // 0x1118            
            // m_DeathLargeExplosionParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_DeathLargeExplosionParticle;
            char m_DeathLargeExplosionParticle[0xe0]; // 0x11f8            
            // m_WeakpointBrokenExplosionParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_WeakpointBrokenExplosionParticle;
            char m_WeakpointBrokenExplosionParticle[0xe0]; // 0x12d8            
            // m_ChargeUpExplosionParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_ChargeUpExplosionParticle;
            char m_ChargeUpExplosionParticle[0xe0]; // 0x13b8            
            // m_strWIPModelName has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeCModel>> m_strWIPModelName;
            char m_strWIPModelName[0xe0]; // 0x1498            
            // metadata: MPropertyStartGroup "Sounds"
            CSoundEventName m_DyingSmallExplosion; // 0x1578            
            CSoundEventName m_PatronTransformStartSound; // 0x1588            
            CSoundEventName m_PatronTransformEndSound; // 0x1598            
            CSoundEventName m_PatronKilledSound; // 0x15a8            
            CSoundEventName m_TransformingLoopSound; // 0x15b8            
            CSoundEventName m_LaserSound; // 0x15c8            
            // metadata: MPropertyStartGroup "Modifiers"
            // m_LaserBeamModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::client::CBaseModifier> m_LaserBeamModifier;
            char m_LaserBeamModifier[0x10]; // 0x15d8            
            // m_DyingModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::client::CBaseModifier> m_DyingModifier;
            char m_DyingModifier[0x10]; // 0x15e8            
            // m_VulnerableModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::client::CBaseModifier> m_VulnerableModifier;
            char m_VulnerableModifier[0x10]; // 0x15f8            
            // m_Phase1Modifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::client::CBaseModifier> m_Phase1Modifier;
            char m_Phase1Modifier[0x10]; // 0x1608            
            // m_Phase2Modifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::client::CBaseModifier> m_Phase2Modifier;
            char m_Phase2Modifier[0x10]; // 0x1618            
            // m_BackdoorProtection has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::client::CBaseModifier> m_BackdoorProtection;
            char m_BackdoorProtection[0x10]; // 0x1628            
            // m_RangedArmorModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::client::CBaseModifier> m_RangedArmorModifier;
            char m_RangedArmorModifier[0x10]; // 0x1638            
            // m_ObjectiveRegen has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::client::CBaseModifier> m_ObjectiveRegen;
            char m_ObjectiveRegen[0x10]; // 0x1648            
            // m_ObjectiveHealthGrowthPhase1 has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::client::CBaseModifier> m_ObjectiveHealthGrowthPhase1;
            char m_ObjectiveHealthGrowthPhase1[0x10]; // 0x1658            
            // m_ObjectiveHealthGrowthPhase2 has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::client::CBaseModifier> m_ObjectiveHealthGrowthPhase2;
            char m_ObjectiveHealthGrowthPhase2[0x10]; // 0x1668            
            // m_EnemyTrooperDamageReduction has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::client::CBaseModifier> m_EnemyTrooperDamageReduction;
            char m_EnemyTrooperDamageReduction[0x10]; // 0x1678            
            // metadata: MPropertyStartGroup "Laser"
            // m_LaserChargingParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_LaserChargingParticle;
            char m_LaserChargingParticle[0xe0]; // 0x1688            
            // m_LaserBeamEffect has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_LaserBeamEffect;
            char m_LaserBeamEffect[0xe0]; // 0x1768            
            // m_LaserPreviewEffect has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_LaserPreviewEffect;
            char m_LaserPreviewEffect[0xe0]; // 0x1848            
            // m_LaserDamageEffect has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_LaserDamageEffect;
            char m_LaserDamageEffect[0xe0]; // 0x1928            
            float m_flLaserTargetingZOffset; // 0x1a08            
            float m_flLaserTrackingSpeed; // 0x1a0c            
            float m_flLaserTrackingMaxSpeed; // 0x1a10            
            float m_flLaserCastingTrackSpeed; // 0x1a14            
            float m_flLaserCastingTrackMaxSpeed; // 0x1a18            
            float m_flLaserDPSToPlayers; // 0x1a1c            
            float m_flLaserDPSToNPCs; // 0x1a20            
            float m_flLaserDPSMaxHealth; // 0x1a24            
            float m_flNoShieldLaserTrackingSpeed; // 0x1a28            
            float m_flNoShieldLaserTrackingMaxSpeed; // 0x1a2c            
            float m_flNoShieldLaserCastingTrackSpeed; // 0x1a30            
            float m_flNoShieldLaserCastingTrackMaxSpeed; // 0x1a34            
            float m_flNoShieldLaserDPSToPlayers; // 0x1a38            
            float m_flNoShieldLaserDPSToNPCs; // 0x1a3c            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CNPC_Boss_Tier3VData because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CNPC_Boss_Tier3VData) == 0x1a40);
    };
};
