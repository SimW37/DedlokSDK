#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/ENeutralTrooperType.hpp"
#include "source2sdk/client/ENeutralWeakPointType.hpp"
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
        // Size: 0x16b0
        // Has VTable
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CNPC_TrooperNeutralVData : public source2sdk::server::CAI_CitadelNPCVData
        {
        public:
            source2sdk::client::ENeutralTrooperType m_eTrooperType; // 0x1338            
            float m_flGoldReward; // 0x133c            
            float m_flGoldRewardBonusPercentPerMinute; // 0x1340            
            bool m_bCapSimultanousAttackers; // 0x1344            
            uint8_t _pad1345[0x3]; // 0x1345
            float m_flShieldReactivateDelay; // 0x1348            
            float m_flDyingDuration; // 0x134c            
            // metadata: MPropertyStartGroup "Behavior"
            // metadata: MPropertyFriendlyName "Damaged by Bullets?"
            bool m_bDamagedByBullets; // 0x1350            
            // metadata: MPropertyFriendlyName "Damaged by Melee?"
            bool m_bDamagedByMelee; // 0x1351            
            // metadata: MPropertyFriendlyName "Damaged by Abilities?"
            bool m_bDamagedByAbilities; // 0x1352            
            uint8_t _pad1353[0x5]; // 0x1353
            // metadata: MPropertyStartGroup "Shield FX"
            // m_ShieldParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_ShieldParticle;
            char m_ShieldParticle[0xe0]; // 0x1358            
            // metadata: MPropertyDescription "Particle to play when dealing retaliate damage"
            // m_retaliateParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_retaliateParticle;
            char m_retaliateParticle[0xe0]; // 0x1438            
            // metadata: MPropertyStartGroup "AOE Attack"
            bool m_bHasAOEAttack; // 0x1518            
            uint8_t _pad1519[0x3]; // 0x1519
            float m_flAOERadius; // 0x151c            
            float m_flAOEDamage; // 0x1520            
            float m_flAOEAttackCooldown; // 0x1524            
            // m_AOEParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_AOEParticle;
            char m_AOEParticle[0xe0]; // 0x1528            
            // m_AOEDebuffToApply has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::server::CCitadelModifier> m_AOEDebuffToApply;
            char m_AOEDebuffToApply[0x10]; // 0x1608            
            CSoundEventName m_AOEInitiateSound; // 0x1618            
            CSoundEventName m_AOESound; // 0x1628            
            float m_AOEDebuffDuration; // 0x1638            
            uint8_t _pad163c[0x4]; // 0x163c
            // metadata: MPropertyStartGroup "Body"
            // m_vecRandomBodyGroup has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CUtlString> m_vecRandomBodyGroup;
            char m_vecRandomBodyGroup[0x18]; // 0x1640            
            // m_vecRandomSkin has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CUtlString> m_vecRandomSkin;
            char m_vecRandomSkin[0x18]; // 0x1658            
            // metadata: MPropertyStartGroup "Visuals"
            float m_flHullCapsuleRadius; // 0x1670            
            float m_flHullCapsuleHeight; // 0x1674            
            // metadata: MPropertyStartGroup "Idles"
            bool m_bFaceEnemyWhileIdle; // 0x1678            
            uint8_t _pad1679[0x7]; // 0x1679
            CSoundEventName m_IdleLoopSound; // 0x1680            
            // metadata: MPropertyStartGroup "Movement"
            source2sdk::client::MoveType_t m_MoveType; // 0x1690            
            uint8_t _pad1691[0x3]; // 0x1691
            // metadata: MPropertyStartGroup "WeakPoints"
            std::int32_t m_iWeakPointCount; // 0x1694            
            source2sdk::client::ENeutralWeakPointType m_iWeakPointType; // 0x1698            
            uint8_t _pad1699[0x3]; // 0x1699
            float m_iWeakPointRespawnTime; // 0x169c            
            // m_NeutralDamageGrowth has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::server::CCitadelModifier> m_NeutralDamageGrowth;
            char m_NeutralDamageGrowth[0x10]; // 0x16a0            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CNPC_TrooperNeutralVData because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CNPC_TrooperNeutralVData) == 0x16b0);
    };
};
