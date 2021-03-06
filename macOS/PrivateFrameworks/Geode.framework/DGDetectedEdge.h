//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Geode/DGOperationCoding-Protocol.h>

@class NSString;

@interface DGDetectedEdge : NSObject <DGOperationCoding>
{
    double _angle0;
    double _angle1;
    struct CGPoint _pt0;
    struct CGPoint _pt1;
}

+ (id)detectedEdgeWithPt0:(struct CGPoint)arg1 angle0:(double)arg2 pt1:(struct CGPoint)arg3 angle1:(double)arg4;
@property(readonly) double angle1; // @synthesize angle1=_angle1;
@property(readonly) struct CGPoint pt1; // @synthesize pt1=_pt1;
@property(readonly) double angle0; // @synthesize angle0=_angle0;
@property(readonly) struct CGPoint pt0; // @synthesize pt0=_pt0;
- (id)initWithDictionary:(id)arg1;
- (id)dictionaryRepresentation;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

