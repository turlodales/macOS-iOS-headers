//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CDPContext, NSDictionary, NSSet, NSString;

@protocol CDPDCircleProxy <NSObject>
+ (BOOL)canAuthenticate;
@property(retain, nonatomic) CDPContext *cdpContext;
- (BOOL)removeNonViewAwarePeers:(id *)arg1;
- (BOOL)hasNonViewAwarePeers;
- (BOOL)setViewsWithEnableSet:(NSSet *)arg1 disableSet:(NSSet *)arg2;
- (BOOL)viewMemberForAutofillPasswords:(id *)arg1;
- (BOOL)requestToResetCircle:(id *)arg1;
- (BOOL)requestToJoinCircleAfterRestore:(id *)arg1;
- (BOOL)requestToJoinCircle:(id *)arg1;
- (BOOL)removeThisDeviceFromCircle:(id *)arg1;
- (BOOL)synchronizeCircleViews;
- (NSDictionary *)peerDeviceNamesByPeerID;
- (unsigned long long)peerCount;
- (NSString *)peerId;
- (int)circleStatus:(id *)arg1;
- (id)initWithContext:(CDPContext *)arg1;
@end

