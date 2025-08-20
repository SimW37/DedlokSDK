#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CAI_CitadelNPCVData.hpp"
#include "source2sdk/client/CCitadelModifier.hpp"
#include "source2sdk/client/ENeutralFlyingWeakPointType.hpp"
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
        // Size: 0x1460
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
            bool m_bCapSimultanousAttackers; // 0x1104            
            uint8_t _pad1105[0x3]; // 0x1105
            float m_flShieldReactivateDelay; // 0x1108            
            float m_flDyingDuration; // 0x110c            
            // metadata: MPropertyStartGroup "Behavior"
            // metadata: MPropertyFriendlyName "Damaged by Bullets?"
            bool m_bDamagedByBullets; // 0x1110            
            // metadata: MPropertyFriendlyName "Damaged by Melee?"
            bool m_bDamagedByMelee; // 0x1111            
            // metadata: MPropertyFriendlyName "Damaged by Abilities?"
            bool m_bDamagedByAbilities; // 0x1112            
            uint8_t _pad1113[0x5]; // 0x1113
            // metadata: MPropertyStartGroup "Shield FX"
            // m_ShieldParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_ShieldParticle;
            char m_ShieldParticle[0xe0]; // 0x1118            
            // metadata: MPropertyDescription "Particle to play when dealing retaliate damage"
            // m_retaliateParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_retaliateParticle;
            char m_retaliateParticle[0xe0]; // 0x11f8            
            // metadata: MPropertyStartGroup "AOE Attack"
            bool m_bHasAOEAttack; // 0x12d8            
            uint8_t _pad12d9[0x3]; // 0x12d9
            float m_flAOERadius; // 0x12dc            
            float m_flAOEDamage; // 0x12e0            
            float m_flAOEAttackCooldown; // 0x12e4            
            // m_AOEParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_AOEParticle;
            char m_AOEParticle[0xe0]; // 0x12e8            
            // m_AOEDebuffToApply has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::client::CCitadelModifier> m_AOEDebuffToApply;
            char m_AOEDebuffToApply[0x10]; // 0x13c8            
            CSoundEventName m_AOEInitiateSound; // 0x13d8            
            CSoundEventName m_AOESound; // 0x13e8            
            float m_AOEDebuffDuration; // 0x13f8            
            uint8_t _pad13fc[0x4]; // 0x13fc
            // metadata: MPropertyStartGroup "Body"
            // m_vecRandomBodyGroup has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CUtlString> m_vecRandomBodyGroup;
            char m_vecRandomBodyGroup[0x18]; // 0x1400            
            // m_vecRandomSkin has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CUtlString> m_vecRandomSkin;
            char m_vecRandomSkin[0x18]; // 0x1418            
            // metadata: MPropertyStartGroup "Visuals"
            float m_flHullCapsuleRadius; // 0x1430            
            float m_flHullCapsuleHeight; // 0x1434            
            // metadata: MPropertyStartGroup "Idles"
            bool m_bFaceEnemyWhileIdle; // 0x1438            
            uint8_t _pad1439[0x7]; // 0x1439
            CSoundEventName m_IdleLoopSound; // 0x1440            
            // metadata: MPropertyStartGroup "Movement"
            source2sdk::client::MoveType_t m_MoveType; // 0x1450            
            uint8_t _pad1451[0x3]; // 0x1451
            // metadata: MPropertyStartGroup "WeakPoints"
            std::int32_t m_iWeakPointCount; // 0x1454            
            source2sdk::client::ENeutralFlyingWeakPointType m_iWeakPointType; // 0x1458            
            uint8_t _pad1459[0x3]; // 0x1459
            float m_flWeakPointRespawnAtHealthPct; // 0x145c            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CNPC_TrooperNeutralVData because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CNPC_TrooperNeutralVData) == 0x1460);
    };
};
