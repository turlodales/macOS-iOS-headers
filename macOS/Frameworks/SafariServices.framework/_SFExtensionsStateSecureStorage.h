//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface _SFExtensionsStateSecureStorage : NSObject
{
    long long _extensionsLocation;
    NSString *_keychainLabel;
    NSString *_keychainService;
}

- (void).cxx_destruct;
- (BOOL)setExtensionsPlistKeychainItemUsingLegacyKeychain:(BOOL)arg1 withData:(id)arg2;
- (int)getExtensionsPlistKeychainItemUsingLegacyKeychain:(BOOL)arg1 outData:(id *)arg2 outItem:(id *)arg3;
- (int)createExtensionsPlistKeychainUsingLegacyKeychain:(BOOL)arg1 withData:(id)arg2;
- (id)_keychainAccount;
- (id)initWithKeychainService:(id)arg1 keychainLabel:(id)arg2;
- (id)initWithKeychainService:(id)arg1 keychainLabel:(id)arg2 extensionsLocation:(long long)arg3;

@end

