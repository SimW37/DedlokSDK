#pragma once
#include "source2sdk/resourcesystem/InfoForResourceTypeCModel.hpp"
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
    // Size: 0xe8
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    struct ModelChange_t
    {
    public:
        // m_ModelName has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeCModel>> m_ModelName;
        char m_ModelName[0xe0]; // 0x0        
        int32_t m_nPriority; // 0xe0        
        [[maybe_unused]] std::uint8_t pad_0xe4[0x4];
    };
    #pragma pack(pop)
    
    static_assert(offsetof(ModelChange_t, m_ModelName) == 0x0);
    static_assert(offsetof(ModelChange_t, m_nPriority) == 0xe0);
    
    static_assert(sizeof(ModelChange_t) == 0xe8);
};
