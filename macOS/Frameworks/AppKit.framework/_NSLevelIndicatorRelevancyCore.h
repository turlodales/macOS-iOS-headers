//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AppKit/_NSLevelIndicatorCore-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface _NSLevelIndicatorRelevancyCore : NSObject <_NSLevelIndicatorCore>
{
}

- (id)_coreUIDrawOptionsForState:(CDStruct_40e84b6d)arg1;
- (struct NSEdgeInsets)alignmentRectInsetsForState:(CDStruct_40e84b6d)arg1;
- (struct CGSize)indicatorSizeForState:(CDStruct_40e84b6d)arg1;
- (int)vibrancyBlendModeForState:(CDStruct_40e84b6d)arg1;
- (void)layoutSublayersOfLayer:(id)arg1 forState:(CDStruct_40e84b6d)arg2;
- (void)updateLayer:(id)arg1 forState:(CDStruct_40e84b6d)arg2;
- (void)drawInRect:(struct CGRect)arg1 inContext:(id)arg2 forState:(CDStruct_40e84b6d)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

