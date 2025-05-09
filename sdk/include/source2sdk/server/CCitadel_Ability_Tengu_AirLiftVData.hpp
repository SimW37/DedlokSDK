#pragma once
#include "source2sdk/resourcesystem/InfoForResourceTypeIParticleSystemDefinition.hpp"
#include "source2sdk/server/CCitadelModifier.hpp"
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
    // Size: 0x1890
    // Has VTable
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CCitadel_Ability_Tengu_AirLiftVData : public server::CitadelAbilityVData
    {
    public:
        // metadata: MPropertyStartGroup "Modifiers"
        // m_FlyingModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<server::CCitadelModifier> m_FlyingModifier;
        char m_FlyingModifier[0x10]; // 0x15f0        
        // m_GrabModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<server::CCitadelModifier> m_GrabModifier;
        char m_GrabModifier[0x10]; // 0x1600        
        // m_HoldBombModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<server::CCitadelModifier> m_HoldBombModifier;
        char m_HoldBombModifier[0x10]; // 0x1610        
        // m_DroppedBuffModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<server::CCitadelModifier> m_DroppedBuffModifier;
        char m_DroppedBuffModifier[0x10]; // 0x1620        
        // m_ExplodingAllyModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<server::CCitadelModifier> m_ExplodingAllyModifier;
        char m_ExplodingAllyModifier[0x10]; // 0x1630        
        // m_AoEModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<server::CCitadelModifier> m_AoEModifier;
        char m_AoEModifier[0x10]; // 0x1640        
        // metadata: MPropertyGroupName "Visuals"
        // m_InitialExplodeParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_InitialExplodeParticle;
        char m_InitialExplodeParticle[0xe0]; // 0x1650        
        // m_HoldBombEffect has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_HoldBombEffect;
        char m_HoldBombEffect[0xe0]; // 0x1730        
        // metadata: MPropertyGroupName "Sounds"
        CSoundEventName m_strExplodeSound; // 0x1810        
        // metadata: MPropertyStartGroup "Gameplay"
        float m_flAirDrag; // 0x1820        
        float m_flMaxFallSpeed; // 0x1824        
        float m_flTargetAirSpeedFast; // 0x1828        
        float m_flTargetAirSpeedBase; // 0x182c        
        float m_flSprintMult; // 0x1830        
        float m_flAcceleration; // 0x1834        
        float m_flDecceleration; // 0x1838        
        float m_flAirSideSpeedPercent; // 0x183c        
        float m_flBoostEndVerticalSpeed; // 0x1840        
        float m_flBoostSpeedUp; // 0x1844        
        float m_flCrouchLaunchReduction; // 0x1848        
        float m_flMinFlyHeight; // 0x184c        
        float m_flMaxFlyHeight; // 0x1850        
        float m_flMaxPitchUp; // 0x1854        
        float m_flMaxPitchDown; // 0x1858        
        float m_flAllyDelayedBoostTime; // 0x185c        
        float m_flChannelingAirDrag; // 0x1860        
        float m_flChannelingMaxFallSpeed; // 0x1864        
        float m_flBombReleaseSpeed; // 0x1868        
        float m_flBombReleasePitch; // 0x186c        
        float m_flBombDropReleaseOffset; // 0x1870        
        float m_flHoldBombOffsetX; // 0x1874        
        float m_flHoldBombOffsetY; // 0x1878        
        float m_flHoldBombOffsetZ; // 0x187c        
        float m_flAnglePitchBias; // 0x1880        
        float m_flTrackAmount; // 0x1884        
        float m_flMoveCollideSpeed; // 0x1888        
        [[maybe_unused]] std::uint8_t pad_0x188c[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Ability_Tengu_AirLiftVData because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Ability_Tengu_AirLiftVData) == 0x1890);
};
