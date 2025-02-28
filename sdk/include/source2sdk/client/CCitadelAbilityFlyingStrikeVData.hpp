#pragma once
#include "source2sdk/client/CBaseModifier.hpp"
#include "source2sdk/client/CCitadelYamatoBaseVData.hpp"
#include "source2sdk/client/CitadelCameraOperationsSequence_t.hpp"
#include "source2sdk/resourcesystem/InfoForResourceTypeIParticleSystemDefinition.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x1c60
    // Has VTable
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CCitadelAbilityFlyingStrikeVData : public client::CCitadelYamatoBaseVData
    {
    public:
        // metadata: MPropertyStartGroup "+Cast Properties"
        float m_flJumpFallSpeedMax; // 0x15d0        
        float m_flJumpAirDrag; // 0x15d4        
        float m_flJumpAirSpeedMax; // 0x15d8        
        // metadata: MPropertyStartGroup "+Flying to Target Properties"
        // metadata: MPropertyDescription "When cancelling flying strike while flying, how much extra vertical speed to add"
        float m_flOnCancelVerticalSpeedBonus; // 0x15dc        
        float m_flFlyingCloseEnoughToTarget; // 0x15e0        
        [[maybe_unused]] std::uint8_t pad_0x15e4[0x4]; // 0x15e4
        CPiecewiseCurve m_curveSpeedScale; // 0x15e8        
        // metadata: MPropertyStartGroup "+Attack Properties"
        float m_flAnimToStrikePointTime; // 0x1628        
        float m_flAnimToStrikeArrivalBias; // 0x162c        
        // metadata: MPropertyStartGroup "+Grapple Properties"
        float m_flGrappleShotFloatTime; // 0x1630        
        float m_flGrappleShotDelayToFlyOnHit; // 0x1634        
        float m_flGrappleSpeed; // 0x1638        
        [[maybe_unused]] std::uint8_t pad_0x163c[0x4]; // 0x163c
        // metadata: MPropertyStartGroup "Modifiers"
        // m_SlowModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<client::CBaseModifier> m_SlowModifier;
        char m_SlowModifier[0x10]; // 0x1640        
        // m_GrappleTargetModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<client::CBaseModifier> m_GrappleTargetModifier;
        char m_GrappleTargetModifier[0x10]; // 0x1650        
        // m_WeaponBuffModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<client::CBaseModifier> m_WeaponBuffModifier;
        char m_WeaponBuffModifier[0x10]; // 0x1660        
        // metadata: MPropertyStartGroup "Visuals"
        // m_LeapParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_LeapParticle;
        char m_LeapParticle[0xe0]; // 0x1670        
        // m_ImpactParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_ImpactParticle;
        char m_ImpactParticle[0xe0]; // 0x1750        
        // m_SlashParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_SlashParticle;
        char m_SlashParticle[0xe0]; // 0x1830        
        // m_BulletGrappleTracerParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_BulletGrappleTracerParticle;
        char m_BulletGrappleTracerParticle[0xe0]; // 0x1910        
        // m_EnemyGrappleParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_EnemyGrappleParticle;
        char m_EnemyGrappleParticle[0xe0]; // 0x19f0        
        // metadata: MPropertyStartGroup "Sounds"
        CSoundEventName m_strDamageTarget; // 0x1ad0        
        CSoundEventName m_strStartFlyingToTarget; // 0x1ae0        
        CSoundEventName m_strStartAttack; // 0x1af0        
        CSoundEventName m_strGrappleHitTarget; // 0x1b00        
        CSoundEventName m_strGrappleHitWorld; // 0x1b10        
        CSoundEventName m_strGrappleHitNothing; // 0x1b20        
        CSoundEventName m_strGrappleLoop; // 0x1b30        
        CSoundEventName m_strFlyingLoop; // 0x1b40        
        // metadata: MPropertyStartGroup "Camera"
        client::CitadelCameraOperationsSequence_t m_cameraSequenceFlying; // 0x1b50        
        client::CitadelCameraOperationsSequence_t m_cameraSequenceAttacking; // 0x1bd8        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadelAbilityFlyingStrikeVData because it is not a standard-layout class
    static_assert(sizeof(CCitadelAbilityFlyingStrikeVData) == 0x1c60);
};
