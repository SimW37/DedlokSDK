#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CitadelMuzzle_t.hpp"

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
        // Standard-layout class: true
        // Size: 0x30
        // 
        // static metadata: MModelGameData
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        struct CitadelMuzzleSettings_t
        {
        public:
            // m_vecPrimaryMuzzles has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::client::CitadelMuzzle_t> m_vecPrimaryMuzzles;
            char m_vecPrimaryMuzzles[0x18]; // 0x0            
            // m_vecSecondaryMuzzles has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::client::CitadelMuzzle_t> m_vecSecondaryMuzzles;
            char m_vecSecondaryMuzzles[0x18]; // 0x18            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::CitadelMuzzleSettings_t, m_vecPrimaryMuzzles) == 0x0);
        static_assert(offsetof(source2sdk::client::CitadelMuzzleSettings_t, m_vecSecondaryMuzzles) == 0x18);
        
        static_assert(sizeof(source2sdk::client::CitadelMuzzleSettings_t) == 0x30);
    };
};
