//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSView.h"

@class FUStyleProvider;

__attribute__((visibility("hidden")))
@interface FUDotIndicator : NSView
{
    BOOL _mouseClickStarted;
    id <FUDotIndicatorTarget> _target;
    FUStyleProvider *_provider;
    unsigned long long _selectedSegment;
    unsigned long long _segmentCount;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long segmentCount; // @synthesize segmentCount=_segmentCount;
@property(nonatomic) unsigned long long selectedSegment; // @synthesize selectedSegment=_selectedSegment;
@property(retain, nonatomic) FUStyleProvider *provider; // @synthesize provider=_provider;
@property(nonatomic) __weak id <FUDotIndicatorTarget> target; // @synthesize target=_target;
- (void)mouseUp:(id)arg1;
- (void)mouseExited:(id)arg1;
- (void)mouseDown:(id)arg1;
- (struct CGSize)intrinsicContentSize;
- (void)drawRect:(struct CGRect)arg1;
@property(readonly, nonatomic) long long integerValue;
- (BOOL)allowsVibrancy;

@end

