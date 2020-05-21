//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AppKit/NSView.h>

@class NSToolbarFlexibleSpaceItem;

@interface _NSToolbarFlexibleSpace : NSView
{
    NSToolbarFlexibleSpaceItem *_spaceItem;
    BOOL _inPalette;
}

@property NSToolbarFlexibleSpaceItem *spaceItem; // @synthesize spaceItem=_spaceItem;
- (void)updateLayer;
- (Class)_classToCheckForWantsUpdateLayer;
- (void)drawRect:(struct CGRect)arg1;
- (BOOL)_shouldDrawFlexibleSpaceOutline;
- (void)_drawToolbarFlexibleSpaceInRect:(struct CGRect)arg1;
- (struct __CFString *)_currentCoreUIWidget;
- (BOOL)allowsVibrancy;
- (BOOL)acceptsFirstMouse:(id)arg1;
- (BOOL)preservesContentDuringLiveResize;
- (BOOL)_drawsNothing;
- (BOOL)inPalette;
- (void)setInPalette:(BOOL)arg1;
- (id)initWithSize:(struct CGSize)arg1 forSpaceItem:(id)arg2;

@end

