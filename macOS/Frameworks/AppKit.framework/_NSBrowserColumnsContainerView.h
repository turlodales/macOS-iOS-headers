//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AppKit/NSView.h>

@interface _NSBrowserColumnsContainerView : NSView
{
    struct __BrccvFlags {
        unsigned int ignoreScrolling:1;
        unsigned int reserved:31;
    } _brccvFlags;
}

- (void)_scrollerStyleRecommendationChanged:(id)arg1;
- (void)viewDidMoveToWindow;
- (id)menuForEvent:(id)arg1;
- (void)scrollRect:(struct CGRect)arg1 by:(struct CGSize)arg2;
- (BOOL)scrollRectToVisible:(struct CGRect)arg1;
- (void)scrollPoint:(struct CGPoint)arg1;
- (BOOL)_ignoringScrolling;
- (void)_setIgnoringScrolling:(BOOL)arg1;
- (void)_drawScrollViewFocusRing:(id)arg1 clipRect:(struct CGRect)arg2 needsFullDisplay:(BOOL)arg3;
- (BOOL)_willDrawFocusRingAroundEnclosingScrollView;
- (BOOL)_showingFocusRingAroundEnclosingScrollView:(id)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (void)updateLayer;
- (BOOL)wantsUpdateLayer;
- (BOOL)isOpaque;
- (void)setFrameSize:(struct CGSize)arg1;
- (void)setFrameOrigin:(struct CGPoint)arg1;
- (BOOL)preservesContentDuringLiveResize;
- (id)_enclosingBrowserView;
- (id)hitTest:(struct CGPoint)arg1;

@end

