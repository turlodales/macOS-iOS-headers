//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CNCDContactSaveExecutor, CNCDContainerSaveExecutor, CNCDGroupMembershipSaveExecutor, CNCDGroupSaveExecutor, CNCDSaveContext;

@interface CNCDSaveRequestExecutor : NSObject
{
    CNCDSaveContext *_saveContext;
    CNCDContactSaveExecutor *_contactSaveExecutor;
    CNCDGroupSaveExecutor *_groupSaveExecutor;
    CNCDGroupMembershipSaveExecutor *_groupMembershipSaveExecutor;
    CNCDContainerSaveExecutor *_containerSaveExecutor;
}

+ (BOOL)executeSaveRequest:(id)arg1 inPersistenceStack:(id)arg2 error:(id *)arg3;
- (void).cxx_destruct;
- (BOOL)updateGroupsCache:(id *)arg1;
- (id)allGroupIdentifiers;
- (BOOL)loadGroupsCache:(id *)arg1;
- (BOOL)updateContactsCache:(id *)arg1;
- (id)allContactIdentifiers;
- (BOOL)loadContactsCache:(id *)arg1;
- (id)contactsErrorFromCoreDataError:(id)arg1;
- (id)recordsForErrorFromIdentifiers:(id)arg1;
- (BOOL)executeSaveRequest:(id *)arg1;
- (id)initWithSaveRequest:(id)arg1 persistenceContext:(id)arg2 context:(id)arg3;
- (id)init;

@end

