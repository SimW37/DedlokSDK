#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/entity2/CEntityIOOutput.hpp"
#include "source2sdk/server/CPointEntity.hpp"
namespace source2sdk
{
    namespace server
    {
        struct CAI_BaseNPC;
    };
};
namespace source2sdk
{
    namespace server
    {
        struct CBaseFilter;
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
        // Size: 0x648
        // Has VTable
        #pragma pack(push, 1)
        class CNavLinkAreaEntity : public source2sdk::server::CPointEntity
        {
        public:
            float m_flWidth; // 0x4e0            
            Vector m_vLocatorOffset; // 0x4e4            
            QAngle m_qLocatorAnglesOffset; // 0x4f0            
            uint8_t _pad04fc[0x4]; // 0x4fc
            CUtlSymbolLarge m_strMovementForward; // 0x500            
            CUtlSymbolLarge m_strMovementReverse; // 0x508            
            std::int32_t m_nNavLinkIdForward; // 0x510            
            std::int32_t m_nNavLinkIdReverse; // 0x514            
            bool m_bEnabled; // 0x518            
            uint8_t _pad0519[0x7]; // 0x519
            CUtlSymbolLarge m_strFilterName; // 0x520            
            // m_hFilter has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseFilter> m_hFilter;
            char m_hFilter[0x4]; // 0x528            
            uint8_t _pad052c[0x4]; // 0x52c
            // m_vecNpcUsers has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVectorFixedGrowable<CHandle<source2sdk::server::CAI_BaseNPC>,6> m_vecNpcUsers;
            char m_vecNpcUsers[0x30]; // 0x530            
            CUtlSymbolLarge m_szListenForAnimTag; // 0x560            
            bool m_bIsListeningForAnimTag; // 0x568            
            uint8_t _pad0569[0xf]; // 0x569
            source2sdk::entity2::CEntityIOOutput m_OnAnimTagFired; // 0x578            
            source2sdk::entity2::CEntityIOOutput m_OnAnimTagStart; // 0x5a0            
            source2sdk::entity2::CEntityIOOutput m_OnAnimTagEnd; // 0x5c8            
            source2sdk::entity2::CEntityIOOutput m_OnNavLinkStart; // 0x5f0            
            source2sdk::entity2::CEntityIOOutput m_OnNavLinkFinish; // 0x618            
            bool m_bIsTerminus; // 0x640            
            uint8_t _pad0641[0x7];
            
            // Datamap fields:
            // void InputEnable; // 0x0
            // void InputDisable; // 0x0
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CNavLinkAreaEntity because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CNavLinkAreaEntity) == 0x648);
    };
};
