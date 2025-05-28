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
        // Size: 0x1cf8
        // Has VTable
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CAbilityViscousBowlingVData : public source2sdk::server::CitadelAbilityVData
        {
        public:
            // metadata: MPropertyStartGroup "Visuals"
            // m_TransformStartFx has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_TransformStartFx;
            char m_TransformStartFx[0xe0]; // 0x15f0            
            // m_ExplodeFX has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_ExplodeFX;
            char m_ExplodeFX[0xe0]; // 0x16d0            
            // m_WallImpactFx has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_WallImpactFx;
            char m_WallImpactFx[0xe0]; // 0x17b0            
            // m_BallTrailFx has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_BallTrailFx;
            char m_BallTrailFx[0xe0]; // 0x1890            
            // m_GroundImpactParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_GroundImpactParticle;
            char m_GroundImpactParticle[0xe0]; // 0x1970            
            // m_JumpParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_JumpParticle;
            char m_JumpParticle[0xe0]; // 0x1a50            
            // m_DirectionParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_DirectionParticle;
            char m_DirectionParticle[0xe0]; // 0x1b30            
            float m_flVerticalCameraOffsetLerpTime; // 0x1c10            
            float m_flVerticalCameraOffsetBias; // 0x1c14            
            float m_flVerticalCameraOffset; // 0x1c18            
            float m_flDistanceCameraOffsetLerpTime; // 0x1c1c            
            float m_flDistanceCameraOffsetBias; // 0x1c20            
            float m_flDistanceCameraOffset; // 0x1c24            
            // metadata: MPropertyLeafSuggestionProviderFn
            CGlobalSymbol m_strPopGraphParamter; // 0x1c28            
            // metadata: MPropertyStartGroup "Sounds"
            CSoundEventName m_BallJumpSound; // 0x1c30            
            CSoundEventName m_EnterBallSound; // 0x1c40            
            CSoundEventName m_BallLoopSound; // 0x1c50            
            CSoundEventName m_ExitBallSound; // 0x1c60            
            CSoundEventName m_WallImpactSound; // 0x1c70            
            CSoundEventName m_PlayerImpactSound; // 0x1c80            
            // metadata: MPropertyStartGroup "Modifiers"
            // m_ImpactModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::server::CCitadelModifier> m_ImpactModifier;
            char m_ImpactModifier[0x10]; // 0x1c90            
            // m_DamagePreventionModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::server::CCitadelModifier> m_DamagePreventionModifier;
            char m_DamagePreventionModifier[0x10]; // 0x1ca0            
            // m_RollingModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::server::CCitadelModifier> m_RollingModifier;
            char m_RollingModifier[0x10]; // 0x1cb0            
            // metadata: MPropertyStartGroup "+Ball Parameters"
            float m_flTransformToBallTime; // 0x1cc0            
            float m_flTransformFromBallTime; // 0x1cc4            
            float m_flAirTurnRatio; // 0x1cc8            
            float m_flWallTurnRatioMax; // 0x1ccc            
            float m_flWallTurnRatioMin; // 0x1cd0            
            float m_flTurnRatio; // 0x1cd4            
            float m_flDefaultBallSpeed; // 0x1cd8            
            float m_flFastBallSpeed; // 0x1cdc            
            float m_flSpeedAccel; // 0x1ce0            
            float m_flSpeedDeccel; // 0x1ce4            
            float m_flElasticity; // 0x1ce8            
            float m_flWallCheckGroundOffset; // 0x1cec            
            float m_flWallPauseTime; // 0x1cf0            
            float m_flWallAngleMin; // 0x1cf4            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CAbilityViscousBowlingVData because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CAbilityViscousBowlingVData) == 0x1cf8);
    };
};
