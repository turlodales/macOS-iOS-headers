//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class EspressoFDOverfeatNetwork;

@interface EspressoDCNEspressoOverfeatDetector : NSObject
{
    int tileSizeScaleFactor;
    int tileDimension;
    int localFaceMerging;
    struct FaceList *face_list;
    EspressoFDOverfeatNetwork *_enet;
    double _confidenceThreshold;
    double _minBoundingBoxThreshold;
}

- (void).cxx_destruct;
@property(nonatomic) double minBoundingBoxThreshold; // @synthesize minBoundingBoxThreshold=_minBoundingBoxThreshold;
@property(nonatomic) double confidenceThreshold; // @synthesize confidenceThreshold=_confidenceThreshold;
@property(retain, nonatomic) EspressoFDOverfeatNetwork *enet; // @synthesize enet=_enet;
- (void)dealloc;
- (id)getDescription;
- (double)compareObject:(id)arg1 withObject:(id)arg2 error:(id *)arg3;
- (void)commonInit;
- (id)initWithNetwork:(id)arg1;
- (id)initWithOptions:(id)arg1;
- (id)init;
- (void)mergeFaceList;
- (void)computeBBoxUsingProb:(shared_ptr_dc6ac1b7)arg1 box:(shared_ptr_dc6ac1b7)arg2 andScalefactor:(float)arg3 padX:(float)arg4 padY:(float)arg5;
- (id)getFacesFromNetworkResultOriginalWidth:(float)arg1 originalHeight:(float)arg2;
- (void)fillFaceList;

@end

