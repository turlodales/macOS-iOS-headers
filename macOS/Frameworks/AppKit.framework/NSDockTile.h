//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, NSView;

@interface NSDockTile : NSObject
{
    id _owner;
    void *_dockContextRef;
    NSView *_contentView;
    NSView *_frameView;
    NSView *_backstopView;
    NSString *_badgeLabel;
    struct {
        unsigned int showsAppBadge:1;
        unsigned int reserved:31;
    } _dFlags;
    struct CGSize _dockTileSize;
    id _miniViewController;
}

- (void).cxx_destruct;
- (void)_dockIsAlive:(BOOL)arg1;
- (void)_updateDockWindowIDAndDisplayIfNeeded:(BOOL)arg1;
- (void)_dockTileScaleFactorChanged:(id)arg1;
- (id)_backstopView;
- (id)_tileImage;
@property(copy) NSString *badgeLabel;
@property BOOL showsApplicationBadge;
- (void)display;
- (void)_reenableAppNap:(id)arg1;
- (void)_temporarilyDisableAppNap;
@property(retain) NSView *contentView;
- (struct CGSize)_getSizeFromDock;
@property(readonly) struct CGSize size;
@property(readonly) __weak id owner;
- (void)dealloc;
- (void)_createFrameViewIfNeeded;
- (BOOL)_releaseContextIfEmpty;
- (BOOL)_hasCustomContent;
- (void)_releaseDockContext;
- (void)_unregisterForDockScaleChangeNotification;
- (void)_registerForDockScaleChangeNotification;
- (void)invalidateOwner;
- (id)initWithOwner:(id)arg1;
- (BOOL)_getDockContext:(struct CGContext **)arg1 andSize:(struct CGSize *)arg2;
- (void)frameChanged:(id)arg1;
- (void)_miniViewResized;
- (void)_setMiniViewWindowLevel:(long long)arg1;
- (void)_setMiniViewShown:(BOOL)arg1;
- (void)_setMiniView:(long long)arg1 contextid:(unsigned int)arg2;
@property(retain) NSView *miniView; // @dynamic miniView;

@end

