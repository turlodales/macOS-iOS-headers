//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Contacts/CNCDChangeHistoryResultQuery.h>

__attribute__((visibility("hidden")))
@interface _CNCDChangeHistoryResultIncrementalSyncQuery : CNCDChangeHistoryResultQuery
{
}

+ (long long)linkingContactsChangeTypeForPersistentChangeType:(long long)arg1;
+ (long long)contactsChangeTypeForPersistentChangeType:(long long)arg1;
- (id)groupChangeForHistoryChange:(id)arg1;
- (id)groupChangesForHistoryChanges:(id)arg1;
- (id)nonUnifiedContactChangeForHistoryChange:(id)arg1;
- (id)unifiedContactChangeForHistoryChange:(id)arg1;
- (id)contactChangeForHistoryChange:(id)arg1;
- (id)contactChangesForHistoryChanges:(id)arg1;
- (void)configureResult:(id)arg1 forTransactions:(id)arg2;

@end

