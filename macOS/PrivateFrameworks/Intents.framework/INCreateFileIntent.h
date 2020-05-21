//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Intents/INIntent.h>

#import "INCreateFileIntent.h"

@class NSString;

@interface INCreateFileIntent : INIntent <INCreateFileIntent>
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
- (void)setDestinationName:(id)arg1;
@property(readonly, copy) NSString *destinationName;
- (void)setDestinationType:(id)arg1;
@property(readonly, copy) NSString *destinationType;
- (void)setEntityName:(id)arg1;
@property(readonly, copy) NSString *entityName;
- (void)setEntityType:(id)arg1;
@property(readonly, copy) NSString *entityType;
- (id)initWithEntityType:(id)arg1 entityName:(id)arg2 destinationType:(id)arg3 destinationName:(id)arg4;
- (id)_categoryVerb;
- (long long)_intentCategory;
- (void)_setMetadata:(id)arg1;
- (id)_metadata;
- (id)_typedBackingStore;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

