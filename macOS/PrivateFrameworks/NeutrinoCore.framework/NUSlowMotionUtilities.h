//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface NUSlowMotionUtilities : NSObject
{
}

+ (id)timeMapperForAssetDuration:(double)arg1 rate:(float)arg2 range:(CDStruct_e83c9415)arg3 error:(out id *)arg4;
+ (id)slowMotionAudioMixFromAsset:(id)arg1 rate:(float)arg2 range:(CDStruct_e83c9415)arg3 error:(out id *)arg4;
+ (id)slowMotionVideoFromAsset:(id)arg1 rate:(float)arg2 range:(CDStruct_e83c9415)arg3 error:(out id *)arg4;
+ (id)slomoFactory;
+ (id)photosFormatsSlomoFactory;

@end

