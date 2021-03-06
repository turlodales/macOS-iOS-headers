//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol ABFileServices;

@interface ABFileUtilities : NSObject
{
    id <ABFileServices> _services;
    struct {
        id object;
        long long onceToken;
    } _sharedLockDirectoryUrlOnce;
}

+ (id)sharedInstance;
- (id)proxyLockUrlForFileAtUrl:(id)arg1;
- (id)sharedLockUrlWithName:(id)arg1;
- (id)sharedLockDirectoryUrl;
- (BOOL)isFileAtUrlOnARemoteFileSystem:(id)arg1;
- (void)dealloc;
- (id)initWithFileServices:(id)arg1;
- (id)init;

@end

