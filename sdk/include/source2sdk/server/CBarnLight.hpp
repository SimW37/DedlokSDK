#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/entity2/CEntityIOOutput.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/resourcesystem/InfoForResourceTypeCTextureBase.hpp"
#include "source2sdk/server/CBaseModelEntity.hpp"
namespace source2sdk
{
    namespace server
    {
        struct CBaseModelEntity;
    };
};

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
        // Size: 0xa60
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
        // static metadata: MNetworkVarNames "int32 m_nLightPathUniqueId"
        // static metadata: MNetworkVarNames "int32 m_nLightMapUniqueId"
        // static metadata: MNetworkVarNames "int m_nLuminaireShape"
        // static metadata: MNetworkVarNames "float m_flLuminaireSize"
        // static metadata: MNetworkVarNames "float m_flLuminaireAnisotropy"
        // static metadata: MNetworkVarNames "CUtlString m_LightStyleString"
        // static metadata: MNetworkVarNames "GameTime_t m_flLightStyleStartTime"
        // static metadata: MNetworkVarNames "CUtlString m_QueuedLightStyleStrings"
        // static metadata: MNetworkVarNames "CUtlString m_LightStyleEvents"
        // static metadata: MNetworkVarNames "CHandle< CBaseModelEntity > m_LightStyleTargets"
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
        // static metadata: MNetworkVarNames "bool m_bDynamicBounce"
        // static metadata: MNetworkVarNames "float m_flMinRoughness"
        // static metadata: MNetworkVarNames "Vector m_vAlternateColor"
        // static metadata: MNetworkVarNames "float m_fAlternateColorBrightness"
        // static metadata: MNetworkVarNames "int m_nFog"
        // static metadata: MNetworkVarNames "float m_flFogStrength"
        // static metadata: MNetworkVarNames "int m_nFogShadows"
        // static metadata: MNetworkVarNames "float m_flFogScale"
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
        class CBarnLight : public source2sdk::server::CBaseModelEntity
        {
        public:
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "RenderingChanged"
            bool m_bEnabled; // 0x778            
            uint8_t _pad0779[0x3]; // 0x779
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "RenderingChanged"
            std::int32_t m_nColorMode; // 0x77c            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "RenderingChanged"
            Color m_Color; // 0x780            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "RenderingChanged"
            float m_flColorTemperature; // 0x784            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "RenderingChanged"
            float m_flBrightness; // 0x788            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "RenderingChanged"
            float m_flBrightnessScale; // 0x78c            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "RenderingChanged"
            std::int32_t m_nDirectLight; // 0x790            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "RenderingChanged"
            std::int32_t m_nBakedShadowIndex; // 0x794            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "RenderingChanged"
            std::int32_t m_nLightPathUniqueId; // 0x798            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "RenderingChanged"
            std::int32_t m_nLightMapUniqueId; // 0x79c            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "RenderingChanged"
            std::int32_t m_nLuminaireShape; // 0x7a0            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "RenderingChanged"
            float m_flLuminaireSize; // 0x7a4            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "RenderingChanged"
            float m_flLuminaireAnisotropy; // 0x7a8            
            uint8_t _pad07ac[0x4]; // 0x7ac
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "StyleChanged"
            CUtlString m_LightStyleString; // 0x7b0            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "RenderingChanged"
            source2sdk::entity2::GameTime_t m_flLightStyleStartTime; // 0x7b8            
            uint8_t _pad07bc[0x4]; // 0x7bc
            // metadata: MNetworkEnable
            // m_QueuedLightStyleStrings has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CNetworkUtlVectorBase<CUtlString> m_QueuedLightStyleStrings;
            char m_QueuedLightStyleStrings[0x18]; // 0x7c0            
            // metadata: MNetworkEnable
            // m_LightStyleEvents has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CNetworkUtlVectorBase<CUtlString> m_LightStyleEvents;
            char m_LightStyleEvents[0x18]; // 0x7d8            
            // metadata: MNetworkEnable
            // m_LightStyleTargets has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CNetworkUtlVectorBase<CHandle<source2sdk::server::CBaseModelEntity>> m_LightStyleTargets;
            char m_LightStyleTargets[0x18]; // 0x7f0            
            source2sdk::entity2::CEntityIOOutput m_StyleEvent[4]; // 0x808            
            uint8_t _pad0868[0x20]; // 0x868
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "RenderingChanged"
            // m_hLightCookie has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CStrongHandle<source2sdk::resourcesystem::InfoForResourceTypeCTextureBase> m_hLightCookie;
            char m_hLightCookie[0x8]; // 0x888            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "RenderingChanged"
            float m_flShape; // 0x890            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "RenderingChanged"
            float m_flSoftX; // 0x894            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "RenderingChanged"
            float m_flSoftY; // 0x898            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "RenderingChanged"
            float m_flSkirt; // 0x89c            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "RenderingChanged"
            float m_flSkirtNear; // 0x8a0            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "RenderingChanged"
            // metadata: MNetworkBitCount "32"
            Vector m_vSizeParams; // 0x8a4            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "RenderingChanged"
            // metadata: MNetworkBitCount "32"
            float m_flRange; // 0x8b0            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "RenderingChanged"
            // metadata: MNetworkBitCount "32"
            Vector m_vShear; // 0x8b4            
            // metadata: MNetworkEnable
            std::int32_t m_nBakeSpecularToCubemaps; // 0x8c0            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "RenderingChanged"
            // metadata: MNetworkBitCount "32"
            Vector m_vBakeSpecularToCubemapsSize; // 0x8c4            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "RenderingChanged"
            std::int32_t m_nCastShadows; // 0x8d0            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "RenderingChanged"
            std::int32_t m_nShadowMapSize; // 0x8d4            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "RenderingChanged"
            std::int32_t m_nShadowPriority; // 0x8d8            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "RenderingChanged"
            bool m_bContactShadow; // 0x8dc            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "RenderingChanged"
            bool m_bForceShadowsEnabled; // 0x8dd            
            uint8_t _pad08de[0x2]; // 0x8de
            // metadata: MNetworkEnable
            std::int32_t m_nBounceLight; // 0x8e0            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "RenderingChanged"
            float m_flBounceScale; // 0x8e4            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "RenderingChanged"
            bool m_bDynamicBounce; // 0x8e8            
            uint8_t _pad08e9[0x3]; // 0x8e9
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "RenderingChanged"
            float m_flMinRoughness; // 0x8ec            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "RenderingChanged"
            Vector m_vAlternateColor; // 0x8f0            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "RenderingChanged"
            float m_fAlternateColorBrightness; // 0x8fc            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "RenderingChanged"
            std::int32_t m_nFog; // 0x900            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "RenderingChanged"
            float m_flFogStrength; // 0x904            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "RenderingChanged"
            std::int32_t m_nFogShadows; // 0x908            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "RenderingChanged"
            float m_flFogScale; // 0x90c            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "RenderingChanged"
            float m_flFadeSizeStart; // 0x910            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "RenderingChanged"
            float m_flFadeSizeEnd; // 0x914            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "RenderingChanged"
            float m_flShadowFadeSizeStart; // 0x918            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "RenderingChanged"
            float m_flShadowFadeSizeEnd; // 0x91c            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "RenderingChanged"
            bool m_bPrecomputedFieldsValid; // 0x920            
            uint8_t _pad0921[0x3]; // 0x921
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "RenderingChanged"
            Vector m_vPrecomputedBoundsMins; // 0x924            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "RenderingChanged"
            Vector m_vPrecomputedBoundsMaxs; // 0x930            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "RenderingChanged"
            Vector m_vPrecomputedOBBOrigin; // 0x93c            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "RenderingChanged"
            QAngle m_vPrecomputedOBBAngles; // 0x948            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "RenderingChanged"
            Vector m_vPrecomputedOBBExtent; // 0x954            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "RenderingChanged"
            std::int32_t m_nPrecomputedSubFrusta; // 0x960            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "RenderingChanged"
            Vector m_vPrecomputedOBBOrigin0; // 0x964            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "RenderingChanged"
            QAngle m_vPrecomputedOBBAngles0; // 0x970            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "RenderingChanged"
            Vector m_vPrecomputedOBBExtent0; // 0x97c            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "RenderingChanged"
            Vector m_vPrecomputedOBBOrigin1; // 0x988            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "RenderingChanged"
            QAngle m_vPrecomputedOBBAngles1; // 0x994            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "RenderingChanged"
            Vector m_vPrecomputedOBBExtent1; // 0x9a0            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "RenderingChanged"
            Vector m_vPrecomputedOBBOrigin2; // 0x9ac            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "RenderingChanged"
            QAngle m_vPrecomputedOBBAngles2; // 0x9b8            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "RenderingChanged"
            Vector m_vPrecomputedOBBExtent2; // 0x9c4            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "RenderingChanged"
            Vector m_vPrecomputedOBBOrigin3; // 0x9d0            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "RenderingChanged"
            QAngle m_vPrecomputedOBBAngles3; // 0x9dc            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "RenderingChanged"
            Vector m_vPrecomputedOBBExtent3; // 0x9e8            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "RenderingChanged"
            Vector m_vPrecomputedOBBOrigin4; // 0x9f4            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "RenderingChanged"
            QAngle m_vPrecomputedOBBAngles4; // 0xa00            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "RenderingChanged"
            Vector m_vPrecomputedOBBExtent4; // 0xa0c            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "RenderingChanged"
            Vector m_vPrecomputedOBBOrigin5; // 0xa18            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "RenderingChanged"
            QAngle m_vPrecomputedOBBAngles5; // 0xa24            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "RenderingChanged"
            Vector m_vPrecomputedOBBExtent5; // 0xa30            
            bool m_bPvsModifyEntity; // 0xa3c            
            uint8_t _pad0a3d[0x3]; // 0xa3d
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "RenderingChanged"
            // m_VisClusters has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CNetworkUtlVectorBase<std::uint16_t> m_VisClusters;
            char m_VisClusters[0x18]; // 0xa40            
            uint8_t _pad0a58[0x8];
            
            // Datamap fields:
            // bool InputCastDynamicShadows; // 0x0
            // void CBarnLightThink_SetNextQueuedLightStyle; // 0x0
            // void CBarnLightThink_ApplyLightStylesToTargets; // 0x0
            // void CBarnLightThink_LightStyleEvent; // 0x0
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CBarnLight because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CBarnLight) == 0xa60);
    };
};
