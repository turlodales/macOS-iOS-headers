//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface PXGCornerRadiusMask : NSObject
{
    id <MTLDevice> _device;
    long long _texturePixelSide;
    double _screenScale;
    double _maxCornerRadius;
    long long _numberOfSlices;
    long long _byteSize;
    id <MTLTexture> _atomicTexture;
}

+ (id)cornerRadiusMaskForDevice:(id)arg1 maxCornerRadius:(double)arg2 screenScale:(double)arg3;
+ (id)_loadQueue;
- (void).cxx_destruct;
@property(retain) id <MTLTexture> atomicTexture; // @synthesize atomicTexture=_atomicTexture;
@property(readonly, nonatomic) long long byteSize; // @synthesize byteSize=_byteSize;
@property(readonly, nonatomic) long long numberOfSlices; // @synthesize numberOfSlices=_numberOfSlices;
@property(readonly, nonatomic) double maxCornerRadius; // @synthesize maxCornerRadius=_maxCornerRadius;
@property(readonly, nonatomic) double screenScale; // @synthesize screenScale=_screenScale;
@property(readonly, nonatomic) long long texturePixelSide; // @synthesize texturePixelSide=_texturePixelSide;
@property(readonly, nonatomic) id <MTLTexture> texture;
- (void)_loadCornerRadiusTexture;
- (id)init;
- (id)initWithDevice:(id)arg1 maxCornerRadius:(double)arg2 screenScale:(double)arg3;

@end

