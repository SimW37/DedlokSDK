#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/ENeutralTrooperType.hpp"
#include "source2sdk/client/MoveType_t.hpp"
#include "source2sdk/resourcesystem/InfoForResourceTypeIParticleSystemDefinition.hpp"
#include "source2sdk/server/CAI_CitadelNPCVData.hpp"
#include "source2sdk/server/CCitadelModifier.hpp"

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
        // Size: 0x1700
        // Has VTable
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CNPC_TrooperNeutralVData : public source2sdk::server::CAI_CitadelNPCVData
        {
        public:
            source2sdk::client::ENeutralTrooperType m_eTrooperType; // 0x1100            
            float m_flGoldReward; // 0x1104            
            float m_flGoldRewardBonusPercentPerMinute; // 0x1108            
            bool m_bGiveGoldOnHit; // 0x110c            
            bool m_bOrbDropper; // 0x110d            
            bool m_bCapSimultanousAttackers; // 0x110e            
            uint8_t _pad110f[0x1]; // 0x110f
            float m_flShieldReactivateDelay; // 0x1110            
            float m_flDyingDuration; // 0x1114            
            // metadata: MPropertyStartGroup "Behavior"
            // metadata: MPropertyFriendlyName "Damaged by Bullets?"
            bool m_bDamagedByBullets; // 0x1118            
            // metadata: MPropertyFriendlyName "Damaged by Melee?"
            bool m_bDamagedByMelee; // 0x1119            
            // metadata: MPropertyFriendlyName "Damaged by Abilities?"
            bool m_bDamagedByAbilities; // 0x111a            
            // metadata: MPropertyFriendlyName "Fixed Melee Damage?"
            bool m_bFixedMeleeDamage; // 0x111b            
            uint8_t _pad111c[0x4]; // 0x111c
            // metadata: MPropertyStartGroup "Shield FX"
            // m_ShieldParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_ShieldParticle;
            char m_ShieldParticle[0xe0]; // 0x1120            
            // metadata: MPropertyStartGroup "Retaliation Attack"
            // metadata: MPropertyDescription "How much damage to deal on retaliate the attacker when this is hit."
            float m_flRetaliateDamage; // 0x1200            
            float m_flRetaliateCooldown; // 0x1204            
            // metadata: MPropertyDescription "Particle to play when dealing retaliate damage"
            // m_retaliateParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_retaliateParticle;
            char m_retaliateParticle[0xe0]; // 0x1208            
            // metadata: MPropertyStartGroup "AOE Attack"
            bool m_bHasAOEAttack; // 0x12e8            
            uint8_t _pad12e9[0x3]; // 0x12e9
            float m_flAOERadius; // 0x12ec            
            float m_flAOEDamage; // 0x12f0            
            float m_flAOEAttackCooldown; // 0x12f4            
            // m_AOEParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_AOEParticle;
            char m_AOEParticle[0xe0]; // 0x12f8            
            // m_AOEDebuffToApply has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::server::CCitadelModifier> m_AOEDebuffToApply;
            char m_AOEDebuffToApply[0x10]; // 0x13d8            
            CSoundEventName m_AOEInitiateSound; // 0x13e8            
            CSoundEventName m_AOESound; // 0x13f8            
            float m_AOEDebuffDuration; // 0x1408            
            uint8_t _pad140c[0x4]; // 0x140c
            // metadata: MPropertyStartGroup "Body"
            // m_vecRandomBodyGroup has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CUtlString> m_vecRandomBodyGroup;
            char m_vecRandomBodyGroup[0x18]; // 0x1410            
            // m_vecRandomSkin has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CUtlString> m_vecRandomSkin;
            char m_vecRandomSkin[0x18]; // 0x1428            
            // metadata: MPropertyStartGroup "Visuals"
            float m_flHullCapsuleRadius; // 0x1440            
            float m_flHullCapsuleHeight; // 0x1444            
            // metadata: MPropertyStartGroup "Idles"
            bool m_bFaceEnemyWhileIdle; // 0x1448            
            uint8_t _pad1449[0x7]; // 0x1449
            CSoundEventName m_IdleLoopSound; // 0x1450            
            // metadata: MPropertyStartGroup "Movement"
            source2sdk::client::MoveType_t m_MoveType; // 0x1460            
            uint8_t _pad1461[0x3]; // 0x1461
            // metadata: MPropertyStartGroup "NPC Vault Data"
            float m_flVaultMiniGameTime; // 0x1464            
            float m_flVaultMiniGameHitWindow; // 0x1468            
            float m_flVaultMiniGameWheelScrollTime; // 0x146c            
            std::int32_t m_iVaultSuccessLightBuffDropCount; // 0x1470            
            std::int32_t m_iVaultSuccessHeavyBuffDropCount; // 0x1474            
            float m_flVaultLightScrollTime; // 0x1478            
            float m_flVaultWheelScrollTime; // 0x147c            
            float m_flVaultSuccessLightsScroll; // 0x1480            
            float m_flVaultSuccessWheelScroll; // 0x1484            
            float m_flVaultSuccessDestroyTime; // 0x1488            
            uint8_t _pad148c[0x4]; // 0x148c
            // m_VaultSuccessParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_VaultSuccessParticle;
            char m_VaultSuccessParticle[0xe0]; // 0x1490            
            // metadata: MPropertyStartGroup "NPC Vault Sounds"
            CSoundEventName m_VaultIdleLoopSound; // 0x1570            
            CSoundEventName m_VaultStartActiveSound; // 0x1580            
            CSoundEventName m_VaultActiveLoopSound; // 0x1590            
            CSoundEventName m_VaultStartCriticalSound; // 0x15a0            
            CSoundEventName m_VaultCriticalLoopSound; // 0x15b0            
            CSoundEventName m_VaultHitSuccessSoundLight; // 0x15c0            
            CSoundEventName m_VaultHitSuccessSoundHeavy; // 0x15d0            
            CSoundEventName m_VaultHitFailSound; // 0x15e0            
            CSoundEventName m_VaultHit01; // 0x15f0            
            CSoundEventName m_VaultHit02; // 0x1600            
            CSoundEventName m_VaultHit03; // 0x1610            
            CSoundEventName m_VaultHit04; // 0x1620            
            CSoundEventName m_VaultHit05; // 0x1630            
            CSoundEventName m_VaultHit06; // 0x1640            
            CSoundEventName m_VaultHit07; // 0x1650            
            CSoundEventName m_VaultLight01; // 0x1660            
            CSoundEventName m_VaultLight02; // 0x1670            
            CSoundEventName m_VaultLight03; // 0x1680            
            CSoundEventName m_VaultLight04; // 0x1690            
            CSoundEventName m_VaultLight05; // 0x16a0            
            CSoundEventName m_VaultLight06; // 0x16b0            
            CSoundEventName m_VaultLight07; // 0x16c0            
            CSoundEventName m_VaultLight08; // 0x16d0            
            CSoundEventName m_VaultLightHitWindow; // 0x16e0            
            CSoundEventName m_VaultWheelSuccessDing; // 0x16f0            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CNPC_TrooperNeutralVData because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CNPC_TrooperNeutralVData) == 0x1700);
    };
};
