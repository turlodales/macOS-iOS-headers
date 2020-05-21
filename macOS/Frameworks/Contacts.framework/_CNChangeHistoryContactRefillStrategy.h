//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CNEnumeratorRefillStrategy.h"

@class CNContactStore, NSArray;

__attribute__((visibility("hidden")))
@interface _CNChangeHistoryContactRefillStrategy : NSObject <CNEnumeratorRefillStrategy>
{
    BOOL _unifyResults;
    NSArray *_keys;
    CNContactStore *_contactStore;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) CNContactStore *contactStore; // @synthesize contactStore=_contactStore;
@property(readonly, nonatomic) BOOL unifyResults; // @synthesize unifyResults=_unifyResults;
@property(readonly, copy, nonatomic) NSArray *keys; // @synthesize keys=_keys;
- (id)updateChanges:(id)arg1 withFetchedContacts:(id)arg2;
- (id)fetchContactsWithIdentifiers:(id)arg1;
- (id)objectsRepresentedByBatch:(id)arg1;
- (id)batchesToRepresentObjects:(id)arg1 suggestedBatchSize:(unsigned long long)arg2;
- (id)initWithKeysToFetch:(id)arg1 unifyResults:(BOOL)arg2 contactStore:(id)arg3;

@end

