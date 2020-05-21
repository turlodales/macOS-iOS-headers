//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CNEnumeratorRefillStrategy.h"

@class CNContactStore;

__attribute__((visibility("hidden")))
@interface _CNChangeHistoryGroupRefillStrategy : NSObject <CNEnumeratorRefillStrategy>
{
    CNContactStore *_contactStore;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) CNContactStore *contactStore; // @synthesize contactStore=_contactStore;
- (id)updateChanges:(id)arg1 withFetchedGroups:(id)arg2;
- (id)fetchGroupsWithIdentifiers:(id)arg1;
- (id)objectsRepresentedByBatch:(id)arg1;
- (id)batchesToRepresentObjects:(id)arg1 suggestedBatchSize:(unsigned long long)arg2;
- (id)initWithContactStore:(id)arg1;

@end

