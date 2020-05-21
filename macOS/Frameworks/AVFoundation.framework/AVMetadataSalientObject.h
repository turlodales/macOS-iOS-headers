//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AVFoundation/AVMetadataObject.h>

#import "NSCopying.h"

@interface AVMetadataSalientObject : AVMetadataObject <NSCopying>
{
    long long _objectID;
}

@property(readonly) long long objectID; // @synthesize objectID=_objectID;
- (id)initDerivedMetadataObjectFromMetadataObject:(id)arg1 withTransform:(struct CGAffineTransform)arg2 isVideoMirrored:(BOOL)arg3 rollAdjustment:(double)arg4;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithObjectID:(long long)arg1 time:(CDStruct_1b6d18a9)arg2 duration:(CDStruct_1b6d18a9)arg3 bounds:(struct CGRect)arg4 optionalInfoDict:(id)arg5 originalMetadataObject:(id)arg6 sourceCaptureInput:(id)arg7;
- (id)initWithObjectID:(long long)arg1 time:(CDStruct_1b6d18a9)arg2 duration:(CDStruct_1b6d18a9)arg3 bounds:(struct CGRect)arg4;

@end

