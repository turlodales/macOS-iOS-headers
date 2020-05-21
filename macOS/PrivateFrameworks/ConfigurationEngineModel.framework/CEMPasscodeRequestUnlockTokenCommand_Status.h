//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ConfigurationEngineModel/CEMPayloadBase.h>

@class NSData;

@interface CEMPasscodeRequestUnlockTokenCommand_Status : CEMPayloadBase
{
    NSData *_statusUnlockToken;
}

+ (id)buildRequiredOnly;
+ (id)buildWithUnlockToken:(id)arg1;
+ (id)allowedReasons;
+ (id)allowedStatusKeys;
- (void).cxx_destruct;
@property(copy, nonatomic) NSData *statusUnlockToken; // @synthesize statusUnlockToken=_statusUnlockToken;
- (id)serializePayload;
- (BOOL)loadPayload:(id)arg1 error:(id *)arg2;

@end

