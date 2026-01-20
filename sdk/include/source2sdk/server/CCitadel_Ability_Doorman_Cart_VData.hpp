#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/resourcesystem/InfoForResourceTypeCModel.hpp"
#include "source2sdk/resourcesystem/InfoForResourceTypeIParticleSystemDefinition.hpp"
#include "source2sdk/server/CBaseModifier.hpp"
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
        // Size: 0x1bb8
        // Has VTable
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CCitadel_Ability_Doorman_Cart_VData : public source2sdk::server::CitadelAbilityVData
        {
        public:
            // metadata: MPropertyStartGroup "+Gameplay"
            float m_flTraceRadius; // 0x1700            
            float m_flDistanceAboveGround; // 0x1704            
            float m_flFloatDownRate; // 0x1708            
            float m_flClimbHeight; // 0x170c            
            float m_flStepDownHeight; // 0x1710            
            float m_flMinPitch; // 0x1714            
            float m_flMaxPitch; // 0x1718            
            float m_flJumpHeight; // 0x171c            
            float m_flQAngleSmoothRate; // 0x1720            
            uint8_t _pad1724[0x4]; // 0x1724
            CPiecewiseCurve m_flGroundHitPitchCurve; // 0x1728            
            CPiecewiseCurve m_flGroundHitRollCurve; // 0x1768            
            CPiecewiseCurve m_flGroundHitYawCurve; // 0x17a8            
            // metadata: MPropertyStartGroup "Modifiers"
            // m_ModifierDrag has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::server::CBaseModifier> m_ModifierDrag;
            char m_ModifierDrag[0x10]; // 0x17e8            
            // metadata: MPropertyStartGroup "Sounds"
            CSoundEventName m_CartExpireSound; // 0x17f8            
            CSoundEventName m_CartHitSound; // 0x1808            
            CSoundEventName m_CartHitAllySound; // 0x1818            
            CSoundEventName m_strWallSlamSound; // 0x1828            
            // metadata: MPropertyStartGroup "Visuals"
            // m_FriendlyCastProjectileTrailParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_FriendlyCastProjectileTrailParticle;
            char m_FriendlyCastProjectileTrailParticle[0xe0]; // 0x1838            
            // m_FriendlyCastProjectileModel has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeCModel>> m_FriendlyCastProjectileModel;
            char m_FriendlyCastProjectileModel[0xe0]; // 0x1918            
            // m_CartCastParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_CartCastParticle;
            char m_CartCastParticle[0xe0]; // 0x19f8            
            // m_WallImpactParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_WallImpactParticle;
            char m_WallImpactParticle[0xe0]; // 0x1ad8            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Ability_Doorman_Cart_VData because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadel_Ability_Doorman_Cart_VData) == 0x1bb8);
    };
};
