//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CNUIDefaultUserActionFetcher.h"

@class CRRecentContactsLibrary, NSString;

@interface CNUIDefaultUserActionFetcher : NSObject <CNUIDefaultUserActionFetcher>
{
    CRRecentContactsLibrary *_library;
}

+ (BOOL)doesRecentContact:(id)arg1 matchUserActionItem:(id)arg2;
+ (id)defaultActionItemForActionItem:(id)arg1 recentContacts:(id)arg2;
+ (id)queryForUserActionItem:(id)arg1;
+ (id)recentContactsForUserActionItem:(id)arg1 recentsLibrary:(id)arg2 scheduler:(id)arg3;
- (void).cxx_destruct;
@property(readonly, nonatomic) CRRecentContactsLibrary *library; // @synthesize library=_library;
- (id)defaultActionItemForActionItems:(id)arg1 schedulerProvider:(id)arg2;
- (id)observableForDefaultActionsChanged;
- (id)initWithRecentsLibrary:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

