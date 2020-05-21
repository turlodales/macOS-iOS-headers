//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Vision/VNFaceLandmarks.h>

@class NSArray, VNFaceLandmarkRegion2D;

@interface VNFaceLandmarks2D : VNFaceLandmarks
{
    VNFaceLandmarkRegion2D *_allPoints;
    struct os_unfair_lock_s _allPointsLock;
    VNFaceLandmarkRegion2D *_faceContour;
    struct os_unfair_lock_s _faceContourLock;
    VNFaceLandmarkRegion2D *_leftEye;
    struct os_unfair_lock_s _leftEyeLock;
    VNFaceLandmarkRegion2D *_rightEye;
    struct os_unfair_lock_s _rightEyeLock;
    VNFaceLandmarkRegion2D *_leftEyebrow;
    struct os_unfair_lock_s _leftEyebrowLock;
    VNFaceLandmarkRegion2D *_rightEyebrow;
    struct os_unfair_lock_s _rightEyebrowLock;
    VNFaceLandmarkRegion2D *_nose;
    struct os_unfair_lock_s _noseLock;
    VNFaceLandmarkRegion2D *_noseCrest;
    struct os_unfair_lock_s _noseCrestLock;
    VNFaceLandmarkRegion2D *_medianLine;
    struct os_unfair_lock_s _medianLineLock;
    VNFaceLandmarkRegion2D *_outerLips;
    struct os_unfair_lock_s _outerLipsLock;
    VNFaceLandmarkRegion2D *_innerLips;
    struct os_unfair_lock_s _innerLipsLock;
    VNFaceLandmarkRegion2D *_leftPupil;
    struct os_unfair_lock_s _leftPupilLock;
    VNFaceLandmarkRegion2D *_rightPupil;
    struct os_unfair_lock_s _rightPupilLock;
    unsigned long long _constellation;
    NSArray *_precisionEstimatesPerPoint;
    NSArray *_occlusionFlagsPerPoint;
}

+ (id)_createNSArrayFrom:(id)arg1 withPointIndices:(const int *)arg2 andPointCount:(unsigned long long)arg3;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
@property(retain) NSArray *occlusionFlagsPerPoint; // @synthesize occlusionFlagsPerPoint=_occlusionFlagsPerPoint;
@property(retain) NSArray *precisionEstimatesPerPoint; // @synthesize precisionEstimatesPerPoint=_precisionEstimatesPerPoint;
@property unsigned long long constellation; // @synthesize constellation=_constellation;
- (BOOL)isEqual:(id)arg1;
@property(readonly) VNFaceLandmarkRegion2D *rightPupil; // @synthesize rightPupil=_rightPupil;
@property(readonly) VNFaceLandmarkRegion2D *leftPupil; // @synthesize leftPupil=_leftPupil;
@property(readonly) VNFaceLandmarkRegion2D *innerLips; // @synthesize innerLips=_innerLips;
@property(readonly) VNFaceLandmarkRegion2D *outerLips; // @synthesize outerLips=_outerLips;
@property(readonly) VNFaceLandmarkRegion2D *medianLine; // @synthesize medianLine=_medianLine;
@property(readonly) VNFaceLandmarkRegion2D *noseCrest; // @synthesize noseCrest=_noseCrest;
@property(readonly) VNFaceLandmarkRegion2D *nose; // @synthesize nose=_nose;
@property(readonly) VNFaceLandmarkRegion2D *rightEyebrow; // @synthesize rightEyebrow=_rightEyebrow;
@property(readonly) VNFaceLandmarkRegion2D *leftEyebrow; // @synthesize leftEyebrow=_leftEyebrow;
@property(readonly) VNFaceLandmarkRegion2D *rightEye; // @synthesize rightEye=_rightEye;
@property(readonly) VNFaceLandmarkRegion2D *leftEye; // @synthesize leftEye=_leftEye;
- (id)_createFaceLandmarks2DRegionFromPointIndexes:(const int *)arg1 andPointCount:(unsigned long long)arg2;
@property(readonly) VNFaceLandmarkRegion2D *faceContour; // @synthesize faceContour=_faceContour;
@property(readonly) VNFaceLandmarkRegion2D *allPoints; // @synthesize allPoints=_allPoints;
- (void *)_createPointArray:(const int *)arg1 count:(unsigned long long)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (void)_initLocks;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithRequestRevision:(unsigned long long)arg1 pointsData:(id)arg2 pointCount:(unsigned long long)arg3 constellation:(unsigned long long)arg4 precisionEstimatesPerPoint:(id)arg5 occlusionFlagsPerPoint:(id)arg6 userFacingBBox:(struct CGRect)arg7 alignedBBox:(struct _Geometry2D_rect2D_)arg8 landmarkScore:(float)arg9;

@end

