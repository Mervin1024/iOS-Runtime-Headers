/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
 */

@class WAKView, WebHighlightLayer, WebNodeHighlightView;

@interface WebNodeHighlight : NSObject {
    id _delegate;
    WebHighlightLayer *_highlightLayer;
    WebNodeHighlightView *_highlightView;
    struct InspectorController { struct RefPtr<WebCore::InstrumentingAgents> { struct InstrumentingAgents {} *x_1_1_1; } x1; struct OwnPtr<WebCore::InjectedScriptManager> { struct InjectedScriptManager {} *x_2_1_1; } x2; struct OwnPtr<WebCore::InspectorCompositeState> { struct InspectorCompositeState {} *x_3_1_1; } x3; struct OwnPtr<WebCore::InspectorOverlay> { struct InspectorOverlay {} *x_4_1_1; } x4; struct InspectorAgent {} *x5; struct InspectorDOMAgent {} *x6; struct InspectorResourceAgent {} *x7; struct InspectorPageAgent {} *x8; struct InspectorMemoryAgent {} *x9; struct InspectorDebuggerAgent {} *x10; struct InspectorDOMDebuggerAgent {} *x11; struct InspectorProfilerAgent {} *x12; struct RefPtr<WebCore::InspectorBackendDispatcher> { struct InspectorBackendDispatcher {} *x_13_1_1; } x13; struct OwnPtr<WebCore::InspectorFrontendClient> { struct InspectorFrontendClient {} *x_14_1_1; } x14; struct OwnPtr<WebCore::InspectorFrontend> { struct InspectorFrontend {} *x_15_1_1; } x15; struct Page {} *x16; struct InspectorClient {} *x17; struct InspectorAgentRegistry { struct Vector<WTF::OwnPtr<WebCore::InspectorBaseAgentInterface>, 0, WTF::CrashOnOverflow> { struct OwnPtr<WebCore::InspectorBaseAgentInterface> {} *x_1_2_1; unsigned int x_1_2_2; unsigned int x_1_2_3; } x_18_1_1; } x18; boolx19; } *_inspectorController;
    WAKView *_targetView;
}

- (void)attach;
- (void)dealloc;
- (id)delegate;
- (void)detach;
- (id)highlightView;
- (id)initWithTargetView:(id)arg1 inspectorController:(struct InspectorController { struct RefPtr<WebCore::InstrumentingAgents> { struct InstrumentingAgents {} *x_1_1_1; } x1; struct OwnPtr<WebCore::InjectedScriptManager> { struct InjectedScriptManager {} *x_2_1_1; } x2; struct OwnPtr<WebCore::InspectorCompositeState> { struct InspectorCompositeState {} *x_3_1_1; } x3; struct OwnPtr<WebCore::InspectorOverlay> { struct InspectorOverlay {} *x_4_1_1; } x4; struct InspectorAgent {} *x5; struct InspectorDOMAgent {} *x6; struct InspectorResourceAgent {} *x7; struct InspectorPageAgent {} *x8; struct InspectorMemoryAgent {} *x9; struct InspectorDebuggerAgent {} *x10; struct InspectorDOMDebuggerAgent {} *x11; struct InspectorProfilerAgent {} *x12; struct RefPtr<WebCore::InspectorBackendDispatcher> { struct InspectorBackendDispatcher {} *x_13_1_1; } x13; struct OwnPtr<WebCore::InspectorFrontendClient> { struct InspectorFrontendClient {} *x_14_1_1; } x14; struct OwnPtr<WebCore::InspectorFrontend> { struct InspectorFrontend {} *x_15_1_1; } x15; struct Page {} *x16; struct InspectorClient {} *x17; struct InspectorAgentRegistry { struct Vector<WTF::OwnPtr<WebCore::InspectorBaseAgentInterface>, 0, WTF::CrashOnOverflow> { struct OwnPtr<WebCore::InspectorBaseAgentInterface> {} *x_1_2_1; unsigned int x_1_2_2; unsigned int x_1_2_3; } x_18_1_1; } x18; boolx19; }*)arg2;
- (struct InspectorController { struct RefPtr<WebCore::InstrumentingAgents> { struct InstrumentingAgents {} *x_1_1_1; } x1; struct OwnPtr<WebCore::InjectedScriptManager> { struct InjectedScriptManager {} *x_2_1_1; } x2; struct OwnPtr<WebCore::InspectorCompositeState> { struct InspectorCompositeState {} *x_3_1_1; } x3; struct OwnPtr<WebCore::InspectorOverlay> { struct InspectorOverlay {} *x_4_1_1; } x4; struct InspectorAgent {} *x5; struct InspectorDOMAgent {} *x6; struct InspectorResourceAgent {} *x7; struct InspectorPageAgent {} *x8; struct InspectorMemoryAgent {} *x9; struct InspectorDebuggerAgent {} *x10; struct InspectorDOMDebuggerAgent {} *x11; struct InspectorProfilerAgent {} *x12; struct RefPtr<WebCore::InspectorBackendDispatcher> { struct InspectorBackendDispatcher {} *x_13_1_1; } x13; struct OwnPtr<WebCore::InspectorFrontendClient> { struct InspectorFrontendClient {} *x_14_1_1; } x14; struct OwnPtr<WebCore::InspectorFrontend> { struct InspectorFrontend {} *x_15_1_1; } x15; struct Page {} *x16; struct InspectorClient {} *x17; struct InspectorAgentRegistry { struct Vector<WTF::OwnPtr<WebCore::InspectorBaseAgentInterface>, 0, WTF::CrashOnOverflow> { struct OwnPtr<WebCore::InspectorBaseAgentInterface> {} *x_1_2_1; unsigned int x_1_2_2; unsigned int x_1_2_3; } x_18_1_1; } x18; boolx19; }*)inspectorController;
- (void)setDelegate:(id)arg1;
- (void)setNeedsDisplay;
- (id)targetView;

@end
