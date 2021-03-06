//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeKit/HMCameraClipAssetContext.h>

#import <HomeKit/NSCopying-Protocol.h>
#import <HomeKit/NSSecureCoding-Protocol.h>

@class NSData;

@interface HMCameraClipVideoAssetContext : HMCameraClipAssetContext <NSCopying, NSSecureCoding>
{
    NSData *_hlsPlaylist;
}

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly, copy) NSData *hlsPlaylist; // @synthesize hlsPlaylist=_hlsPlaylist;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)description;
- (id)initWithURL:(id)arg1 expirationDate:(id)arg2 requiredHTTPHeaders:(id)arg3 hlsPlaylist:(id)arg4;
- (id)initWithURL:(id)arg1 expirationDate:(id)arg2 requiredHTTPHeaders:(id)arg3;

@end

