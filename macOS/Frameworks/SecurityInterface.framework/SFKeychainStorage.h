//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface SFKeychainStorage : NSObject
{
}

+ (BOOL)isCloudKeychainSyncEnabled;
+ (id)displayNameForKeychainRef:(struct OpaqueSecKeychainRef *)arg1;
+ (id)displayNameForKeychainAtPath:(id)arg1;
+ (id)displayNameForKeychainAtPath:(id)arg1 keychainRef:(struct OpaqueSecKeychainRef *)arg2;
+ (id)remoteStoreNameForKeychainRef:(struct OpaqueSecKeychainRef *)arg1;

@end

