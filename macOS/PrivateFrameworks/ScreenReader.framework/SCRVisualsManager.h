//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSXPCConnection, SCRVisualsBrailleWindow, SCRVisualsCaptionWindow, SCRVisualsMenuWindow, SCRVisualsOverlayWindow, SCRVisualsPreferences, SCRVisualsRemoteDelegate, SCRVisualsRotorWindow, SCRVisualsSearchWindow;

__attribute__((visibility("hidden")))
@interface SCRVisualsManager : NSObject
{
    BOOL _visualsEnabled;
    BOOL _screenCurtainEnabled;
    BOOL _tileVisualsEnabled;
    SCRVisualsCaptionWindow *_captionWindow;
    SCRVisualsMenuWindow *_menuWindow;
    SCRVisualsRotorWindow *_rotorWindow;
    SCRVisualsSearchWindow *_searchWindow;
    SCRVisualsOverlayWindow *_overlayWindow;
    SCRVisualsBrailleWindow *_brailleWindow;
    SCRVisualsPreferences *__visualsPreferences;
    id <AXVisualsAgentInterface> __visualsAgent;
    NSXPCConnection *__visualsAgentConnection;
    SCRVisualsRemoteDelegate *__agentDelegate;
}

+ (void)queueOnMainThreadWithLowerPriority:(CDUnknownBlockType)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic, setter=_setAgentDelegate:) SCRVisualsRemoteDelegate *_agentDelegate; // @synthesize _agentDelegate=__agentDelegate;
@property(retain, nonatomic, setter=_setVisualsAgentConnection:) NSXPCConnection *_visualsAgentConnection; // @synthesize _visualsAgentConnection=__visualsAgentConnection;
@property(retain, nonatomic, setter=_setVisualsAgent:) id <AXVisualsAgentInterface> _visualsAgent; // @synthesize _visualsAgent=__visualsAgent;
@property(retain, nonatomic, setter=_setVisualsPreferences:) SCRVisualsPreferences *_visualsPreferences; // @synthesize _visualsPreferences=__visualsPreferences;
@property(nonatomic) BOOL tileVisualsEnabled; // @synthesize tileVisualsEnabled=_tileVisualsEnabled;
@property(nonatomic) BOOL screenCurtainEnabled; // @synthesize screenCurtainEnabled=_screenCurtainEnabled;
@property(readonly, nonatomic) SCRVisualsBrailleWindow *brailleWindow; // @synthesize brailleWindow=_brailleWindow;
@property(readonly, nonatomic) SCRVisualsOverlayWindow *overlayWindow; // @synthesize overlayWindow=_overlayWindow;
@property(readonly, nonatomic) SCRVisualsSearchWindow *searchWindow; // @synthesize searchWindow=_searchWindow;
@property(readonly, nonatomic) SCRVisualsRotorWindow *rotorWindow; // @synthesize rotorWindow=_rotorWindow;
@property(readonly, nonatomic) SCRVisualsMenuWindow *menuWindow; // @synthesize menuWindow=_menuWindow;
@property(readonly, nonatomic) SCRVisualsCaptionWindow *captionWindow; // @synthesize captionWindow=_captionWindow;
@property(nonatomic) BOOL visualsEnabled; // @synthesize visualsEnabled=_visualsEnabled;
- (void)_visualsFontSizeChanged:(id)arg1;
- (void)displayDidReconfigure;
- (void)showEnabledVisuals;
- (void)dealloc;
- (void)_initializeVisualsWindowsWithUserDefaults:(id)arg1 captionWindow:(id)arg2;
- (void)_initializeVisualsAgent;
- (id)initWithUserDefaults:(id)arg1 captionWindow:(id)arg2;

@end

