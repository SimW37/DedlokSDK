#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/AccoladeID_t.hpp"
#include "source2sdk/client/ECitadelGameMode.hpp"
#include "source2sdk/client/TrackedStatValue_t.hpp"
#include "source2sdk/server/EAccoladeThresholdType.hpp"

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
        // Standard-layout class: true
        // Size: 0x68
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CAccoladeDefinition
        {
        public:
            // metadata: MVDataUniqueMonotonicInt "_editor/next_accolade_id"
            // metadata: MPropertyAttributeEditor "locked_int()"
            source2sdk::client::AccoladeID_t m_unAccoladeID; // 0x0            
            uint8_t _pad0004[0xc]; // 0x4
            CUtlString m_sTrackedStatName; // 0x10            
            uint8_t _pad0018[0x8]; // 0x18
            CUtlString m_sFlavorName; // 0x20            
            CUtlString m_sDescription; // 0x28            
            source2sdk::server::EAccoladeThresholdType m_eThresholdType; // 0x30            
            uint8_t _pad0034[0x4]; // 0x34
            // m_vecThresholds has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::client::TrackedStatValue_t> m_vecThresholds;
            char m_vecThresholds[0x18]; // 0x38            
            // m_vecEnabledGameModes has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::client::ECitadelGameMode> m_vecEnabledGameModes;
            char m_vecEnabledGameModes[0x18]; // 0x50            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::server::CAccoladeDefinition, m_unAccoladeID) == 0x0);
        static_assert(offsetof(source2sdk::server::CAccoladeDefinition, m_sTrackedStatName) == 0x10);
        static_assert(offsetof(source2sdk::server::CAccoladeDefinition, m_sFlavorName) == 0x20);
        static_assert(offsetof(source2sdk::server::CAccoladeDefinition, m_sDescription) == 0x28);
        static_assert(offsetof(source2sdk::server::CAccoladeDefinition, m_eThresholdType) == 0x30);
        static_assert(offsetof(source2sdk::server::CAccoladeDefinition, m_vecThresholds) == 0x38);
        static_assert(offsetof(source2sdk::server::CAccoladeDefinition, m_vecEnabledGameModes) == 0x50);
        
        static_assert(sizeof(source2sdk::server::CAccoladeDefinition) == 0x68);
    };
};
