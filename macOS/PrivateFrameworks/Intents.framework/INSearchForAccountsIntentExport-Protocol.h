//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Intents/JSExport-Protocol.h>
#import <Intents/NSObject-Protocol.h>

@class INSpeakableString;

@protocol INSearchForAccountsIntentExport <NSObject, JSExport>
@property long long requestedBalanceType;
@property(copy) INSpeakableString *organizationName;
@property long long accountType;
@property(copy) INSpeakableString *accountNickname;
- (id)init;
@end

