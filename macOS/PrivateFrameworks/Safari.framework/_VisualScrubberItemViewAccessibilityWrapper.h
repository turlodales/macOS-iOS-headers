//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSView.h"

@class VisualScrubberItemView;

__attribute__((visibility("hidden")))
@interface _VisualScrubberItemViewAccessibilityWrapper : NSView
{
    id <VisualScrubberItemViewAccessibilityDelegate> _accessibilityDelegate;
    VisualScrubberItemView *_parentItemView;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) __weak VisualScrubberItemView *parentItemView; // @synthesize parentItemView=_parentItemView;
@property(nonatomic) __weak id <VisualScrubberItemViewAccessibilityDelegate> accessibilityDelegate; // @synthesize accessibilityDelegate=_accessibilityDelegate;
- (id)accessibilityRoleDescription;
- (BOOL)isAccessibilityElement;
- (id)accessibilityRole;
- (id)accessibilityTitle;
- (id)accessibilityChildren;
- (id)initWithVisualScrubberItemView:(id)arg1;

@end

