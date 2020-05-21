//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "EncryptionProvider.h"

@class NSData, NSObject<OS_dispatch_queue>, NSString;

__attribute__((visibility("hidden")))
@interface KeychainEncryptionProvider : NSObject <EncryptionProvider>
{
    NSString *_keychainLabel;
    NSData *_encryptionKey;
    NSObject<OS_dispatch_queue> *_internalQueue;
}

- (void).cxx_destruct;
- (id)decryptData:(id)arg1;
- (id)encryptData:(id)arg1;
- (id)ensureEncryptionKey;
- (id)_generateEncryptionKey;
- (id)_findExistingEncryptionKey;
- (id)init;
- (id)initWithKeychainLabel:(id)arg1;

@end

