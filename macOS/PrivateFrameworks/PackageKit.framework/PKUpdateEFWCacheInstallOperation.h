//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PackageKit/PKInstallOperation.h>

@class NSString;

@interface PKUpdateEFWCacheInstallOperation : PKInstallOperation
{
    NSString *_cacheTool;
}

- (void)main;
- (BOOL)_cacheEmbeddedContentForBundleAtPath:(id)arg1 error:(id *)arg2;
- (int)installState;
- (void)dealloc;
- (id)initWithRequest:(id)arg1 sandbox:(id)arg2 analyzer:(id)arg3;

@end

