//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Vision/VNTrackingRequest.h>

@interface VNTrackRectangleRequest : VNTrackingRequest
{
}

+ (id)trackerTypeForRequestRevision:(unsigned long long)arg1 error:(id *)arg2;
+ (const CDStruct_7d93034e *)revisionAvailability;
- (id)initWithRectangleObservation:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)initWithRectangleObservation:(id)arg1;

@end

