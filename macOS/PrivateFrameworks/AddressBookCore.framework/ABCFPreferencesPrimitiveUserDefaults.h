//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AddressBookCore/ABPrimitiveUserDefaults-Protocol.h>

@class NSString;

@interface ABCFPreferencesPrimitiveUserDefaults : NSObject <ABPrimitiveUserDefaults>
{
    NSString *_applicationID;
    long long _autosyncTimerIsActive;
}

- (void)setupAutosync;
- (BOOL)synchronize;
- (void)primitiveRemoveObjectForKey:(id)arg1;
- (BOOL)primitiveBoolValueForKey:(id)arg1 keyExists:(char *)arg2;
- (long long)primitiveIntegerValueForKey:(id)arg1 keyExists:(char *)arg2;
- (void)setPrimitiveObject:(id)arg1 forKey:(id)arg2;
- (id)primitiveObjectForKey:(id)arg1;
- (void)dealloc;
- (id)initWithApplicationID:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

