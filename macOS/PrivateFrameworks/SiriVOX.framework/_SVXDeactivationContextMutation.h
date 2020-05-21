//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SVXDeactivationContextMutating.h"

@class NSDictionary, NSString, SVXButtonEvent, SVXClientInfo, SVXDeactivationContext;

@interface _SVXDeactivationContextMutation : NSObject <SVXDeactivationContextMutating>
{
    SVXDeactivationContext *_baseModel;
    long long _source;
    unsigned long long _timestamp;
    SVXButtonEvent *_buttonEvent;
    SVXClientInfo *_clientInfo;
    NSDictionary *_userInfo;
    struct _mutationFlags {
        unsigned int isDirty:1;
        unsigned int hasSource:1;
        unsigned int hasTimestamp:1;
        unsigned int hasButtonEvent:1;
        unsigned int hasClientInfo:1;
        unsigned int hasUserInfo:1;
    } _mutationFlags;
}

- (void).cxx_destruct;
- (id)generate;
- (void)setUserInfo:(id)arg1;
- (void)setClientInfo:(id)arg1;
- (void)setButtonEvent:(id)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (void)setSource:(long long)arg1;
- (id)initWithBaseModel:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

