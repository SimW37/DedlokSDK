#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/resourcesystem/InfoForResourceTypeIParticleSystemDefinition.hpp"
#include "source2sdk/server/CCitadelModifier.hpp"
#include "source2sdk/server/CitadelAbilityVData.hpp"

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
        // Size: 0x18c0
        // Has VTable
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CCitadel_Ability_Tengu_AirLiftVData : public source2sdk::server::CitadelAbilityVData
        {
        public:
            // metadata: MPropertyStartGroup "Modifiers"
            // m_FlyingModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::server::CCitadelModifier> m_FlyingModifier;
            char m_FlyingModifier[0x10]; // 0x1620            
            // m_GrabModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::server::CCitadelModifier> m_GrabModifier;
            char m_GrabModifier[0x10]; // 0x1630            
            // m_HoldBombModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::server::CCitadelModifier> m_HoldBombModifier;
            char m_HoldBombModifier[0x10]; // 0x1640            
            // m_DroppedBuffModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::server::CCitadelModifier> m_DroppedBuffModifier;
            char m_DroppedBuffModifier[0x10]; // 0x1650            
            // m_ExplodingAllyModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::server::CCitadelModifier> m_ExplodingAllyModifier;
            char m_ExplodingAllyModifier[0x10]; // 0x1660            
            // m_AoEModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::server::CCitadelModifier> m_AoEModifier;
            char m_AoEModifier[0x10]; // 0x1670            
            // metadata: MPropertyGroupName "Visuals"
            // m_InitialExplodeParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_InitialExplodeParticle;
            char m_InitialExplodeParticle[0xe0]; // 0x1680            
            // m_HoldBombEffect has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_HoldBombEffect;
            char m_HoldBombEffect[0xe0]; // 0x1760            
            // metadata: MPropertyGroupName "Sounds"
            CSoundEventName m_strExplodeSound; // 0x1840            
            // metadata: MPropertyStartGroup "Gameplay"
            float m_flAirDrag; // 0x1850            
            float m_flMaxFallSpeed; // 0x1854            
            float m_flTargetAirSpeedFast; // 0x1858            
            float m_flTargetAirSpeedBase; // 0x185c            
            float m_flSprintMult; // 0x1860            
            float m_flAcceleration; // 0x1864            
            float m_flDecceleration; // 0x1868            
            float m_flAirSideSpeedPercent; // 0x186c            
            float m_flBoostEndVerticalSpeed; // 0x1870            
            float m_flBoostSpeedUp; // 0x1874            
            float m_flCrouchLaunchReduction; // 0x1878            
            float m_flMinFlyHeight; // 0x187c            
            float m_flMaxFlyHeight; // 0x1880            
            float m_flMaxPitchUp; // 0x1884            
            float m_flMaxPitchDown; // 0x1888            
            float m_flAllyDelayedBoostTime; // 0x188c            
            float m_flChannelingAirDrag; // 0x1890            
            float m_flChannelingMaxFallSpeed; // 0x1894            
            float m_flBombReleaseSpeed; // 0x1898            
            float m_flBombReleasePitch; // 0x189c            
            float m_flBombDropReleaseOffset; // 0x18a0            
            float m_flHoldBombOffsetX; // 0x18a4            
            float m_flHoldBombOffsetY; // 0x18a8            
            float m_flHoldBombOffsetZ; // 0x18ac            
            float m_flAnglePitchBias; // 0x18b0            
            float m_flTrackAmount; // 0x18b4            
            float m_flMoveCollideSpeed; // 0x18b8            
            uint8_t _pad18bc[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Ability_Tengu_AirLiftVData because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadel_Ability_Tengu_AirLiftVData) == 0x18c0);
    };
};
