#pragma once
#include "source2sdk/client/CAI_BaseNPCVData.hpp"
#include "source2sdk/client/CCitadelWeaponInfo.hpp"
#include "source2sdk/client/EAbilitySlots_t.hpp"
#include "source2sdk/resourcesystem/InfoForResourceTypeCNmGraphDefinition.hpp"
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
    // Size: 0x10d8
    // Has VTable
    // 
    // static metadata: MGetKV3ClassDefaults
    // static metadata: MPropertySuppressBaseClassField
    // static metadata: MPropertySuppressBaseClassField
    // static metadata: MPropertySuppressBaseClassField
    // static metadata: MPropertySuppressBaseClassField
    // static metadata: MPropertySuppressBaseClassField
    // static metadata: MPropertySuppressBaseClassField
    #pragma pack(push, 1)
    class CAI_CitadelNPCVData : public client::CAI_BaseNPCVData
    {
    public:
        // metadata: MPropertyGroupName "Visuals"
        // m_sAG2VariationName has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeCNmGraphDefinition>> m_sAG2VariationName;
        char m_sAG2VariationName[0xe0]; // 0x388        
        // m_mapBoundAbilities has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlOrderedMap<client::EAbilitySlots_t,CSubclassName<4>> m_mapBoundAbilities;
        char m_mapBoundAbilities[0x28]; // 0x468        
        float m_flSightRangePlayers; // 0x490        
        float m_flSightRangeNPCs; // 0x494        
        CGlobalSymbol m_MeleeAnimName; // 0x498        
        float m_flMeleeAttemptRange; // 0x4a0        
        float m_flMeleeHitRange; // 0x4a4        
        // m_MeleeAttackPoints has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<float> m_MeleeAttackPoints;
        char m_MeleeAttackPoints[0x18]; // 0x4a8        
        float m_flMaxHealthBarDrawDistance; // 0x4c0        
        // metadata: MPropertyStartGroup "Movement"
        float m_flWalkSpeed; // 0x4c4        
        float m_flRunSpeed; // 0x4c8        
        float m_flTurnRate; // 0x4cc        
        float m_flAcceleration; // 0x4d0        
        float m_flStepHeight; // 0x4d4        
        int8_t m_navHull; // 0x4d8        
        [[maybe_unused]] std::uint8_t pad_0x4d9[0x7]; // 0x4d9
        // metadata: MPropertyStartGroup "Sounds"
        CSoundEventName m_BeamStartSound; // 0x4e0        
        CSoundEventName m_BeamStopSound; // 0x4f0        
        CSoundEventName m_BeamPointStartLoopSound; // 0x500        
        CSoundEventName m_BeamPointEndLoopSound; // 0x510        
        CSoundEventName m_BeamPointClosestLoopSound; // 0x520        
        CSoundEventName m_strAmbientLoopSound; // 0x530        
        CSoundEventName m_DeathSound; // 0x540        
        CSoundEventName m_strLastHitSound; // 0x550        
        bool m_bPlayLastHitSound; // 0x560        
        [[maybe_unused]] std::uint8_t pad_0x561[0x7]; // 0x561
        CSoundEventName m_MeleeHitSound; // 0x568        
        CSoundEventName m_MeleeHitPlayerSound; // 0x578        
        // metadata: MPropertyStartGroup "Visuals"
        // metadata: MPropertyAttributeEditor "VDataModelMaterialGroup( m_sModelName )"
        CUtlString m_sDefaultMaterialGroupName; // 0x588        
        // metadata: MPropertyAttributeEditor "VDataModelMaterialGroup( m_sModelName )"
        CUtlString m_sEnemyMaterialGroupName; // 0x590        
        // metadata: MPropertyAttributeEditor "VDataModelMaterialGroup( m_sModelName )"
        CUtlString m_sTeam1MaterialGroupName; // 0x598        
        // metadata: MPropertyAttributeEditor "VDataModelMaterialGroup( m_sModelName )"
        CUtlString m_sTeam2MaterialGroupName; // 0x5a0        
        // m_MeleeSwingParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_MeleeSwingParticle;
        char m_MeleeSwingParticle[0xe0]; // 0x5a8        
        // m_MeleeActivateParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_MeleeActivateParticle;
        char m_MeleeActivateParticle[0xe0]; // 0x688        
        float m_flModelScale; // 0x768        
        [[maybe_unused]] std::uint8_t pad_0x76c[0x4]; // 0x76c
        // metadata: MPropertyDescription "Particle to play instead of doing a ragdoll"
        // m_DeathParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_DeathParticle;
        char m_DeathParticle[0xe0]; // 0x770        
        // metadata: MPropertyStartGroup "Health Bar"
        // m_HealthBarParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_HealthBarParticle;
        char m_HealthBarParticle[0xe0]; // 0x850        
        CUtlString m_sHealthBarAttachment; // 0x930        
        Color m_HealthBarColorFriend; // 0x938        
        Color m_HealthBarColorEnemy; // 0x93c        
        Color m_HealthBarColorTeam1; // 0x940        
        Color m_HealthBarColorTeam2; // 0x944        
        Color m_HealthBarColorTeamNeutral; // 0x948        
        // metadata: MPropertyStartGroup "Misc"
        float m_flHealthBarOffset; // 0x94c        
        // metadata: MPropertyDescription "When true, spawns breakables defined in the model"
        bool m_bSpawnBreakablesOnDeath; // 0x950        
        [[maybe_unused]] std::uint8_t pad_0x951[0x3]; // 0x951
        // metadata: MPropertySuppressExpr "m_bSpawnBreakablesOnDeath == false"
        float m_flBreakableForceScale; // 0x954        
        // metadata: MPropertyDescription "Modifier for physics impulses applied to this NPC (0 == unmoveable)"
        float m_flPhysicsImpulseMultiplier; // 0x958        
        // metadata: MPropertyStartGroup "Beam Weapon"
        float m_flBeamWeaponWidth; // 0x95c        
        float m_flBeamTurnRate; // 0x960        
        [[maybe_unused]] std::uint8_t pad_0x964[0x4]; // 0x964
        // m_BeamWeaponParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_BeamWeaponParticle;
        char m_BeamWeaponParticle[0xe0]; // 0x968        
        client::CCitadelWeaponInfo m_WeaponInfo; // 0xa48        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CAI_CitadelNPCVData because it is not a standard-layout class
    static_assert(sizeof(CAI_CitadelNPCVData) == 0x10d8);
};
