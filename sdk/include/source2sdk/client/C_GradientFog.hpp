#pragma once
#include "source2sdk/client/C_BaseEntity.hpp"
#include "source2sdk/resourcesystem/InfoForResourceTypeCTextureBase.hpp"
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
    // Standard-layout class: false
    // Size: 0x5a8
    // Has VTable
    // 
    // static metadata: MNetworkVarNames "HRenderTextureStrong m_hGradientFogTexture"
    // static metadata: MNetworkVarNames "float m_flFogStartDistance"
    // static metadata: MNetworkVarNames "float m_flFogEndDistance"
    // static metadata: MNetworkVarNames "bool m_bHeightFogEnabled"
    // static metadata: MNetworkVarNames "float m_flFogStartHeight"
    // static metadata: MNetworkVarNames "float m_flFogEndHeight"
    // static metadata: MNetworkVarNames "float m_flFarZ"
    // static metadata: MNetworkVarNames "float m_flFogMaxOpacity"
    // static metadata: MNetworkVarNames "float m_flFogFalloffExponent"
    // static metadata: MNetworkVarNames "float m_flFogVerticalExponent"
    // static metadata: MNetworkVarNames "Color m_fogColor"
    // static metadata: MNetworkVarNames "float m_flFogStrength"
    // static metadata: MNetworkVarNames "float m_flFadeTime"
    // static metadata: MNetworkVarNames "bool m_bStartDisabled"
    // static metadata: MNetworkVarNames "bool m_bIsEnabled"
    #pragma pack(push, 1)
    class C_GradientFog : public client::C_BaseEntity
    {
    public:
        // metadata: MNetworkEnable
        // m_hGradientFogTexture has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CStrongHandle<resourcesystem::InfoForResourceTypeCTextureBase> m_hGradientFogTexture;
        char m_hGradientFogTexture[0x8]; // 0x510        
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "FogStateChanged"
        float m_flFogStartDistance; // 0x518        
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "FogStateChanged"
        float m_flFogEndDistance; // 0x51c        
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "FogStateChanged"
        bool m_bHeightFogEnabled; // 0x520        
        [[maybe_unused]] std::uint8_t pad_0x521[0x3]; // 0x521
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "FogStateChanged"
        float m_flFogStartHeight; // 0x524        
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "FogStateChanged"
        float m_flFogEndHeight; // 0x528        
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "FogStateChanged"
        float m_flFarZ; // 0x52c        
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "FogStateChanged"
        float m_flFogMaxOpacity; // 0x530        
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "FogStateChanged"
        float m_flFogFalloffExponent; // 0x534        
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "FogStateChanged"
        float m_flFogVerticalExponent; // 0x538        
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "FogStateChanged"
        Color m_fogColor; // 0x53c        
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "FogStateChanged"
        float m_flFogStrength; // 0x540        
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "FogStateChanged"
        float m_flFadeTime; // 0x544        
        // metadata: MNetworkEnable
        bool m_bStartDisabled; // 0x548        
        // metadata: MNetworkEnable
        bool m_bIsEnabled; // 0x549        
        bool m_bGradientFogNeedsTextures; // 0x54a        
        [[maybe_unused]] std::uint8_t pad_0x54b[0x5d];
        
        // Datamap fields:
        // bool InputEnable; // 0x0
        // bool InputDisable; // 0x0
        // float InputSetFogStartDistance; // 0x0
        // float InputSetFogEndDistance; // 0x0
        // float InputSetFogStartHeight; // 0x0
        // float InputSetFogEndHeight; // 0x0
        // float InputSetFogMaxOpacity; // 0x0
        // float InputSetFogFalloffExponent; // 0x0
        // float InputSetFogVerticalExponent; // 0x0
        // Color InputSetFogColor; // 0x0
        // float InputSetFogStrength; // 0x0
        // float InputSetFarZ; // 0x0
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_GradientFog because it is not a standard-layout class
    static_assert(sizeof(C_GradientFog) == 0x5a8);
};
