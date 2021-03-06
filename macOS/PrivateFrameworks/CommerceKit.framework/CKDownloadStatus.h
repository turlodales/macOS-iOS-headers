//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CommerceKit/NSCopying-Protocol.h>
#import <CommerceKit/NSSecureCoding-Protocol.h>

@class CKDownloadAsset, NSError;

@interface CKDownloadStatus : NSObject <NSCopying, NSSecureCoding>
{
    unsigned char _state;
    BOOL _isAssetCached;
    unsigned long long _bytesDownloaded;
    unsigned long long _bytesExpected;
    double _estimatedTimeRemaining;
    NSError *_error;
    CKDownloadAsset *_downloadedAsset;
}

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
@property(retain) CKDownloadAsset *downloadedAsset; // @synthesize downloadedAsset=_downloadedAsset;
@property(retain) NSError *error; // @synthesize error=_error;
@property BOOL isAssetCached; // @synthesize isAssetCached=_isAssetCached;
@property double estimatedTimeRemaining; // @synthesize estimatedTimeRemaining=_estimatedTimeRemaining;
@property unsigned long long bytesExpected; // @synthesize bytesExpected=_bytesExpected;
@property unsigned long long bytesDownloaded; // @synthesize bytesDownloaded=_bytesDownloaded;
@property unsigned char state; // @synthesize state=_state;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)description;
- (id)init;

@end

