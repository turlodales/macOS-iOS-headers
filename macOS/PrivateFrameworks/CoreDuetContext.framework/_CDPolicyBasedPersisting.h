//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "_CDContextPersisting.h"

@interface _CDPolicyBasedPersisting : NSObject <_CDContextPersisting>
{
    id <_CDContextPersisting> _persistenceSurvivingReboot;
    id <_CDContextPersisting> _persistenceSurvivingRelaunch;
}

+ (id)persistenceWithPersistenceSurvivingReboot:(id)arg1 persistenceSurvivingRelaunch:(id)arg2;
- (void).cxx_destruct;
@property(readonly, nonatomic) id <_CDContextPersisting> persistenceSurvivingRelaunch; // @synthesize persistenceSurvivingRelaunch=_persistenceSurvivingRelaunch;
@property(readonly, nonatomic) id <_CDContextPersisting> persistenceSurvivingReboot; // @synthesize persistenceSurvivingReboot=_persistenceSurvivingReboot;
- (id)loadRegistrations;
- (id)loadValues;
- (void)deleteDataCreatedBefore:(id)arg1;
- (void)deleteAllData;
- (void)deleteRegistration:(id)arg1;
- (void)saveRegistration:(id)arg1;
- (void)saveValue:(id)arg1 forKeyPath:(id)arg2;
- (id)initWithPersistenceSurvivingReboot:(id)arg1 persistenceSurvivingRelaunch:(id)arg2;

@end

