//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSStackView.h>

@class NSArray;

@interface ABWidthLimitingStackView : NSStackView
{
    NSArray *_constraints;
}

- (void)enumerateEachPairOfViews:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (id)layoutLine:(id)arg1;
- (id)layoutLines:(id)arg1;
- (void)updateConstraints;
- (void)dealloc;

@end

