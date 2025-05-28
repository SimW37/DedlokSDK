#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CAI_CitadelNPCVData.hpp"
#include "source2sdk/client/CCitadelModifier.hpp"
#include "source2sdk/client/WeakPointParams_t.hpp"
#include "source2sdk/resourcesystem/InfoForResourceTypeCModel.hpp"
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
        // Size: 0x1700
        // Has VTable
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CNPC_Boss_Tier2VData : public source2sdk::client::CAI_CitadelNPCVData
        {
        public:
            float m_flPlayerInitialSightRange; // 0x1100            
            uint8_t _pad1104[0x4]; // 0x1104
            // metadata: MPropertyStartGroup "Visuals"
            // m_strWIPModelName has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeCModel>> m_strWIPModelName;
            char m_strWIPModelName[0xe0]; // 0x1108            
            // metadata: MPropertyStartGroup "Weak Points"
            // m_vecWeakPoints has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::client::WeakPointParams_t> m_vecWeakPoints;
            char m_vecWeakPoints[0x18]; // 0x11e8            
            // metadata: MPropertyStartGroup "Electric Beam (Laser)"
            // m_BeamChargingEffect has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_BeamChargingEffect;
            char m_BeamChargingEffect[0xe0]; // 0x1200            
            // m_BeamPreviewEffect has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_BeamPreviewEffect;
            char m_BeamPreviewEffect[0xe0]; // 0x12e0            
            // m_BeamActiveEffect has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_BeamActiveEffect;
            char m_BeamActiveEffect[0xe0]; // 0x13c0            
            // metadata: MPropertyStartGroup "Stomp"
            // m_StompImpactEffect has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_StompImpactEffect;
            char m_StompImpactEffect[0xe0]; // 0x14a0            
            // m_StompWarningEffect has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_StompWarningEffect;
            char m_StompWarningEffect[0xe0]; // 0x1580            
            float m_flTossSpeed; // 0x1660            
            float m_flStompDamage; // 0x1664            
            float m_flStompDamageMaxHealthPercent; // 0x1668            
            float m_flStompTossUpMagnitude; // 0x166c            
            float m_flStunDuration; // 0x1670            
            float m_flStompImpactRadius; // 0x1674            
            float m_flStompImpactHeight; // 0x1678            
            float m_flSweepRadius; // 0x167c            
            float m_flSweepSpeed; // 0x1680            
            float m_flSweepZScale; // 0x1684            
            float m_flSweepMaxAngle; // 0x1688            
            float m_flSweepMaxRange; // 0x168c            
            float m_flSweepAdjustSpeed; // 0x1690            
            // metadata: MPropertyStartGroup "Gun"
            float m_flBurstDuration; // 0x1694            
            float m_flBurstCooldown; // 0x1698            
            uint8_t _pad169c[0x4]; // 0x169c
            // metadata: MPropertyStartGroup "Modifiers"
            // metadata: MPropertyDescription "Backdoor Protection Modifier"
            // m_BackdoorProtectionModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::client::CCitadelModifier> m_BackdoorProtectionModifier;
            char m_BackdoorProtectionModifier[0x10]; // 0x16a0            
            float m_flBackDoorProtectionRange; // 0x16b0            
            uint8_t _pad16b4[0x4]; // 0x16b4
            // m_InvulModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::client::CCitadelModifier> m_InvulModifier;
            char m_InvulModifier[0x10]; // 0x16b8            
            float m_flInvulModifierRange; // 0x16c8            
            uint8_t _pad16cc[0x4]; // 0x16cc
            // m_RangedArmorModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::client::CCitadelModifier> m_RangedArmorModifier;
            char m_RangedArmorModifier[0x10]; // 0x16d0            
            // m_FriendlyAuraModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::client::CCitadelModifier> m_FriendlyAuraModifier;
            char m_FriendlyAuraModifier[0x10]; // 0x16e0            
            // m_NearbyEnemyResist has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::client::CCitadelModifier> m_NearbyEnemyResist;
            char m_NearbyEnemyResist[0x10]; // 0x16f0            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CNPC_Boss_Tier2VData because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CNPC_Boss_Tier2VData) == 0x1700);
    };
};
