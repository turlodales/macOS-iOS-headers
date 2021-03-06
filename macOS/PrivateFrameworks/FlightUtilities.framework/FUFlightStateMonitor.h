//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary, NSString;

@interface FUFlightStateMonitor : NSObject
{
    NSMutableDictionary *_updateInformation;
    NSString *_flightFactoryProvider;
}

+ (id)sharedMonitor;
@property(copy) NSString *flightFactoryProvider; // @synthesize flightFactoryProvider=_flightFactoryProvider;
- (void).cxx_destruct;
- (void)removeUpdatesForFlightTicket:(id)arg1;
- (id)addObserverForFlight:(id)arg1 updateBlock:(CDUnknownBlockType)arg2;
@property(readonly) NSMutableDictionary *updateInformation; // @synthesize updateInformation=_updateInformation;
- (void)addTimersForFlight:(id)arg1 flightTicket:(id)arg2;
- (void)dealloc;

@end

