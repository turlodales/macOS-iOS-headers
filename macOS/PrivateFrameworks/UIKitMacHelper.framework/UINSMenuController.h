//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSMenuDelegate.h"
#import "NSSharingServicePickerDelegate.h"
#import "UINSMenuController.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface UINSMenuController : NSObject <UINSMenuController, NSMenuDelegate, NSSharingServicePickerDelegate>
{
    id _currentContextMenu;
    CDUnknownBlockType _performItemAction;
    CDUnknownBlockType _contextMenuDidClose;
    CDUnknownBlockType _validateItem;
    struct CGPoint _location;
}

+ (id)sharedMenuController;
- (void).cxx_destruct;
@property(nonatomic) struct CGPoint location; // @synthesize location=_location;
@property(copy, nonatomic) CDUnknownBlockType validateItem; // @synthesize validateItem=_validateItem;
@property(copy, nonatomic) CDUnknownBlockType contextMenuDidClose; // @synthesize contextMenuDidClose=_contextMenuDidClose;
@property(copy, nonatomic) CDUnknownBlockType performItemAction; // @synthesize performItemAction=_performItemAction;
@property(readonly, nonatomic) id currentContextMenu; // @synthesize currentContextMenu=_currentContextMenu;
- (id)sharingServicePicker:(id)arg1 sharingServicesForItems:(id)arg2 proposedSharingServices:(id)arg3;
- (void)showSharingMenuInNSWindow:(id)arg1 atLocationInWindow:(struct CGPoint)arg2 activityItemsConfiguration:(id)arg3;
- (void)_showContextMenu:(id)arg1 forView:(id)arg2 withEvent:(id)arg3;
- (id)_prepareToShowContextMenu:(id)arg1 activityItemsConfiguration:(id)arg2;
- (void)showContextMenu:(id)arg1 inWindow:(id)arg2 atLocationInWindow:(struct CGPoint)arg3 activityItemsConfiguration:(id)arg4;
- (BOOL)_isItem:(id)arg1 containedInContextMenu:(id)arg2;
- (BOOL)validateMenuItem:(id)arg1 proxyItem:(id)arg2;
- (BOOL)validateMenuItem:(id)arg1;
- (void)_actionForMenuItemWithProxyAndFixedTarget:(id)arg1;
- (id)_createNSMenu:(id)arg1 forContextMenu:(BOOL)arg2;
- (void)rebuildMenu:(id)arg1;
- (void)setMainMenuBar:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

