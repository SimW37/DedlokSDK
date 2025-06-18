#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CitadelCameraOperationsSequence_t.hpp"
#include "source2sdk/client/DOFDesc_t.hpp"
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
        // Size: 0x1fb8
        // Has VTable
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CCitadel_Ability_ZipLine_VData : public source2sdk::server::CitadelAbilityVData
        {
        public:
            // metadata: MPropertyDescription "After using a zipline, players will have this air drag value applied to them until they touch the ground."
            float m_flZiplineAirDrag; // 0x15e8            
            float m_flMinButtonHoldTimeToActivate; // 0x15ec            
            float m_flCrouchDropSpeedFraction; // 0x15f0            
            float m_flCrouchDropAirDragSuppressDuration; // 0x15f4            
            float m_flDetachDisallowedTime; // 0x15f8            
            float m_flCameraWobbleIntensity; // 0x15fc            
            float m_flDismountSpeedMax; // 0x1600            
            // metadata: MPropertyDescription "The DOF settings to apply while riding the zipline."
            source2sdk::client::DOFDesc_t m_DOFWhileZiplining; // 0x1604            
            uint8_t _pad1614[0x4]; // 0x1614
            // metadata: MPropertyStartGroup "Visuals"
            // m_ZipLinePreviewParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_ZipLinePreviewParticle;
            char m_ZipLinePreviewParticle[0xe0]; // 0x1618            
            // m_ZipLineSpeedParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_ZipLineSpeedParticle;
            char m_ZipLineSpeedParticle[0xe0]; // 0x16f8            
            // m_ZipLineTetherParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_ZipLineTetherParticle;
            char m_ZipLineTetherParticle[0xe0]; // 0x17d8            
            // m_ZipLineTetherAttachParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_ZipLineTetherAttachParticle;
            char m_ZipLineTetherAttachParticle[0xe0]; // 0x18b8            
            // m_ZipLineTetherStartParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_ZipLineTetherStartParticle;
            char m_ZipLineTetherStartParticle[0xe0]; // 0x1998            
            // m_ZipLineEnemyKnockdownProtectionParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_ZipLineEnemyKnockdownProtectionParticle;
            char m_ZipLineEnemyKnockdownProtectionParticle[0xe0]; // 0x1a78            
            // m_ZipLineSelfKnockdownProtectionParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_ZipLineSelfKnockdownProtectionParticle;
            char m_ZipLineSelfKnockdownProtectionParticle[0xe0]; // 0x1b58            
            // m_ZipLineKnockdownProtectionStatusParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_ZipLineKnockdownProtectionStatusParticle;
            char m_ZipLineKnockdownProtectionStatusParticle[0xe0]; // 0x1c38            
            // metadata: MPropertyStartGroup "Sounds"
            CSoundEventName m_strZipLineSummonSound; // 0x1d18            
            CSoundEventName m_strZipLineLatchedSound; // 0x1d28            
            CSoundEventName m_strZipLineStartSound; // 0x1d38            
            // metadata: MPropertyStartGroup "Modifiers"
            // m_RidingZipLineModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::server::CCitadelModifier> m_RidingZipLineModifier;
            char m_RidingZipLineModifier[0x10]; // 0x1d48            
            // m_KnockedOffSlowModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::server::CCitadelModifier> m_KnockedOffSlowModifier;
            char m_KnockedOffSlowModifier[0x10]; // 0x1d58            
            // m_ZipLineIntroModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::server::CCitadelModifier> m_ZipLineIntroModifier;
            char m_ZipLineIntroModifier[0x10]; // 0x1d68            
            // m_ZipLineKnockdownImmuneModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::server::CCitadelModifier> m_ZipLineKnockdownImmuneModifier;
            char m_ZipLineKnockdownImmuneModifier[0x10]; // 0x1d78            
            // m_ZipLineSlowModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::server::CCitadelModifier> m_ZipLineSlowModifier;
            char m_ZipLineSlowModifier[0x10]; // 0x1d88            
            // metadata: MPropertyStartGroup "Camera"
            source2sdk::client::CitadelCameraOperationsSequence_t m_cameraSequenceAwaitingTether; // 0x1d98            
            source2sdk::client::CitadelCameraOperationsSequence_t m_cameraSequenceLatched; // 0x1e20            
            source2sdk::client::CitadelCameraOperationsSequence_t m_cameraSequenceAttached; // 0x1ea8            
            source2sdk::client::CitadelCameraOperationsSequence_t m_cameraSequenceClear; // 0x1f30            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Ability_ZipLine_VData because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadel_Ability_ZipLine_VData) == 0x1fb8);
    };
};
