#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_BaseModelEntity.hpp"
#include "source2sdk/entity2/CEntityIOOutput.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/resourcesystem/InfoForResourceTypeCTextureBase.hpp"
namespace source2sdk
{
    namespace client
    {
        struct C_BaseModelEntity;
    };
};

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
        // Size: 0xcf0
        // Has VTable
        // 
        // static metadata: MEntityAllowsPortraitWorldSpawn
        // static metadata: MNetworkVarNames "bool m_bEnabled"
        // static metadata: MNetworkVarNames "int m_nColorMode"
        // static metadata: MNetworkVarNames "Color m_Color"
        // static metadata: MNetworkVarNames "float m_flColorTemperature"
        // static metadata: MNetworkVarNames "float m_flBrightness"
        // static metadata: MNetworkVarNames "float m_flBrightnessScale"
        // static metadata: MNetworkVarNames "int m_nDirectLight"
        // static metadata: MNetworkVarNames "int m_nBakedShadowIndex"
        // static metadata: MNetworkVarNames "int m_nLuminaireShape"
        // static metadata: MNetworkVarNames "float m_flLuminaireSize"
        // static metadata: MNetworkVarNames "float m_flLuminaireAnisotropy"
        // static metadata: MNetworkVarNames "CUtlString m_LightStyleString"
        // static metadata: MNetworkVarNames "GameTime_t m_flLightStyleStartTime"
        // static metadata: MNetworkVarNames "CUtlString m_QueuedLightStyleStrings"
        // static metadata: MNetworkVarNames "CUtlString m_LightStyleEvents"
        // static metadata: MNetworkVarNames "CHandle< C_BaseModelEntity > m_LightStyleTargets"
        // static metadata: MNetworkVarNames "HRenderTextureStrong m_hLightCookie"
        // static metadata: MNetworkVarNames "float m_flShape"
        // static metadata: MNetworkVarNames "float m_flSoftX"
        // static metadata: MNetworkVarNames "float m_flSoftY"
        // static metadata: MNetworkVarNames "float m_flSkirt"
        // static metadata: MNetworkVarNames "float m_flSkirtNear"
        // static metadata: MNetworkVarNames "Vector m_vSizeParams"
        // static metadata: MNetworkVarNames "float m_flRange"
        // static metadata: MNetworkVarNames "Vector m_vShear"
        // static metadata: MNetworkVarNames "int m_nBakeSpecularToCubemaps"
        // static metadata: MNetworkVarNames "Vector m_vBakeSpecularToCubemapsSize"
        // static metadata: MNetworkVarNames "int m_nCastShadows"
        // static metadata: MNetworkVarNames "int m_nShadowMapSize"
        // static metadata: MNetworkVarNames "int m_nShadowPriority"
        // static metadata: MNetworkVarNames "bool m_bContactShadow"
        // static metadata: MNetworkVarNames "bool m_bForceShadowsEnabled"
        // static metadata: MNetworkVarNames "int m_nBounceLight"
        // static metadata: MNetworkVarNames "float m_flBounceScale"
        // static metadata: MNetworkVarNames "float m_flMinRoughness"
        // static metadata: MNetworkVarNames "Vector m_vAlternateColor"
        // static metadata: MNetworkVarNames "float m_fAlternateColorBrightness"
        // static metadata: MNetworkVarNames "int m_nFog"
        // static metadata: MNetworkVarNames "float m_flFogStrength"
        // static metadata: MNetworkVarNames "int m_nFogShadows"
        // static metadata: MNetworkVarNames "float m_flFogScale"
        // static metadata: MNetworkVarNames "bool m_bFogMixedShadows"
        // static metadata: MNetworkVarNames "float m_flFadeSizeStart"
        // static metadata: MNetworkVarNames "float m_flFadeSizeEnd"
        // static metadata: MNetworkVarNames "float m_flShadowFadeSizeStart"
        // static metadata: MNetworkVarNames "float m_flShadowFadeSizeEnd"
        // static metadata: MNetworkVarNames "bool m_bPrecomputedFieldsValid"
        // static metadata: MNetworkVarNames "Vector m_vPrecomputedBoundsMins"
        // static metadata: MNetworkVarNames "Vector m_vPrecomputedBoundsMaxs"
        // static metadata: MNetworkVarNames "Vector m_vPrecomputedOBBOrigin"
        // static metadata: MNetworkVarNames "QAngle m_vPrecomputedOBBAngles"
        // static metadata: MNetworkVarNames "Vector m_vPrecomputedOBBExtent"
        // static metadata: MNetworkVarNames "int m_nPrecomputedSubFrusta"
        // static metadata: MNetworkVarNames "Vector m_vPrecomputedOBBOrigin0"
        // static metadata: MNetworkVarNames "QAngle m_vPrecomputedOBBAngles0"
        // static metadata: MNetworkVarNames "Vector m_vPrecomputedOBBExtent0"
        // static metadata: MNetworkVarNames "Vector m_vPrecomputedOBBOrigin1"
        // static metadata: MNetworkVarNames "QAngle m_vPrecomputedOBBAngles1"
        // static metadata: MNetworkVarNames "Vector m_vPrecomputedOBBExtent1"
        // static metadata: MNetworkVarNames "Vector m_vPrecomputedOBBOrigin2"
        // static metadata: MNetworkVarNames "QAngle m_vPrecomputedOBBAngles2"
        // static metadata: MNetworkVarNames "Vector m_vPrecomputedOBBExtent2"
        // static metadata: MNetworkVarNames "Vector m_vPrecomputedOBBOrigin3"
        // static metadata: MNetworkVarNames "QAngle m_vPrecomputedOBBAngles3"
        // static metadata: MNetworkVarNames "Vector m_vPrecomputedOBBExtent3"
        // static metadata: MNetworkVarNames "Vector m_vPrecomputedOBBOrigin4"
        // static metadata: MNetworkVarNames "QAngle m_vPrecomputedOBBAngles4"
        // static metadata: MNetworkVarNames "Vector m_vPrecomputedOBBExtent4"
        // static metadata: MNetworkVarNames "Vector m_vPrecomputedOBBOrigin5"
        // static metadata: MNetworkVarNames "QAngle m_vPrecomputedOBBAngles5"
        // static metadata: MNetworkVarNames "Vector m_vPrecomputedOBBExtent5"
        // static metadata: MNetworkVarNames "uint16 m_VisClusters"
        #pragma pack(push, 1)
        class C_BarnLight : public source2sdk::client::C_BaseModelEntity
        {
        public:
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "RenderingChanged"
            bool m_bEnabled; // 0x9a8            
            uint8_t _pad09a9[0x3]; // 0x9a9
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "RenderingChanged"
            std::int32_t m_nColorMode; // 0x9ac            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "RenderingChanged"
            Color m_Color; // 0x9b0            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "RenderingChanged"
            float m_flColorTemperature; // 0x9b4            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "RenderingChanged"
            float m_flBrightness; // 0x9b8            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "RenderingChanged"
            float m_flBrightnessScale; // 0x9bc            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "RenderingChanged"
            std::int32_t m_nDirectLight; // 0x9c0            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "RenderingChanged"
            std::int32_t m_nBakedShadowIndex; // 0x9c4            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "RenderingChanged"
            std::int32_t m_nLuminaireShape; // 0x9c8            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "RenderingChanged"
            float m_flLuminaireSize; // 0x9cc            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "RenderingChanged"
            float m_flLuminaireAnisotropy; // 0x9d0            
            uint8_t _pad09d4[0x4]; // 0x9d4
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "StyleChanged"
            CUtlString m_LightStyleString; // 0x9d8            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "RenderingChanged"
            source2sdk::entity2::GameTime_t m_flLightStyleStartTime; // 0x9e0            
            uint8_t _pad09e4[0x4]; // 0x9e4
            // metadata: MNetworkEnable
            // m_QueuedLightStyleStrings has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // C_NetworkUtlVectorBase<CUtlString> m_QueuedLightStyleStrings;
            char m_QueuedLightStyleStrings[0x18]; // 0x9e8            
            // metadata: MNetworkEnable
            // m_LightStyleEvents has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // C_NetworkUtlVectorBase<CUtlString> m_LightStyleEvents;
            char m_LightStyleEvents[0x18]; // 0xa00            
            // metadata: MNetworkEnable
            // m_LightStyleTargets has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // C_NetworkUtlVectorBase<CHandle<source2sdk::client::C_BaseModelEntity>> m_LightStyleTargets;
            char m_LightStyleTargets[0x18]; // 0xa18            
            source2sdk::entity2::CEntityIOOutput m_StyleEvent[4]; // 0xa30            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "RenderingChanged"
            // m_hLightCookie has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CStrongHandle<source2sdk::resourcesystem::InfoForResourceTypeCTextureBase> m_hLightCookie;
            char m_hLightCookie[0x8]; // 0xad0            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "RenderingChanged"
            float m_flShape; // 0xad8            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "RenderingChanged"
            float m_flSoftX; // 0xadc            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "RenderingChanged"
            float m_flSoftY; // 0xae0            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "RenderingChanged"
            float m_flSkirt; // 0xae4            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "RenderingChanged"
            float m_flSkirtNear; // 0xae8            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "RenderingChanged"
            // metadata: MNetworkBitCount "32"
            Vector m_vSizeParams; // 0xaec            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "RenderingChanged"
            // metadata: MNetworkBitCount "32"
            float m_flRange; // 0xaf8            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "RenderingChanged"
            // metadata: MNetworkBitCount "32"
            Vector m_vShear; // 0xafc            
            // metadata: MNetworkEnable
            std::int32_t m_nBakeSpecularToCubemaps; // 0xb08            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "RenderingChanged"
            // metadata: MNetworkBitCount "32"
            Vector m_vBakeSpecularToCubemapsSize; // 0xb0c            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "RenderingChanged"
            std::int32_t m_nCastShadows; // 0xb18            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "RenderingChanged"
            std::int32_t m_nShadowMapSize; // 0xb1c            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "RenderingChanged"
            std::int32_t m_nShadowPriority; // 0xb20            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "RenderingChanged"
            bool m_bContactShadow; // 0xb24            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "RenderingChanged"
            bool m_bForceShadowsEnabled; // 0xb25            
            uint8_t _pad0b26[0x2]; // 0xb26
            // metadata: MNetworkEnable
            std::int32_t m_nBounceLight; // 0xb28            
            // metadata: MNetworkEnable
            float m_flBounceScale; // 0xb2c            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "RenderingChanged"
            float m_flMinRoughness; // 0xb30            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "RenderingChanged"
            Vector m_vAlternateColor; // 0xb34            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "RenderingChanged"
            float m_fAlternateColorBrightness; // 0xb40            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "RenderingChanged"
            std::int32_t m_nFog; // 0xb44            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "RenderingChanged"
            float m_flFogStrength; // 0xb48            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "RenderingChanged"
            std::int32_t m_nFogShadows; // 0xb4c            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "RenderingChanged"
            float m_flFogScale; // 0xb50            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "RenderingChanged"
            bool m_bFogMixedShadows; // 0xb54            
            uint8_t _pad0b55[0x3]; // 0xb55
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "RenderingChanged"
            float m_flFadeSizeStart; // 0xb58            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "RenderingChanged"
            float m_flFadeSizeEnd; // 0xb5c            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "RenderingChanged"
            float m_flShadowFadeSizeStart; // 0xb60            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "RenderingChanged"
            float m_flShadowFadeSizeEnd; // 0xb64            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "RenderingChanged"
            bool m_bPrecomputedFieldsValid; // 0xb68            
            uint8_t _pad0b69[0x3]; // 0xb69
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "RenderingChanged"
            Vector m_vPrecomputedBoundsMins; // 0xb6c            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "RenderingChanged"
            Vector m_vPrecomputedBoundsMaxs; // 0xb78            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "RenderingChanged"
            Vector m_vPrecomputedOBBOrigin; // 0xb84            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "RenderingChanged"
            QAngle m_vPrecomputedOBBAngles; // 0xb90            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "RenderingChanged"
            Vector m_vPrecomputedOBBExtent; // 0xb9c            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "RenderingChanged"
            std::int32_t m_nPrecomputedSubFrusta; // 0xba8            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "RenderingChanged"
            Vector m_vPrecomputedOBBOrigin0; // 0xbac            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "RenderingChanged"
            QAngle m_vPrecomputedOBBAngles0; // 0xbb8            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "RenderingChanged"
            Vector m_vPrecomputedOBBExtent0; // 0xbc4            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "RenderingChanged"
            Vector m_vPrecomputedOBBOrigin1; // 0xbd0            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "RenderingChanged"
            QAngle m_vPrecomputedOBBAngles1; // 0xbdc            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "RenderingChanged"
            Vector m_vPrecomputedOBBExtent1; // 0xbe8            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "RenderingChanged"
            Vector m_vPrecomputedOBBOrigin2; // 0xbf4            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "RenderingChanged"
            QAngle m_vPrecomputedOBBAngles2; // 0xc00            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "RenderingChanged"
            Vector m_vPrecomputedOBBExtent2; // 0xc0c            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "RenderingChanged"
            Vector m_vPrecomputedOBBOrigin3; // 0xc18            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "RenderingChanged"
            QAngle m_vPrecomputedOBBAngles3; // 0xc24            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "RenderingChanged"
            Vector m_vPrecomputedOBBExtent3; // 0xc30            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "RenderingChanged"
            Vector m_vPrecomputedOBBOrigin4; // 0xc3c            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "RenderingChanged"
            QAngle m_vPrecomputedOBBAngles4; // 0xc48            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "RenderingChanged"
            Vector m_vPrecomputedOBBExtent4; // 0xc54            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "RenderingChanged"
            Vector m_vPrecomputedOBBOrigin5; // 0xc60            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "RenderingChanged"
            QAngle m_vPrecomputedOBBAngles5; // 0xc6c            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "RenderingChanged"
            Vector m_vPrecomputedOBBExtent5; // 0xc78            
            uint8_t _pad0c84[0x44]; // 0xc84
            bool m_bInitialBoneSetup; // 0xcc8            
            uint8_t _pad0cc9[0x7]; // 0xcc9
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "RenderingChanged"
            // m_VisClusters has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // C_NetworkUtlVectorBase<std::uint16_t> m_VisClusters;
            char m_VisClusters[0x18]; // 0xcd0            
            uint8_t _pad0ce8[0x8];
            
            // Datamap fields:
            // void m_StyleEvent[0]; // 0xa30
            // void m_StyleEvent[1]; // 0xa58
            // void m_StyleEvent[2]; // 0xa80
            // void m_StyleEvent[3]; // 0xaa8
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_BarnLight because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_BarnLight) == 0xcf0);
    };
};
