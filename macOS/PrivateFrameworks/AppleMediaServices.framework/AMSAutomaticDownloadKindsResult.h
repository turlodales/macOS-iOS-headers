//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class ACAccount, NSArray;

@interface AMSAutomaticDownloadKindsResult : NSObject
{
    ACAccount *_account;
    NSArray *_enabledMediaKinds;
}

- (void).cxx_destruct;
@property(readonly) NSArray *enabledMediaKinds; // @synthesize enabledMediaKinds=_enabledMediaKinds;
@property(readonly) ACAccount *account; // @synthesize account=_account;
- (id)initWithAccount:(id)arg1 andEnabledMediaKinds:(id)arg2;

@end

