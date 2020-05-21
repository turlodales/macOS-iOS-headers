//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSSet;

@interface _CDPeopleSuggesterSettings : NSObject <NSCopying>
{
    BOOL _useFuture;
    BOOL _aggregateByIdentifier;
    BOOL _requireOutgoingInteraction;
    BOOL _useTitleToContrainKeywords;
    BOOL _inferActiveInteractions;
    unsigned long long _maxNumberOfPeopleSuggested;
    NSSet *_constrainMechanisms;
    NSSet *_constrainBundleIds;
    NSSet *_constrainAccounts;
    NSSet *_constrainDomainIdentifiers;
    NSSet *_constrainIdentifiers;
    NSSet *_constrainPersonIds;
    NSSet *_constrainPersonIdType;
    unsigned long long _constrainMaxRecipientCount;
    NSSet *_ignoreContactIdentifiers;
}

+ (id)defaultSettings;
- (void).cxx_destruct;
@property(retain) NSSet *ignoreContactIdentifiers; // @synthesize ignoreContactIdentifiers=_ignoreContactIdentifiers;
@property BOOL inferActiveInteractions; // @synthesize inferActiveInteractions=_inferActiveInteractions;
@property BOOL useTitleToContrainKeywords; // @synthesize useTitleToContrainKeywords=_useTitleToContrainKeywords;
@property BOOL requireOutgoingInteraction; // @synthesize requireOutgoingInteraction=_requireOutgoingInteraction;
@property BOOL aggregateByIdentifier; // @synthesize aggregateByIdentifier=_aggregateByIdentifier;
@property BOOL useFuture; // @synthesize useFuture=_useFuture;
@property unsigned long long constrainMaxRecipientCount; // @synthesize constrainMaxRecipientCount=_constrainMaxRecipientCount;
@property(retain) NSSet *constrainPersonIdType; // @synthesize constrainPersonIdType=_constrainPersonIdType;
@property(retain) NSSet *constrainPersonIds; // @synthesize constrainPersonIds=_constrainPersonIds;
@property(retain) NSSet *constrainIdentifiers; // @synthesize constrainIdentifiers=_constrainIdentifiers;
@property(retain) NSSet *constrainDomainIdentifiers; // @synthesize constrainDomainIdentifiers=_constrainDomainIdentifiers;
@property(retain) NSSet *constrainAccounts; // @synthesize constrainAccounts=_constrainAccounts;
@property(retain) NSSet *constrainBundleIds; // @synthesize constrainBundleIds=_constrainBundleIds;
@property(retain) NSSet *constrainMechanisms; // @synthesize constrainMechanisms=_constrainMechanisms;
@property unsigned long long maxNumberOfPeopleSuggested; // @synthesize maxNumberOfPeopleSuggested=_maxNumberOfPeopleSuggested;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end

