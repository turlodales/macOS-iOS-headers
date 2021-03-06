//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface PXPowerController : NSObject
{
    BOOL _hasPowerAssertion;
}

+ (id)sharedController;
@property(readonly, nonatomic) BOOL hasPowerAssertion; // @synthesize hasPowerAssertion=_hasPowerAssertion;
- (void)removePowerAssertionForIdentifier:(unsigned int)arg1 withReason:(unsigned int)arg2;
- (void)addPowerAssertionForIdentifier:(unsigned int)arg1 withReason:(unsigned int)arg2;
- (unsigned int)generateAssertionIdentifier;

@end

