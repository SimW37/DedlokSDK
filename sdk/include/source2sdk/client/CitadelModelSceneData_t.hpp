#pragma once
#include "source2sdk/client/CitadelModelScenes_t.hpp"
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
    // Standard-layout class: true
    // Size: 0x28
    // 
    // static metadata: MModelGameData
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    struct CitadelModelSceneData_t
    {
    public:
        // m_scenes has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlDict<client::CitadelModelScenes_t> m_scenes;
        char m_scenes[0x28]; // 0x0        
    };
    #pragma pack(pop)
    
    static_assert(offsetof(CitadelModelSceneData_t, m_scenes) == 0x0);
    
    static_assert(sizeof(CitadelModelSceneData_t) == 0x28);
};
