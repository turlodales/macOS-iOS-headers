//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CloudKit/CKRecordID.h>

#import <NotesShared/ICHasDatabaseScope-Protocol.h>

@class NSString;

@interface CKRecordID (IC) <ICHasDatabaseScope>
- (BOOL)ic_isOwnedByCurrentUser;
- (long long)databaseScope;
- (id)ic_loggingDescription;
- (id)ic_loggingDescriptionIncludingBrackets:(BOOL)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

