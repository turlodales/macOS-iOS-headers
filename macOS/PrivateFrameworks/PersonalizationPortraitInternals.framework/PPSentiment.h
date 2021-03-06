//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class _PASLock, _PASNotificationToken;

@interface PPSentiment : NSObject
{
    float _weightBucketSize;
    float _intercept;
    _PASLock *_lock;
    _PASNotificationToken *_assetUpdateNotificationToken;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)dealloc;
- (float)sentimentScoreForText:(id)arg1;
- (float)_idxToFloat:(unsigned long long)arg1;
- (id)init;
- (BOOL)_loadAssetData;

@end

