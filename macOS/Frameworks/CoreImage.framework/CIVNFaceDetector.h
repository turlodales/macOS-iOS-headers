//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreImage/CIDetector.h>

@class CIContext;

__attribute__((visibility("hidden")))
@interface CIVNFaceDetector : CIDetector
{
    CIContext *context;
}

@property(readonly, retain) CIContext *context; // @synthesize context;
- (void)dealloc;
- (id)featuresInImage:(id)arg1 options:(id)arg2;
- (id)initWithContext:(id)arg1 options:(id)arg2;

@end

