//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface ABExchangeSetup : NSObject
{
}

+ (id)sharedExchangeSetup;
- (id)activeDirectoryEmailAddress;
- (id)activeDirectoryFullName;
- (BOOL)setActiveDirectoryPassword:(id)arg1;
- (id)activeDirectoryPassword;
- (void)setActiveDirectoryUser:(id)arg1;
- (id)activeDirectoryUser;
- (void)setUseSSL:(BOOL)arg1;
- (BOOL)useSSL;
- (void)setOutlookWebAccessPath:(id)arg1;
- (id)outlookWebAccessPathFromUserString:(id)arg1 withUserName:(id)arg2;
- (id)outlookWebAccessPath;
- (void)setOutlookWebAccessServer:(id)arg1;
- (id)outlookWebAccessServer;
- (void)setExchangeServer:(id)arg1;
- (id)exchangeServer;
- (void)setSyncsWithExchange:(BOOL)arg1;
- (BOOL)syncsWithExchange;
- (BOOL)usingActiveDirectory;
- (id)_ADKeySet;
- (id)_dictionaryFromUser:(id)arg1;
- (id)init;

@end

