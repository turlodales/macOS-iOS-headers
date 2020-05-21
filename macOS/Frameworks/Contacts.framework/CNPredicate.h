//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSPredicate.h"

#import "CNDonatedContactsPredicate.h"
#import "NSCopying.h"

@class NSArray, NSString;

@interface CNPredicate : NSPredicate <CNDonatedContactsPredicate, NSCopying>
{
    NSPredicate *_cn_predicate;
    BOOL _augmentMainStoreResults;
    NSArray *_mainStoreContactIdentifiers;
}

+ (id)os_log;
+ (id)_convertSuggestions:(id)arg1 withSortOrder:(long long)arg2 mutableObjects:(BOOL)arg3;
- (void).cxx_destruct;
@property(nonatomic) BOOL augmentMainStoreResults; // @synthesize augmentMainStoreResults=_augmentMainStoreResults;
@property(retain, nonatomic) NSArray *mainStoreContactIdentifiers; // @synthesize mainStoreContactIdentifiers=_mainStoreContactIdentifiers;
- (CDUnknownBlockType)cn_resultTransformWithMatchInfos:(id)arg1;
- (id)shortDebugDescription;
- (void)mainStoreDidFetchContacts:(id)arg1 unifiedFetch:(BOOL)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)cn_predicate;
- (id)predicateFormat;
- (BOOL)evaluateWithObject:(id)arg1 substitutionVariables:(id)arg2;
- (BOOL)evaluateWithObject:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithPredicate:(id)arg1;
- (id)init;
- (id)suggestedContactsWithSortOrder:(long long)arg1 keysToFetch:(id)arg2 mutableObjects:(BOOL)arg3 service:(id)arg4 error:(id *)arg5;
- (void)_convertContactMatches:(id)arg1 withService:(id)arg2 intoSuggestions:(id)arg3;
- (id)contactsFromDonationStore:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

