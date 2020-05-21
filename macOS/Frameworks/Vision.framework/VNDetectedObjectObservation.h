//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Vision/VNObservation.h>

@class NSUUID;

@interface VNDetectedObjectObservation : VNObservation
{
    struct CGRect _boundingBox;
    NSUUID *_identifier;
}

+ (id)observationWithRequestRevision:(unsigned long long)arg1 boundingBox:(struct CGRect)arg2;
+ (id)observationWithBoundingBox:(struct CGRect)arg1;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
@property(copy) NSUUID *identifier; // @synthesize identifier=_identifier;
@property(nonatomic) struct CGRect boundingBox; // @synthesize boundingBox=_boundingBox;
- (void)setBoundingBoxFromQuadrilateralPointsAtTopLeft:(struct CGPoint)arg1 topRight:(struct CGPoint)arg2 bottomRight:(struct CGPoint)arg3 bottomLeft:(struct CGPoint)arg4;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (BOOL)excludesBoundingBoxFromCoding;
- (id)initWithRequestRevision:(unsigned long long)arg1;

@end

