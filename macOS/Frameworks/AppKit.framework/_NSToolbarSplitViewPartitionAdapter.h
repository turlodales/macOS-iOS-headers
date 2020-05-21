//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSSplitView, NSToolbarItem;

__attribute__((visibility("hidden")))
@interface _NSToolbarSplitViewPartitionAdapter : NSObject
{
    NSSplitView *_splitView;
    NSToolbarItem *_toolbarItem;
    long long _dividerIndex;
    struct CGRect _dividerFrame;
    BOOL _inManualResize;
}

@property(nonatomic) NSToolbarItem *toolbarItem; // @synthesize toolbarItem=_toolbarItem;
- (void)dealloc;
- (void)_setListenToViewGeometryInWindowDidChange:(BOOL)arg1 forView:(id)arg2;
- (void)splitViewGeometryInWindowDidChange:(id)arg1;
- (void)_geometryInWindowDidChangeForView:(id)arg1;
- (BOOL)getRectToExclude:(struct CGRect *)arg1 inWindowCoordinatesForWindow:(id)arg2;
- (void)_splitViewDidResize:(id)arg1;
@property(nonatomic) NSSplitView *splitView;
@property(nonatomic) long long splitViewDividerIndex;
- (struct CGRect)_splitViewDividerFrame;

@end

