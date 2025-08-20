#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CitadelCameraOperationsSequence_t.hpp"
#include "source2sdk/resourcesystem/InfoForResourceTypeIParticleSystemDefinition.hpp"
#include "source2sdk/server/CBaseModifier.hpp"
#include "source2sdk/server/CCitadelYamatoBaseVData.hpp"

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x1cb0
        // Has VTable
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CCitadelAbilityFlyingStrikeVData : public source2sdk::server::CCitadelYamatoBaseVData
        {
        public:
            // metadata: MPropertyStartGroup "+Cast Properties"
            float m_flJumpFallSpeedMax; // 0x1620            
            float m_flJumpAirDrag; // 0x1624            
            float m_flJumpAirSpeedMax; // 0x1628            
            // metadata: MPropertyStartGroup "+Flying to Target Properties"
            // metadata: MPropertyDescription "When cancelling flying strike while flying, how much extra vertical speed to add"
            float m_flOnCancelVerticalSpeedBonus; // 0x162c            
            float m_flFlyingCloseEnoughToTarget; // 0x1630            
            uint8_t _pad1634[0x4]; // 0x1634
            CPiecewiseCurve m_curveSpeedScale; // 0x1638            
            // metadata: MPropertyStartGroup "+Attack Properties"
            float m_flAnimToStrikePointTime; // 0x1678            
            float m_flAnimToStrikeArrivalBias; // 0x167c            
            // metadata: MPropertyStartGroup "+Grapple Properties"
            float m_flGrappleShotFloatTime; // 0x1680            
            float m_flGrappleShotDelayToFlyOnHit; // 0x1684            
            float m_flGrappleSpeed; // 0x1688            
            uint8_t _pad168c[0x4]; // 0x168c
            // metadata: MPropertyStartGroup "Modifiers"
            // m_SlowModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::server::CBaseModifier> m_SlowModifier;
            char m_SlowModifier[0x10]; // 0x1690            
            // m_GrappleTargetModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::server::CBaseModifier> m_GrappleTargetModifier;
            char m_GrappleTargetModifier[0x10]; // 0x16a0            
            // m_WeaponBuffModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::server::CBaseModifier> m_WeaponBuffModifier;
            char m_WeaponBuffModifier[0x10]; // 0x16b0            
            // metadata: MPropertyStartGroup "Visuals"
            // m_LeapParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_LeapParticle;
            char m_LeapParticle[0xe0]; // 0x16c0            
            // m_ImpactParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_ImpactParticle;
            char m_ImpactParticle[0xe0]; // 0x17a0            
            // m_SlashParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_SlashParticle;
            char m_SlashParticle[0xe0]; // 0x1880            
            // m_BulletGrappleTracerParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_BulletGrappleTracerParticle;
            char m_BulletGrappleTracerParticle[0xe0]; // 0x1960            
            // m_EnemyGrappleParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_EnemyGrappleParticle;
            char m_EnemyGrappleParticle[0xe0]; // 0x1a40            
            // metadata: MPropertyStartGroup "Sounds"
            CSoundEventName m_strDamageTarget; // 0x1b20            
            CSoundEventName m_strStartFlyingToTarget; // 0x1b30            
            CSoundEventName m_strStartAttack; // 0x1b40            
            CSoundEventName m_strGrappleHitTarget; // 0x1b50            
            CSoundEventName m_strGrappleHitWorld; // 0x1b60            
            CSoundEventName m_strGrappleHitNothing; // 0x1b70            
            CSoundEventName m_strGrappleLoop; // 0x1b80            
            CSoundEventName m_strFlyingLoop; // 0x1b90            
            // metadata: MPropertyStartGroup "Camera"
            source2sdk::client::CitadelCameraOperationsSequence_t m_cameraSequenceFlying; // 0x1ba0            
            source2sdk::client::CitadelCameraOperationsSequence_t m_cameraSequenceAttacking; // 0x1c28            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadelAbilityFlyingStrikeVData because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadelAbilityFlyingStrikeVData) == 0x1cb0);
    };
};
