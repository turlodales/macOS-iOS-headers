//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Slideshows/MREffect.h>

@interface MREffectStretchableSlide : MREffect
{
    struct CGRect mSpriteInnerRect;
    struct CGRect mImageInnerRect;
    BOOL mDontDrawInner;
}

- (void)renderAtTime:(double)arg1 inContext:(id)arg2 withArguments:(id)arg3;
- (BOOL)isOpaque;
- (BOOL)isNative3D;
- (void)setAttributes:(id)arg1;

@end

