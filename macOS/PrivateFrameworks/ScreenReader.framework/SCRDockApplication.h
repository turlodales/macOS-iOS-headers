//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ScreenReader/SCRSystemApplication.h>

@class SCRApplication;

__attribute__((visibility("hidden")))
@interface SCRDockApplication : SCRSystemApplication
{
    SCRApplication *_applicationBeforeShowingExpose;
    BOOL _isShowingDesktop;
    BOOL _isTabDockActive;
    struct __AXObserver *_appObserver;
}

- (void).cxx_destruct;
@property(retain, nonatomic) SCRApplication *applicationBeforeShowingExpose; // @synthesize applicationBeforeShowingExpose=_applicationBeforeShowingExpose;
@property(nonatomic) BOOL isTabDockActive; // @synthesize isTabDockActive=_isTabDockActive;
- (void)_handleNotification:(id)arg1 withAXElement:(id)arg2;
- (void)_uiElementWasDestroyed:(id)arg1;
- (void)_handleSelectionChange:(id)arg1;
- (void)_focusOutLaunchpad;
- (void)_focusOnLaunchpad;
- (void)_focusOutDesktop;
- (void)_focusOnDesktop;
- (void)_focusOutExpose;
- (void)_focusOnExpose;
- (id)_widgetList;
- (void)dispatchBuildWidgetGuide:(id)arg1 target:(id)arg2 tag:(long long)arg3 wait:(double)arg4;
- (void)dispatchFocusOutDock;
- (void)dispatchFocusOnDockAndSelectDockItem:(id)arg1;
- (void)dispatchFocusOnDockAndSelectDockItemAtIndex:(unsigned long long)arg1;
- (void)dispatchFocusOnDock;
- (void)_focusOutDock;
- (void)_focusOnDock:(id)arg1;
- (void)_focusOnDockElement:(id)arg1;
- (void)_removeElement:(id)arg1;
- (BOOL)isDockApplication;
- (BOOL)applicationNeedsWindows;
- (void)addItemDescriptionToRequest:(id)arg1;
- (BOOL)focusInto:(id)arg1 event:(id)arg2;
- (void)setIsKeyboardEventHandler:(BOOL)arg1;
- (void)_flyToDownloadsAnimationOccurred:(id)arg1;
- (void)_launchpadPageDidChange:(id)arg1;
- (void)_launchpadDidShow:(id)arg1;
- (void)_launchpadDidHide:(id)arg1;
- (void)_desktopDidShow:(id)arg1;
- (void)_exposeDidShow:(id)arg1;
- (void)_exposeDidHide:(id)arg1;
- (void)applicationWillInvalidate;
- (void)_initializeObserver;
- (void)applicationDidInitialize;

@end

