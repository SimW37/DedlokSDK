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
        // Size: 0x1cb8
        // Has VTable
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CCitadelAbilityFlyingStrikeVData : public source2sdk::server::CCitadelYamatoBaseVData
        {
        public:
            // metadata: MPropertyStartGroup "+Cast Properties"
            float m_flJumpFallSpeedMax; // 0x1628            
            float m_flJumpAirDrag; // 0x162c            
            float m_flJumpAirSpeedMax; // 0x1630            
            // metadata: MPropertyStartGroup "+Flying to Target Properties"
            // metadata: MPropertyDescription "When cancelling flying strike while flying, how much extra vertical speed to add"
            float m_flOnCancelVerticalSpeedBonus; // 0x1634            
            float m_flFlyingCloseEnoughToTarget; // 0x1638            
            uint8_t _pad163c[0x4]; // 0x163c
            CPiecewiseCurve m_curveSpeedScale; // 0x1640            
            // metadata: MPropertyStartGroup "+Attack Properties"
            float m_flAnimToStrikePointTime; // 0x1680            
            float m_flAnimToStrikeArrivalBias; // 0x1684            
            // metadata: MPropertyStartGroup "+Grapple Properties"
            float m_flGrappleShotFloatTime; // 0x1688            
            float m_flGrappleShotDelayToFlyOnHit; // 0x168c            
            float m_flGrappleSpeed; // 0x1690            
            uint8_t _pad1694[0x4]; // 0x1694
            // metadata: MPropertyStartGroup "Modifiers"
            // m_SlowModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::server::CBaseModifier> m_SlowModifier;
            char m_SlowModifier[0x10]; // 0x1698            
            // m_GrappleTargetModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::server::CBaseModifier> m_GrappleTargetModifier;
            char m_GrappleTargetModifier[0x10]; // 0x16a8            
            // m_WeaponBuffModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::server::CBaseModifier> m_WeaponBuffModifier;
            char m_WeaponBuffModifier[0x10]; // 0x16b8            
            // metadata: MPropertyStartGroup "Visuals"
            // m_LeapParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_LeapParticle;
            char m_LeapParticle[0xe0]; // 0x16c8            
            // m_ImpactParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_ImpactParticle;
            char m_ImpactParticle[0xe0]; // 0x17a8            
            // m_SlashParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_SlashParticle;
            char m_SlashParticle[0xe0]; // 0x1888            
            // m_BulletGrappleTracerParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_BulletGrappleTracerParticle;
            char m_BulletGrappleTracerParticle[0xe0]; // 0x1968            
            // m_EnemyGrappleParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_EnemyGrappleParticle;
            char m_EnemyGrappleParticle[0xe0]; // 0x1a48            
            // metadata: MPropertyStartGroup "Sounds"
            CSoundEventName m_strDamageTarget; // 0x1b28            
            CSoundEventName m_strStartFlyingToTarget; // 0x1b38            
            CSoundEventName m_strStartAttack; // 0x1b48            
            CSoundEventName m_strGrappleHitTarget; // 0x1b58            
            CSoundEventName m_strGrappleHitWorld; // 0x1b68            
            CSoundEventName m_strGrappleHitNothing; // 0x1b78            
            CSoundEventName m_strGrappleLoop; // 0x1b88            
            CSoundEventName m_strFlyingLoop; // 0x1b98            
            // metadata: MPropertyStartGroup "Camera"
            source2sdk::client::CitadelCameraOperationsSequence_t m_cameraSequenceFlying; // 0x1ba8            
            source2sdk::client::CitadelCameraOperationsSequence_t m_cameraSequenceAttacking; // 0x1c30            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadelAbilityFlyingStrikeVData because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadelAbilityFlyingStrikeVData) == 0x1cb8);
    };
};
