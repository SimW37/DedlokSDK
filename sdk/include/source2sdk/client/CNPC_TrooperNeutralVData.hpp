#pragma once
#include "source2sdk/client/CAI_CitadelNPCVData.hpp"
#include "source2sdk/client/CCitadelModifier.hpp"
#include "source2sdk/client/ENeutralTrooperType.hpp"
#include "source2sdk/client/MoveType_t.hpp"
#include "source2sdk/resourcesystem/InfoForResourceTypeIParticleSystemDefinition.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x16d8
    // Has VTable
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CNPC_TrooperNeutralVData : public client::CAI_CitadelNPCVData
    {
    public:
        client::ENeutralTrooperType m_eTrooperType; // 0x10d8        
        float m_flGoldReward; // 0x10dc        
        float m_flGoldRewardBonusPercentPerMinute; // 0x10e0        
        bool m_bGiveGoldOnHit; // 0x10e4        
        bool m_bOrbDropper; // 0x10e5        
        bool m_bCapSimultanousAttackers; // 0x10e6        
        [[maybe_unused]] std::uint8_t pad_0x10e7[0x1]; // 0x10e7
        float m_flShieldReactivateDelay; // 0x10e8        
        float m_flDyingDuration; // 0x10ec        
        // metadata: MPropertyStartGroup "Behavior"
        // metadata: MPropertyFriendlyName "Damaged by Bullets?"
        bool m_bDamagedByBullets; // 0x10f0        
        // metadata: MPropertyFriendlyName "Damaged by Melee?"
        bool m_bDamagedByMelee; // 0x10f1        
        // metadata: MPropertyFriendlyName "Damaged by Abilities?"
        bool m_bDamagedByAbilities; // 0x10f2        
        // metadata: MPropertyFriendlyName "Fixed Melee Damage?"
        bool m_bFixedMeleeDamage; // 0x10f3        
        [[maybe_unused]] std::uint8_t pad_0x10f4[0x4]; // 0x10f4
        // metadata: MPropertyStartGroup "Shield FX"
        // m_ShieldParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_ShieldParticle;
        char m_ShieldParticle[0xe0]; // 0x10f8        
        // metadata: MPropertyStartGroup "Retaliation Attack"
        // metadata: MPropertyDescription "How much damage to deal on retaliate the attacker when this is hit."
        float m_flRetaliateDamage; // 0x11d8        
        float m_flRetaliateCooldown; // 0x11dc        
        // metadata: MPropertyDescription "Particle to play when dealing retaliate damage"
        // m_retaliateParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_retaliateParticle;
        char m_retaliateParticle[0xe0]; // 0x11e0        
        // metadata: MPropertyStartGroup "AOE Attack"
        bool m_bHasAOEAttack; // 0x12c0        
        [[maybe_unused]] std::uint8_t pad_0x12c1[0x3]; // 0x12c1
        float m_flAOERadius; // 0x12c4        
        float m_flAOEDamage; // 0x12c8        
        float m_flAOEAttackCooldown; // 0x12cc        
        // m_AOEParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_AOEParticle;
        char m_AOEParticle[0xe0]; // 0x12d0        
        // m_AOEDebuffToApply has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<client::CCitadelModifier> m_AOEDebuffToApply;
        char m_AOEDebuffToApply[0x10]; // 0x13b0        
        CSoundEventName m_AOEInitiateSound; // 0x13c0        
        CSoundEventName m_AOESound; // 0x13d0        
        float m_AOEDebuffDuration; // 0x13e0        
        [[maybe_unused]] std::uint8_t pad_0x13e4[0x4]; // 0x13e4
        // metadata: MPropertyStartGroup "Body"
        // m_vecRandomBodyGroup has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CUtlString> m_vecRandomBodyGroup;
        char m_vecRandomBodyGroup[0x18]; // 0x13e8        
        // m_vecRandomSkin has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CUtlString> m_vecRandomSkin;
        char m_vecRandomSkin[0x18]; // 0x1400        
        // metadata: MPropertyStartGroup "Visuals"
        float m_flHullCapsuleRadius; // 0x1418        
        float m_flHullCapsuleHeight; // 0x141c        
        // metadata: MPropertyStartGroup "Idles"
        bool m_bFaceEnemyWhileIdle; // 0x1420        
        [[maybe_unused]] std::uint8_t pad_0x1421[0x7]; // 0x1421
        CSoundEventName m_IdleLoopSound; // 0x1428        
        // metadata: MPropertyStartGroup "Movement"
        client::MoveType_t m_MoveType; // 0x1438        
        [[maybe_unused]] std::uint8_t pad_0x1439[0x3]; // 0x1439
        // metadata: MPropertyStartGroup "NPC Vault Data"
        float m_flVaultMiniGameTime; // 0x143c        
        float m_flVaultMiniGameHitWindow; // 0x1440        
        float m_flVaultMiniGameWheelScrollTime; // 0x1444        
        int32_t m_iVaultSuccessLightBuffDropCount; // 0x1448        
        int32_t m_iVaultSuccessHeavyBuffDropCount; // 0x144c        
        float m_flVaultLightScrollTime; // 0x1450        
        float m_flVaultWheelScrollTime; // 0x1454        
        float m_flVaultSuccessLightsScroll; // 0x1458        
        float m_flVaultSuccessWheelScroll; // 0x145c        
        float m_flVaultSuccessDestroyTime; // 0x1460        
        [[maybe_unused]] std::uint8_t pad_0x1464[0x4]; // 0x1464
        // m_VaultSuccessParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_VaultSuccessParticle;
        char m_VaultSuccessParticle[0xe0]; // 0x1468        
        // metadata: MPropertyStartGroup "NPC Vault Sounds"
        CSoundEventName m_VaultIdleLoopSound; // 0x1548        
        CSoundEventName m_VaultStartActiveSound; // 0x1558        
        CSoundEventName m_VaultActiveLoopSound; // 0x1568        
        CSoundEventName m_VaultStartCriticalSound; // 0x1578        
        CSoundEventName m_VaultCriticalLoopSound; // 0x1588        
        CSoundEventName m_VaultHitSuccessSoundLight; // 0x1598        
        CSoundEventName m_VaultHitSuccessSoundHeavy; // 0x15a8        
        CSoundEventName m_VaultHitFailSound; // 0x15b8        
        CSoundEventName m_VaultHit01; // 0x15c8        
        CSoundEventName m_VaultHit02; // 0x15d8        
        CSoundEventName m_VaultHit03; // 0x15e8        
        CSoundEventName m_VaultHit04; // 0x15f8        
        CSoundEventName m_VaultHit05; // 0x1608        
        CSoundEventName m_VaultHit06; // 0x1618        
        CSoundEventName m_VaultHit07; // 0x1628        
        CSoundEventName m_VaultLight01; // 0x1638        
        CSoundEventName m_VaultLight02; // 0x1648        
        CSoundEventName m_VaultLight03; // 0x1658        
        CSoundEventName m_VaultLight04; // 0x1668        
        CSoundEventName m_VaultLight05; // 0x1678        
        CSoundEventName m_VaultLight06; // 0x1688        
        CSoundEventName m_VaultLight07; // 0x1698        
        CSoundEventName m_VaultLight08; // 0x16a8        
        CSoundEventName m_VaultLightHitWindow; // 0x16b8        
        CSoundEventName m_VaultWheelSuccessDing; // 0x16c8        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CNPC_TrooperNeutralVData because it is not a standard-layout class
    static_assert(sizeof(CNPC_TrooperNeutralVData) == 0x16d8);
};
