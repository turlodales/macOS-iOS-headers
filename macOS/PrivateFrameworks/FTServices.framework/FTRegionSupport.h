//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FTMessageDelivery, NSArray;

@interface FTRegionSupport : NSObject
{
    NSArray *_regions;
    FTMessageDelivery *_delivery;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
@property(retain) FTMessageDelivery *delivery; // @synthesize delivery=_delivery;
@property(retain) NSArray *regions; // @synthesize regions=_regions;
- (id)regionForID:(id)arg1;
@property(readonly) BOOL isLoading;
@property(readonly) BOOL isLoaded;
- (void)flushRegions;
- (void)startLoading;
- (void)_buildMessageDeliveryIfNeeded;
- (void)dealloc;

@end

