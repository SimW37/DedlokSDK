#pragma once
#include "source2sdk/client/C_PointEntity.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    class C_BaseEntity;
};

namespace source2sdk::client
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x5f8
    // Has VTable
    #pragma pack(push, 1)
    class CInfoDynamicShadowHint : public client::C_PointEntity
    {
    public:
        bool m_bDisabled; // 0x5e0        
        [[maybe_unused]] std::uint8_t pad_0x5e1[0x3]; // 0x5e1
        float m_flRange; // 0x5e4        
        int32_t m_nImportance; // 0x5e8        
        int32_t m_nLightChoice; // 0x5ec        
        // m_hLight has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<client::C_BaseEntity> m_hLight;
        char m_hLight[0x4]; // 0x5f0        
        [[maybe_unused]] std::uint8_t pad_0x5f4[0x4];
        
        // Datamap fields:
        // void InputEnable; // 0x0
        // void InputDisable; // 0x0
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CInfoDynamicShadowHint because it is not a standard-layout class
    static_assert(sizeof(CInfoDynamicShadowHint) == 0x5f8);
};
