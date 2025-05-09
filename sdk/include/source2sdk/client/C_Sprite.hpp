#pragma once
#include "source2sdk/client/C_BaseModelEntity.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/modellib/AttachmentHandle_t.hpp"
#include "source2sdk/resourcesystem/InfoForResourceTypeIMaterial2.hpp"
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
    // Size: 0xab8
    // Has VTable
    // 
    // static metadata: MNetworkVarNames "HMaterialStrong m_hSpriteMaterial"
    // static metadata: MNetworkVarNames "CHandle< CBaseEntity> m_hAttachedToEntity"
    // static metadata: MNetworkVarNames "AttachmentHandle_t m_nAttachment"
    // static metadata: MNetworkVarNames "float32 m_flSpriteFramerate"
    // static metadata: MNetworkVarNames "float32 m_flFrame"
    // static metadata: MNetworkVarNames "uint32 m_nBrightness"
    // static metadata: MNetworkVarNames "float32 m_flBrightnessDuration"
    // static metadata: MNetworkVarNames "float32 m_flSpriteScale"
    // static metadata: MNetworkVarNames "float32 m_flScaleDuration"
    // static metadata: MNetworkVarNames "bool m_bWorldSpaceScale"
    // static metadata: MNetworkVarNames "float32 m_flGlowProxySize"
    // static metadata: MNetworkVarNames "float32 m_flHDRColorScale"
    #pragma pack(push, 1)
    class C_Sprite : public client::C_BaseModelEntity
    {
    public:
        // metadata: MNetworkEnable
        // m_hSpriteMaterial has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CStrongHandle<resourcesystem::InfoForResourceTypeIMaterial2> m_hSpriteMaterial;
        char m_hSpriteMaterial[0x8]; // 0x9a8        
        // metadata: MNetworkEnable
        // m_hAttachedToEntity has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<client::C_BaseEntity> m_hAttachedToEntity;
        char m_hAttachedToEntity[0x4]; // 0x9b0        
        // metadata: MNetworkEnable
        modellib::AttachmentHandle_t m_nAttachment; // 0x9b4        
        [[maybe_unused]] std::uint8_t pad_0x9b5[0x3]; // 0x9b5
        // metadata: MNetworkEnable
        // metadata: MNetworkBitCount "8"
        // metadata: MNetworkMinValue "0,000000"
        // metadata: MNetworkMaxValue "60,000000"
        // metadata: MNetworkEncodeFlags "2"
        float m_flSpriteFramerate; // 0x9b8        
        // metadata: MNetworkEnable
        // metadata: MNetworkBitCount "20"
        // metadata: MNetworkMinValue "0,000000"
        // metadata: MNetworkMaxValue "256,000000"
        // metadata: MNetworkEncodeFlags "1"
        float m_flFrame; // 0x9bc        
        entity2::GameTime_t m_flDieTime; // 0x9c0        
        [[maybe_unused]] std::uint8_t pad_0x9c4[0xc]; // 0x9c4
        // metadata: MNetworkEnable
        uint32_t m_nBrightness; // 0x9d0        
        // metadata: MNetworkEnable
        float m_flBrightnessDuration; // 0x9d4        
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "OnSpriteScaleChanged"
        float m_flSpriteScale; // 0x9d8        
        // metadata: MNetworkEnable
        float m_flScaleDuration; // 0x9dc        
        // metadata: MNetworkEnable
        bool m_bWorldSpaceScale; // 0x9e0        
        [[maybe_unused]] std::uint8_t pad_0x9e1[0x3]; // 0x9e1
        // metadata: MNetworkEnable
        // metadata: MNetworkBitCount "6"
        // metadata: MNetworkMinValue "0,000000"
        // metadata: MNetworkMaxValue "64,000000"
        // metadata: MNetworkEncodeFlags "2"
        float m_flGlowProxySize; // 0x9e4        
        // metadata: MNetworkEnable
        float m_flHDRColorScale; // 0x9e8        
        entity2::GameTime_t m_flLastTime; // 0x9ec        
        float m_flMaxFrame; // 0x9f0        
        float m_flStartScale; // 0x9f4        
        float m_flDestScale; // 0x9f8        
        entity2::GameTime_t m_flScaleTimeStart; // 0x9fc        
        int32_t m_nStartBrightness; // 0xa00        
        int32_t m_nDestBrightness; // 0xa04        
        entity2::GameTime_t m_flBrightnessTimeStart; // 0xa08        
        [[maybe_unused]] std::uint8_t pad_0xa0c[0x4]; // 0xa0c
        // m_hOldSpriteMaterial has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CWeakHandle<resourcesystem::InfoForResourceTypeIMaterial2> m_hOldSpriteMaterial;
        char m_hOldSpriteMaterial[0x8]; // 0xa10        
        [[maybe_unused]] std::uint8_t pad_0xa18[0x98]; // 0xa18
        int32_t m_nSpriteWidth; // 0xab0        
        int32_t m_nSpriteHeight; // 0xab4        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_Sprite because it is not a standard-layout class
    static_assert(sizeof(C_Sprite) == 0xab8);
};
