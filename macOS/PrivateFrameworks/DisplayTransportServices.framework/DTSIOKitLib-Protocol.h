//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DisplayTransportServices/NSObject-Protocol.h>

@class NSDictionary, NSMutableDictionary;
@protocol DTSIOPMAssertion, DTSIOService;

@protocol DTSIOKitLib <NSObject>
- (id <DTSIOPMAssertion>)PMAssertionWithType:(const struct __CFString *)arg1 level:(unsigned int)arg2 name:(const struct __CFString *)arg3 error:(int *)arg4;
- (id <DTSIOService>)serviceForPort:(unsigned int)arg1 matchingDictionary:(NSDictionary *)arg2;
- (NSMutableDictionary *)matchingDictionaryForRegistryEntryID:(unsigned long long)arg1;
- (NSMutableDictionary *)matchingDictionaryForClass:(const char *)arg1;
- (id <DTSIOService>)makeServiceForService:(unsigned int)arg1;
@end

