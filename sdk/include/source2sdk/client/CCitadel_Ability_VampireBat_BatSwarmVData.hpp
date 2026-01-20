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
        // Size: 0x1aa0
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
            char m_DebuffModifier[0x10]; // 0x1700            
            // metadata: MPropertyStartGroup "Visuals"
            // m_GainedBatParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_GainedBatParticle;
            char m_GainedBatParticle[0xe0]; // 0x1710            
            // m_ExplodeParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_ExplodeParticle;
            char m_ExplodeParticle[0xe0]; // 0x17f0            
            // m_BatSwarmChannelParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_BatSwarmChannelParticle;
            char m_BatSwarmChannelParticle[0xe0]; // 0x18d0            
            // metadata: MPropertyStartGroup "Sounds"
            CSoundEventName m_strFireBatSound; // 0x19b0            
            CSoundEventName m_strGainedBatSound; // 0x19c0            
            CSoundEventName m_strChannelEndSound; // 0x19d0            
            // metadata: MPropertyStartGroup "Gameplay"
            bool m_bAllowLockOn; // 0x19e0            
            bool m_bAllowSatVolume; // 0x19e1            
            bool m_bAllowRetarget; // 0x19e2            
            uint8_t _pad19e3[0x1]; // 0x19e3
            float m_flBatTickRate; // 0x19e4            
            float m_flBatLifetime; // 0x19e8            
            float m_flTrackingAngularStrengthMin; // 0x19ec            
            float m_flTrackingAngularStrengthMax; // 0x19f0            
            float m_flBatRetargetRadius; // 0x19f4            
            float m_flCurlNoiseStrength; // 0x19f8            
            float m_flCurlNoiseMinFrequency; // 0x19fc            
            float m_flCurlNoiseMaxFrequency; // 0x1a00            
            uint8_t _pad1a04[0x4]; // 0x1a04
            CPiecewiseCurve m_DistanceToAccuracyCurve; // 0x1a08            
            CPiecewiseCurve m_SatVolumeCastDelayRadiusCurve; // 0x1a48            
            Color aimColorDesat; // 0x1a88            
            Color aimColorSat; // 0x1a8c            
            Color aimColorOutline; // 0x1a90            
            float m_flSatVolumePulsePerBat; // 0x1a94            
            float m_flSatVolumeInnerConeSize; // 0x1a98            
            uint8_t _pad1a9c[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Ability_VampireBat_BatSwarmVData because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CCitadel_Ability_VampireBat_BatSwarmVData) == 0x1aa0);
    };
};
