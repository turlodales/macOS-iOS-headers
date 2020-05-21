//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AVOutputDevice, AVOutputDeviceAuthorizationRequestInternal, NSError, NSString;

@interface AVOutputDeviceAuthorizationRequest : NSObject
{
    AVOutputDeviceAuthorizationRequestInternal *_ivars;
}

- (void)cancel;
- (void)respondWithAuthorizationToken:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
@property(readonly, nonatomic) NSString *authorizationTokenType;
@property(readonly, nonatomic) AVOutputDevice *outputDevice;
@property(readonly, nonatomic) NSString *ID;
@property(readonly) NSError *error;
@property(readonly) long long status;
- (id)impl;
- (id)description;
- (void)dealloc;
- (id)initWithOutputDeviceAuthorizationRequestImpl:(id)arg1;

@end

