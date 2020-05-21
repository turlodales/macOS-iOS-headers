//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Email/EMAccount.h>

#import "EMReceivingAccountBuilder.h"

@class EMDeliveryAccount, NSArray, NSString;

@interface EMReceivingAccount : EMAccount <EMReceivingAccountBuilder>
{
    BOOL _primaryiCloudAccount;
    BOOL _sourceIsManaged;
    BOOL _shouldArchiveByDefault;
    NSString *_name;
    NSString *_username;
    NSString *_hostname;
    EMDeliveryAccount *_deliveryAccount;
    NSArray *_emailAddresses;
    NSString *_statisticsKind;
}

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *statisticsKind; // @synthesize statisticsKind=_statisticsKind;
@property BOOL shouldArchiveByDefault; // @synthesize shouldArchiveByDefault=_shouldArchiveByDefault;
@property BOOL sourceIsManaged; // @synthesize sourceIsManaged=_sourceIsManaged;
@property(retain) NSArray *emailAddresses; // @synthesize emailAddresses=_emailAddresses;
@property(retain) EMDeliveryAccount *deliveryAccount; // @synthesize deliveryAccount=_deliveryAccount;
@property(getter=isPrimaryiCloudAccount) BOOL primaryiCloudAccount; // @synthesize primaryiCloudAccount=_primaryiCloudAccount;
@property(copy) NSString *hostname; // @synthesize hostname=_hostname;
@property(copy) NSString *username; // @synthesize username=_username;
- (id)name;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)_commonInitName:(id)arg1 hostname:(id)arg2 builder:(CDUnknownBlockType)arg3;
- (id)initWithObjectID:(id)arg1 name:(id)arg2 hostname:(id)arg3 builder:(CDUnknownBlockType)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

