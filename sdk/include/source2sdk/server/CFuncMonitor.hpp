#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CFuncBrush.hpp"
namespace source2sdk
{
    namespace server
    {
        struct CBaseEntity;
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
        // Size: 0x810
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "CUtlString m_targetCamera"
        // static metadata: MNetworkVarNames "int m_nResolutionEnum"
        // static metadata: MNetworkVarNames "bool m_bRenderShadows"
        // static metadata: MNetworkVarNames "bool m_bUseUniqueColorTarget"
        // static metadata: MNetworkVarNames "CUtlString m_brushModelName"
        // static metadata: MNetworkVarNames "EHANDLE m_hTargetCamera"
        // static metadata: MNetworkVarNames "bool m_bEnabled"
        // static metadata: MNetworkVarNames "bool m_bDraw3DSkybox"
        #pragma pack(push, 1)
        class CFuncMonitor : public source2sdk::server::CFuncBrush
        {
        public:
            // metadata: MNetworkEnable
            CUtlString m_targetCamera; // 0x7f0            
            // metadata: MNetworkEnable
            std::int32_t m_nResolutionEnum; // 0x7f8            
            // metadata: MNetworkEnable
            bool m_bRenderShadows; // 0x7fc            
            // metadata: MNetworkEnable
            bool m_bUseUniqueColorTarget; // 0x7fd            
            uint8_t _pad07fe[0x2]; // 0x7fe
            // metadata: MNetworkEnable
            CUtlString m_brushModelName; // 0x800            
            // metadata: MNetworkEnable
            // m_hTargetCamera has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hTargetCamera;
            char m_hTargetCamera[0x4]; // 0x808            
            // metadata: MNetworkEnable
            bool m_bEnabled; // 0x80c            
            // metadata: MNetworkEnable
            bool m_bDraw3DSkybox; // 0x80d            
            bool m_bStartEnabled; // 0x80e            
            uint8_t _pad080f[0x1];
            
            // Datamap fields:
            // void InputToggle; // 0x0
            // void InputEnable; // 0x0
            // void InputDisable; // 0x0
            // CUtlSymbolLarge InputSetCamera; // 0x0
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CFuncMonitor because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CFuncMonitor) == 0x810);
    };
};
