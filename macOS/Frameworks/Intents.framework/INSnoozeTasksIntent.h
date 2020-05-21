//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Intents/INIntent.h>

#import "INSnoozeTasksIntentExport.h"

@class INDateComponentsRange, NSArray, NSNumber, NSString;

@interface INSnoozeTasksIntent : INIntent <INSnoozeTasksIntentExport>
{
}

- (void)setParametersByName:(id)arg1;
- (id)parametersByName;
- (void)setVerb:(id)arg1;
- (id)verb;
- (void)setDomain:(id)arg1;
- (id)domain;
- (void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)arg1 containingAppBundleId:(id)arg2;
- (id)_dictionaryRepresentation;
- (void)setAll:(id)arg1;
@property(readonly, copy) NSNumber *all;
- (void)setNextTriggerTime:(id)arg1;
@property(readonly, copy) INDateComponentsRange *nextTriggerTime;
- (void)setTasks:(id)arg1;
@property(readonly, copy) NSArray *tasks;
- (id)initWithTasks:(id)arg1 nextTriggerTime:(id)arg2 all:(id)arg3;
- (void)_setMetadata:(id)arg1;
- (id)_metadata;
- (id)_typedBackingStore;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

