//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "BSDescriptionProviding.h"
#import "NSCopying.h"
#import "NSMutableCopying.h"

@class BSObjCProtocol, NSString;

@interface BSServiceInterface : NSObject <NSCopying, NSMutableCopying, BSDescriptionProviding>
{
    NSString *_identifier;
    BSObjCProtocol *_server;
    BSObjCProtocol *_client;
    struct __CFBoolean *_clientWaitsForActivation;
}

+ (id)interfaceWithServer:(id)arg1 client:(id)arg2;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) BSObjCProtocol *client; // @synthesize client=_client;
@property(readonly, copy, nonatomic) BSObjCProtocol *server; // @synthesize server=_server;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
- (BOOL)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)succinctDescription;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, nonatomic) long long clientMessagingExpectation; // @dynamic clientMessagingExpectation;
- (id)_initWithIdentifier:(id)arg1 server:(id)arg2 client:(id)arg3 clientWaitsForActivation:(struct __CFBoolean *)arg4;
- (id)init;

// Remaining properties
@property(readonly) Class superclass;

@end

