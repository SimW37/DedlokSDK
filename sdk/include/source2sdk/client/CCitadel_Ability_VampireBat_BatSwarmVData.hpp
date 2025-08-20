#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CCitadelModifier.hpp"
#include "source2sdk/client/CitadelAbilityVData.hpp"
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
        // Size: 0x19b8
        // Has VTable
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CCitadel_Ability_VampireBat_BatSwarmVData : public source2sdk::client::CitadelAbilityVData
        {
        public:
            // metadata: MPropertyStartGroup "Modifiers"
            // m_DebuffModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::client::CCitadelModifier> m_DebuffModifier;
            char m_DebuffModifier[0x10]; // 0x1618            
            // metadata: MPropertyStartGroup "Visuals"
            // m_GainedBatParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_GainedBatParticle;
            char m_GainedBatParticle[0xe0]; // 0x1628            
            // m_ExplodeParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_ExplodeParticle;
            char m_ExplodeParticle[0xe0]; // 0x1708            
            // m_BatSwarmChannelParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_BatSwarmChannelParticle;
            char m_BatSwarmChannelParticle[0xe0]; // 0x17e8            
            // metadata: MPropertyStartGroup "Sounds"
            CSoundEventName m_strFireBatSound; // 0x18c8            
            CSoundEventName m_strGainedBatSound; // 0x18d8            
            CSoundEventName m_strChannelEndSound; // 0x18e8            
            // metadata: MPropertyStartGroup "Gameplay"
            bool m_bAllowLockOn; // 0x18f8            
            bool m_bAllowSatVolume; // 0x18f9            
            bool m_bAllowRetarget; // 0x18fa            
            uint8_t _pad18fb[0x1]; // 0x18fb
            float m_flBatTickRate; // 0x18fc            
            float m_flBatLifetime; // 0x1900            
            float m_flTrackingAngularStrengthMin; // 0x1904            
            float m_flTrackingAngularStrengthMax; // 0x1908            
            float m_flBatRetargetRadius; // 0x190c            
            float m_flCurlNoiseStrength; // 0x1910            
            float m_flCurlNoiseMinFrequency; // 0x1914            
            float m_flCurlNoiseMaxFrequency; // 0x1918            
            uint8_t _pad191c[0x4]; // 0x191c
            CPiecewiseCurve m_DistanceToAccuracyCurve; // 0x1920            
            CPiecewiseCurve m_SatVolumeCastDelayRadiusCurve; // 0x1960            
            Color aimColorDesat; // 0x19a0            
            Color aimColorSat; // 0x19a4            
            Color aimColorOutline; // 0x19a8            
            float m_flSatVolumePulsePerBat; // 0x19ac            
            float m_flSatVolumeInnerConeSize; // 0x19b0            
            uint8_t _pad19b4[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Ability_VampireBat_BatSwarmVData because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CCitadel_Ability_VampireBat_BatSwarmVData) == 0x19b8);
    };
};
