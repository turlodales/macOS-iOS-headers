//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSLayoutConstraint, NSView;

__attribute__((visibility("hidden")))
@interface NSSplitViewDividerDragParams : NSObject
{
    long long index;
    NSView *originalFocusedSubview;
    CDStruct_0a28aba5 staticDragLimits;
    NSLayoutConstraint *draggingConstraint;
    NSArray *neighboringViewConstraints;
    id draggingAnchor;
    BOOL delegateDynamicallyConstrains;
    BOOL userInteractiveDrag;
}

- (void)dealloc;

@end

