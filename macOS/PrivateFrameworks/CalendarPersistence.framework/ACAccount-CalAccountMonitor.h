//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Accounts/ACAccount.h>

#import <CalendarPersistence/CalAccountLikeObject-Protocol.h>

@class NSString;

@interface ACAccount (CalAccountMonitor) <CalAccountLikeObject>
- (BOOL)changeAffectsAlarms:(id)arg1;
- (BOOL)changesAffectSession:(id)arg1;
- (BOOL)changesAffectRefresh:(id)arg1;
- (BOOL)changesAffectPush:(id)arg1;
- (BOOL)changesAffectDock:(id)arg1;
- (BOOL)deleteAffectsDock;
- (BOOL)deleteAffectsPush;
- (BOOL)deleteAffectsSession;
- (BOOL)insertAffectsDock;
- (BOOL)insertAffectsPush;
- (BOOL)insertAffectsSession;
- (id)objectIdentifier;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

