//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSWindowController.h"

@class AMSmartGroup, AMSmartGroupsPredicateViewController, NSPopUpButton, NSView;

@interface AMSmartGroupsController : NSWindowController
{
    NSPopUpButton *orderedByPopup;
    NSView *_predicateEditorSuperView;
    AMSmartGroup *_group;
    AMSmartGroup *_tempGroup;
    AMSmartGroupsPredicateViewController *_predicateViewController;
    BOOL _predicateEditorEnabled;
}

- (void)ok:(id)arg1;
- (void)cancel:(id)arg1;
- (void)setPredicateEditorEnabled:(BOOL)arg1;
- (BOOL)predicateEditorEnabled;
- (void)prepareToShowGroup;
- (void)setTempSmartGroup:(id)arg1;
- (id)tempSmartGroup;
- (void)setSmartGroup:(id)arg1;
- (id)smartGroup;
- (void)awakeFromNib;
- (id)windowNibName;
- (void)dealloc;

@end

