//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AVFoundation/AVMetadataObject.h>

#import "NSCopying.h"

@class NSData;

@interface AVMetadataSaliencyHeatMap : AVMetadataObject <NSCopying>
{
    long long _bytesPerRow;
    long long _width;
    long long _height;
    NSData *_heatMap;
}

@property(readonly) NSData *heatMap; // @synthesize heatMap=_heatMap;
@property(readonly) long long height; // @synthesize height=_height;
@property(readonly) long long width; // @synthesize width=_width;
@property(readonly) long long bytesPerRow; // @synthesize bytesPerRow=_bytesPerRow;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;

@end

