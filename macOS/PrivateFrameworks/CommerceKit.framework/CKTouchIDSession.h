//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface CKTouchIDSession : NSObject
{
    NSString *_message;
    NSString *_appleID;
}

- (void).cxx_destruct;
@property(copy) NSString *appleID; // @synthesize appleID=_appleID;
@property(copy) NSString *message; // @synthesize message=_message;
- (void)deleteKey:(CDUnknownBlockType)arg1;
- (void)signChallenge:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)getAttestationBlob:(CDUnknownBlockType)arg1;
- (void)getPublicKey:(CDUnknownBlockType)arg1;
- (void)getUserAgentComponent:(CDUnknownBlockType)arg1;
- (void)disableTouchIDForPurchases:(CDUnknownBlockType)arg1;
- (void)enableTouchIDForPurchases:(CDUnknownBlockType)arg1;
- (void)getLastTouchIDEnabledDate:(CDUnknownBlockType)arg1;
- (void)getIsTouchIDEnabledForPurchases:(CDUnknownBlockType)arg1;
- (id)init;

@end

