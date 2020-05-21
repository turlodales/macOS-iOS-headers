//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ECMailAccount.h"

@class ACAccount, NSString;

@protocol EDAccount <ECMailAccount>
@property(readonly) BOOL primaryiCloudAccount;
@property(readonly, copy, nonatomic) NSString *statisticsKind;
@property(readonly, copy) ACAccount *systemAccount;
@property(readonly, copy) NSString *identifier;
- (void)savePersistentAccount;
- (BOOL)hasPasswordCredential;
- (BOOL)canAuthenticateWithCurrentCredentials;
- (NSString *)username;
- (NSString *)hostname;
- (NSString *)displayName;
@end

