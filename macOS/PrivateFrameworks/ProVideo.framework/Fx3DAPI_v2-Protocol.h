//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProVideo/Fx3DAPI-Protocol.h>

@class NSData;

@protocol Fx3DAPI_v2 <Fx3DAPI>
- (BOOL)isUsingCamera;
- (double)focalLengthAtTime:(double)arg1;
- (NSData *)worldToEyeMatrix;
- (NSData *)worldToObjectMatrix;
- (NSData *)worldToFilmMatrix;
@end

