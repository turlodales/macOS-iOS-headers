//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreBluetooth/CBService.h>

@class NSArray, NSNumber;

@interface CBMutableService : CBService
{
    NSNumber *_ID;
}

- (void).cxx_destruct;
@property(retain) NSNumber *ID; // @synthesize ID=_ID;
- (id)description;
- (void)handlePowerNotOn;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)dealloc;
- (id)initWithDictionary:(id)arg1;
- (id)initWithType:(id)arg1 primary:(BOOL)arg2;

// Remaining properties
@property(retain) NSArray *characteristics; // @dynamic characteristics;
@property(retain) NSArray *includedServices; // @dynamic includedServices;

@end

