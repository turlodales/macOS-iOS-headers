//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSView.h"

@class FIBrowseBySizeGutsController, NSArray, NSURL;

@interface _FIBrowseBySizeView : NSView
{
    id <_FIBrowseBySizeViewDelegate> _delegate;
    FIBrowseBySizeGutsController *_controller;
}

+ (void)setAutomaticallyRemoveOldTrashItems:(BOOL)arg1;
+ (_Bool)automaticallyRemoveOldTrashItems;
- (void).cxx_destruct;
@property(retain, nonatomic) FIBrowseBySizeGutsController *controller; // @synthesize controller=_controller;
@property id <_FIBrowseBySizeViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)endPreviewPanelControl:(id)arg1;
- (void)beginPreviewPanelControl:(id)arg1;
- (BOOL)acceptsPreviewPanelControl:(id)arg1;
- (void)emptyTrash:(id)arg1;
- (void)moveSelectionToTrash:(id)arg1;
- (void)revealSelectionInFinder:(id)arg1;
@property(readonly) unsigned long long trashSize;
@property(readonly) NSArray *selectedURLs;
@property(copy) NSArray *excludedURLs;
@property(retain) NSURL *directoryURL;
- (id)activeContainer;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;
- (void)initCommon;

@end

