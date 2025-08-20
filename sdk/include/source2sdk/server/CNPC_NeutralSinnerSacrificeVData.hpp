#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/resourcesystem/InfoForResourceTypeIParticleSystemDefinition.hpp"
#include "source2sdk/server/CNPC_TrooperNeutralVData.hpp"

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
        class CNPC_NeutralSinnerSacrificeVData : public source2sdk::server::CNPC_TrooperNeutralVData
        {
        public:
            // metadata: MPropertyStartGroup "Retaliation Attack"
            // metadata: MPropertyDescription "How much damage to deal on retaliate the attacker when this is hit."
            float m_flRetaliateDamage; // 0x1460            
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
        
        // Cannot assert offsets of fields in CNPC_NeutralSinnerSacrificeVData because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CNPC_NeutralSinnerSacrificeVData) == 0x1700);
    };
};
