#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_ParticleSystem.hpp"
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
        // Size: 0xf88
        // Has VTable
        // 
        // static metadata: MNetworkExcludeByName "m_iEffectIndex"
        // static metadata: MNetworkIncludeByName "m_iTeamNum"
        // static metadata: MNetworkVarNames "HParticleSystemDefinitionStrong m_iFriendlyEffectIndex"
        // static metadata: MNetworkVarNames "HParticleSystemDefinitionStrong m_iEnemyEffectIndex"
        #pragma pack(push, 1)
        class C_TeamRelativeParticleSystem : public source2sdk::client::C_ParticleSystem
        {
        public:
            uint8_t _pad0f50[0x18]; // 0xf50
            CUtlSymbolLarge m_iszFriendlyEffectName; // 0xf68            
            CUtlSymbolLarge m_iszEnemyEffectName; // 0xf70            
            // metadata: MNetworkEnable
            // metadata: MNotSaved
            // m_iFriendlyEffectIndex has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CStrongHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition> m_iFriendlyEffectIndex;
            char m_iFriendlyEffectIndex[0x8]; // 0xf78            
            // metadata: MNetworkEnable
            // metadata: MNotSaved
            // m_iEnemyEffectIndex has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CStrongHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition> m_iEnemyEffectIndex;
            char m_iEnemyEffectIndex[0x8]; // 0xf80            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_TeamRelativeParticleSystem because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_TeamRelativeParticleSystem) == 0xf88);
    };
};
