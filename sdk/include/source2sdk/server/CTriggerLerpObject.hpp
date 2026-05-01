#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/entity2/CEntityIOOutput.hpp"
#include "source2sdk/modellib/AttachmentHandle_t.hpp"
#include "source2sdk/server/CBaseTrigger.hpp"
#include "source2sdk/server/lerpdata_t.hpp"
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
        // Size: 0x978
        // Has VTable
        #pragma pack(push, 1)
        class CTriggerLerpObject : public source2sdk::server::CBaseTrigger
        {
        public:
            CUtlSymbolLarge m_iszLerpTarget; // 0x8d8            
            // m_hLerpTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hLerpTarget;
            char m_hLerpTarget[0x4]; // 0x8e0            
            uint8_t _pad08e4[0x4]; // 0x8e4
            CUtlSymbolLarge m_iszLerpTargetAttachment; // 0x8e8            
            source2sdk::modellib::AttachmentHandle_t m_hLerpTargetAttachment; // 0x8f0            
            uint8_t _pad08f1[0x3]; // 0x8f1
            float m_flLerpDuration; // 0x8f4            
            bool m_bAttachedEntityWasParented; // 0x8f8            
            bool m_bLerpRestoreMoveType; // 0x8f9            
            bool m_bSingleLerpObject; // 0x8fa            
            uint8_t _pad08fb[0x5]; // 0x8fb
            // m_vecLerpingObjects has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::server::lerpdata_t> m_vecLerpingObjects;
            char m_vecLerpingObjects[0x18]; // 0x900            
            CUtlSymbolLarge m_iszLerpEffect; // 0x918            
            CUtlSymbolLarge m_iszLerpSound; // 0x920            
            bool m_bAttachTouchingObject; // 0x928            
            uint8_t _pad0929[0x3]; // 0x929
            // m_hEntityToWaitForDisconnect has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hEntityToWaitForDisconnect;
            char m_hEntityToWaitForDisconnect[0x4]; // 0x92c            
            source2sdk::entity2::CEntityIOOutput m_OnLerpStarted; // 0x930            
            source2sdk::entity2::CEntityIOOutput m_OnLerpFinished; // 0x948            
            source2sdk::entity2::CEntityIOOutput m_OnDetached; // 0x960            
            
            // Datamap fields:
            // void CTriggerLerpObjectLerpThink; // 0x0
            // void CTriggerLerpObjectUnsetWaitForEntity; // 0x0
            // void CTriggerLerpObjectAttachedEntityThink; // 0x0
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CTriggerLerpObject because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CTriggerLerpObject) == 0x978);
    };
};
