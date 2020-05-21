//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Catalyst/CATOperation.h>

@class CATTaskRequest, NSUUID;

@interface CATTaskOperation : CATOperation
{
    CATTaskRequest *_request;
    id <CATTaskOperationNotificationDelegate> _notificationDelegate;
    NSUUID *_remoteUUID;
}

+ (BOOL)isCancelable;
+ (BOOL)validateRequest:(id)arg1 error:(id *)arg2;
+ (id)new;
- (void).cxx_destruct;
@property(copy, nonatomic) NSUUID *remoteUUID; // @synthesize remoteUUID=_remoteUUID;
@property(nonatomic) __weak id <CATTaskOperationNotificationDelegate> notificationDelegate; // @synthesize notificationDelegate=_notificationDelegate;
@property(readonly, nonatomic) CATTaskRequest *request; // @synthesize request=_request;
- (void)processMessage:(id)arg1;
- (void)postNotificationWithName:(id)arg1 userInfo:(id)arg2;
- (BOOL)canSendNotificationWithName:(id)arg1 userInfo:(id)arg2;
- (void)processNotificationWithName:(id)arg1 userInfo:(id)arg2;
- (void)main;
- (id)initWithRequest:(id)arg1;
- (id)init;
- (id)cat_assertions;
- (void)cat_addAssertion:(id)arg1;

@end

