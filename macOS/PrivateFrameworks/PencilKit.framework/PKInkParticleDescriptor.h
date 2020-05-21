//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface PKInkParticleDescriptor : NSObject
{
    BOOL _adjustEndCapParticleAlpha;
    double _dynamicStep;
    unique_ptr_94812230 _particleSpacingFunction;
    NSString *_textureName;
    struct CGImage *_textureImage;
    double _particleSpacing;
    long long _particleCount;
    unsigned long long _particleRotation;
    struct CGSize _particleSize;
}

+ (id)arrayFromVector:(vector_8f06c10f)arg1;
+ (id)particleDescriptorWithName:(id)arg1 texture:(struct CGImage *)arg2 particleSpacing:(double)arg3 particleCount:(long long)arg4 particleSize:(struct CGSize)arg5 particleRotation:(unsigned long long)arg6;
+ (id)particleDescriptorWithName:(id)arg1 particleSpacing:(double)arg2 particleCount:(long long)arg3 particleSize:(struct CGSize)arg4 particleRotation:(unsigned long long)arg5;
- (id).cxx_construct;
- (void).cxx_destruct;
@property(nonatomic) unsigned long long particleRotation; // @synthesize particleRotation=_particleRotation;
@property(nonatomic) struct CGSize particleSize; // @synthesize particleSize=_particleSize;
@property(nonatomic) long long particleCount; // @synthesize particleCount=_particleCount;
@property(nonatomic) double particleSpacing; // @synthesize particleSpacing=_particleSpacing;
@property(retain, nonatomic) struct CGImage *textureImage; // @synthesize textureImage=_textureImage;
@property(copy, nonatomic) NSString *textureName; // @synthesize textureName=_textureName;
- (double)dynamicStep;
- (void)setDynamicStep:(double)arg1;
- (void)setAdjustEndCapParticleAlpha:(BOOL)arg1;
- (BOOL)adjustEndCapParticleAlpha;
- (void)setParticleSpacingInkFunction:(id)arg1;
- (id)particleSpacingInkFunction;
- (unique_ptr_94812230 *)particleSpacingFunction;
- (void)setParticleSpacingFunction:(unique_ptr_94812230)arg1;

@end

