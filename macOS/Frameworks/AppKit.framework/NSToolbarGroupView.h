//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSView.h>

@class NSToolbarItemGroup;

__attribute__((visibility("hidden")))
@interface NSToolbarGroupView : NSView
{
    NSToolbarItemGroup *_groupItem;
    struct __CFArray *tooltipTags;
    struct {
        unsigned int needsSublayout:1;
        unsigned int reserved:31;
    } _gvFlags;
    SEL action;
}

- (void)sendAction;
- (void)moveLeft:(id)arg1;
- (void)moveRight:(id)arg1;
- (BOOL)_moveInDirection:(long long)arg1;
- (void)setFrameSize:(struct CGSize)arg1;
- (void)performSublayout;
- (void)setNeedsSublayout:(BOOL)arg1;
- (void)dealloc;
- (id)initWithItem:(id)arg1;

@end

