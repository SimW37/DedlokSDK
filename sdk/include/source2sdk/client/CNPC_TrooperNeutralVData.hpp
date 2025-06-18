#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CAI_CitadelNPCVData.hpp"
#include "source2sdk/client/CCitadelModifier.hpp"
#include "source2sdk/client/ENeutralTrooperType.hpp"
#include "source2sdk/client/MoveType_t.hpp"
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
        // Size: 0x16f8
        // Has VTable
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CNPC_TrooperNeutralVData : public source2sdk::client::CAI_CitadelNPCVData
        {
        public:
            source2sdk::client::ENeutralTrooperType m_eTrooperType; // 0x10f8            
            float m_flGoldReward; // 0x10fc            
            float m_flGoldRewardBonusPercentPerMinute; // 0x1100            
            bool m_bGiveGoldOnHit; // 0x1104            
            bool m_bOrbDropper; // 0x1105            
            bool m_bCapSimultanousAttackers; // 0x1106            
            uint8_t _pad1107[0x1]; // 0x1107
            float m_flShieldReactivateDelay; // 0x1108            
            float m_flDyingDuration; // 0x110c            
            // metadata: MPropertyStartGroup "Behavior"
            // metadata: MPropertyFriendlyName "Damaged by Bullets?"
            bool m_bDamagedByBullets; // 0x1110            
            // metadata: MPropertyFriendlyName "Damaged by Melee?"
            bool m_bDamagedByMelee; // 0x1111            
            // metadata: MPropertyFriendlyName "Damaged by Abilities?"
            bool m_bDamagedByAbilities; // 0x1112            
            // metadata: MPropertyFriendlyName "Fixed Melee Damage?"
            bool m_bFixedMeleeDamage; // 0x1113            
            uint8_t _pad1114[0x4]; // 0x1114
            // metadata: MPropertyStartGroup "Shield FX"
            // m_ShieldParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_ShieldParticle;
            char m_ShieldParticle[0xe0]; // 0x1118            
            // metadata: MPropertyStartGroup "Retaliation Attack"
            // metadata: MPropertyDescription "How much damage to deal on retaliate the attacker when this is hit."
            float m_flRetaliateDamage; // 0x11f8            
            float m_flRetaliateCooldown; // 0x11fc            
            // metadata: MPropertyDescription "Particle to play when dealing retaliate damage"
            // m_retaliateParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_retaliateParticle;
            char m_retaliateParticle[0xe0]; // 0x1200            
            // metadata: MPropertyStartGroup "AOE Attack"
            bool m_bHasAOEAttack; // 0x12e0            
            uint8_t _pad12e1[0x3]; // 0x12e1
            float m_flAOERadius; // 0x12e4            
            float m_flAOEDamage; // 0x12e8            
            float m_flAOEAttackCooldown; // 0x12ec            
            // m_AOEParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_AOEParticle;
            char m_AOEParticle[0xe0]; // 0x12f0            
            // m_AOEDebuffToApply has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::client::CCitadelModifier> m_AOEDebuffToApply;
            char m_AOEDebuffToApply[0x10]; // 0x13d0            
            CSoundEventName m_AOEInitiateSound; // 0x13e0            
            CSoundEventName m_AOESound; // 0x13f0            
            float m_AOEDebuffDuration; // 0x1400            
            uint8_t _pad1404[0x4]; // 0x1404
            // metadata: MPropertyStartGroup "Body"
            // m_vecRandomBodyGroup has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CUtlString> m_vecRandomBodyGroup;
            char m_vecRandomBodyGroup[0x18]; // 0x1408            
            // m_vecRandomSkin has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CUtlString> m_vecRandomSkin;
            char m_vecRandomSkin[0x18]; // 0x1420            
            // metadata: MPropertyStartGroup "Visuals"
            float m_flHullCapsuleRadius; // 0x1438            
            float m_flHullCapsuleHeight; // 0x143c            
            // metadata: MPropertyStartGroup "Idles"
            bool m_bFaceEnemyWhileIdle; // 0x1440            
            uint8_t _pad1441[0x7]; // 0x1441
            CSoundEventName m_IdleLoopSound; // 0x1448            
            // metadata: MPropertyStartGroup "Movement"
            source2sdk::client::MoveType_t m_MoveType; // 0x1458            
            uint8_t _pad1459[0x3]; // 0x1459
            // metadata: MPropertyStartGroup "NPC Vault Data"
            float m_flVaultMiniGameTime; // 0x145c            
            float m_flVaultMiniGameHitWindow; // 0x1460            
            float m_flVaultMiniGameWheelScrollTime; // 0x1464            
            std::int32_t m_iVaultSuccessLightBuffDropCount; // 0x1468            
            std::int32_t m_iVaultSuccessHeavyBuffDropCount; // 0x146c            
            float m_flVaultLightScrollTime; // 0x1470            
            float m_flVaultWheelScrollTime; // 0x1474            
            float m_flVaultSuccessLightsScroll; // 0x1478            
            float m_flVaultSuccessWheelScroll; // 0x147c            
            float m_flVaultSuccessDestroyTime; // 0x1480            
            uint8_t _pad1484[0x4]; // 0x1484
            // m_VaultSuccessParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_VaultSuccessParticle;
            char m_VaultSuccessParticle[0xe0]; // 0x1488            
            // metadata: MPropertyStartGroup "NPC Vault Sounds"
            CSoundEventName m_VaultIdleLoopSound; // 0x1568            
            CSoundEventName m_VaultStartActiveSound; // 0x1578            
            CSoundEventName m_VaultActiveLoopSound; // 0x1588            
            CSoundEventName m_VaultStartCriticalSound; // 0x1598            
            CSoundEventName m_VaultCriticalLoopSound; // 0x15a8            
            CSoundEventName m_VaultHitSuccessSoundLight; // 0x15b8            
            CSoundEventName m_VaultHitSuccessSoundHeavy; // 0x15c8            
            CSoundEventName m_VaultHitFailSound; // 0x15d8            
            CSoundEventName m_VaultHit01; // 0x15e8            
            CSoundEventName m_VaultHit02; // 0x15f8            
            CSoundEventName m_VaultHit03; // 0x1608            
            CSoundEventName m_VaultHit04; // 0x1618            
            CSoundEventName m_VaultHit05; // 0x1628            
            CSoundEventName m_VaultHit06; // 0x1638            
            CSoundEventName m_VaultHit07; // 0x1648            
            CSoundEventName m_VaultLight01; // 0x1658            
            CSoundEventName m_VaultLight02; // 0x1668            
            CSoundEventName m_VaultLight03; // 0x1678            
            CSoundEventName m_VaultLight04; // 0x1688            
            CSoundEventName m_VaultLight05; // 0x1698            
            CSoundEventName m_VaultLight06; // 0x16a8            
            CSoundEventName m_VaultLight07; // 0x16b8            
            CSoundEventName m_VaultLight08; // 0x16c8            
            CSoundEventName m_VaultLightHitWindow; // 0x16d8            
            CSoundEventName m_VaultWheelSuccessDing; // 0x16e8            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CNPC_TrooperNeutralVData because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CNPC_TrooperNeutralVData) == 0x16f8);
    };
};
