//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PhotoImaging/PIVideoReframer.h>

@class NSMutableArray;

@interface PIVideoReframerV1 : PIVideoReframer
{
    const struct Session *v1Session;
    NSMutableArray *debugSceneSegments;
    NSMutableArray *debugReframeSegments;
    NSMutableArray *debugKeyframes;
}

- (void).cxx_destruct;
- (id)debugKeyframes;
- (id)debugReframeSegments;
- (id)debugSceneSegments;
- (struct CGVector)debugCameraMotionAtTime:(CDStruct_1b6d18a9)arg1;
- (id)debugSubjectsAtTime:(CDStruct_1b6d18a9)arg1;
- (long long)revision;
- (id)initWithEncodedPixelSize:(CDStruct_912cb5d2)arg1 orientation:(long long)arg2 clapRect:(CDStruct_996ac03c)arg3 viewRect:(CDStruct_996ac03c)arg4 config:(const CDUnion_b42e088f *)arg5;

@end

