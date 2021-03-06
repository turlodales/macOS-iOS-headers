//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface _SFExtensionsStateSecureStorage : NSObject
{
    long long _extensionsLocation;
    NSString *_keychainLabel;
    NSString *_keychainService;
    long long _keychainAccount;
}

- (void).cxx_destruct;
@property(nonatomic) long long keychainAccount; // @synthesize keychainAccount=_keychainAccount;
- (BOOL)setExtensionsPlistKeychainItemUsingLegacyKeychain:(BOOL)arg1 withData:(id)arg2;
- (int)getExtensionsPlistKeychainItemUsingLegacyKeychain:(BOOL)arg1 outData:(id *)arg2 outItem:(id *)arg3;
- (int)createExtensionsPlistKeychainUsingLegacyKeychain:(BOOL)arg1 withData:(id)arg2;
- (id)_keychainAccountForSafariTechnologyPreview;
- (id)_keychainAccountForProductionSafari;
- (id)_keychainAccountForActiveBrowser;
- (id)_keychainAccount;
- (id)initWithKeychainService:(id)arg1 keychainLabel:(id)arg2;
- (id)initWithKeychainService:(id)arg1 keychainLabel:(id)arg2 extensionsLocation:(long long)arg3;

@end

