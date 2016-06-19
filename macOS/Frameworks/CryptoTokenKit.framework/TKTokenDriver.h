//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSMutableDictionary, NSObject<OS_dispatch_queue>, NSString;

@interface TKTokenDriver : NSObject
{
    id <TKTokenDriverDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableDictionary *_tokens;
}

+ (id)sharedDriver;
@property(retain) NSMutableDictionary *tokens; // @synthesize tokens=_tokens;
@property(readonly) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property __weak id <TKTokenDriverDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)releaseTokenWithTokenID:(id)arg1;
- (void)getTokenEndpointWithAttributes:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)removeTokenEndpoint:(id)arg1;
- (id)tokenIDForInstanceID:(id)arg1;
- (void)getTokenWithAttributes:(id)arg1 reply:(CDUnknownBlockType)arg2;
@property(readonly) NSString *classID;
@property(readonly) NSDictionary *extensionAttributes;
- (id)init;

@end

