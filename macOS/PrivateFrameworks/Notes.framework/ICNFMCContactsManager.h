//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary, NSOperationQueue;

@interface ICNFMCContactsManager : NSObject
{
    NSMutableDictionary *_contactsForAddress;
    NSOperationQueue *_contactsUpdateQueue;
}

+ (id)sharedInstance;
+ (id)allocWithZone:(struct _NSZone *)arg1;
@property(readonly, nonatomic) NSOperationQueue *contactsUpdateQueue; // @synthesize contactsUpdateQueue=_contactsUpdateQueue;
- (void).cxx_destruct;
- (id)contactForAddress:(id)arg1;
- (id)_fetchGroupedContactsWithPredicate:(id)arg1;
- (id)_fetchGroupedContacts;
- (id)_processDeletes:(id)arg1 addressesWithNoContacts:(id)arg2;
- (id)_processUpdates:(id)arg1 andAdds:(id)arg2;
- (id)_designatedNameContactForContactGroup:(id)arg1;
- (id)_processUpdatesForContactGroup:(id)arg1;
- (id)_changedContactsFromChangedIdentifiers:(id)arg1 addedIdentifiers:(id)arg2;
- (void)_contactsChanged:(id)arg1;
- (void)_asyncLoadContacts;
- (void)dealloc;
- (id)init;

@end

