//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Vision/VNImageBasedRequest.h>

@interface VNClassifyJunkImageRequest : VNImageBasedRequest
{
}

+ (const CDStruct_7d93034e *)revisionAvailability;
+ (id)defaultProcessingDeviceForRevision:(unsigned long long)arg1;
+ (id)descriptionForPrivateRevision:(unsigned long long)arg1;
+ (BOOL)supportsPrivateRevision:(unsigned long long)arg1;
+ (Class)configurationClass;
+ (id)knownClassificationsForRevision:(unsigned long long)arg1 error:(id *)arg2;
- (id)supportedImageSizeSet;
- (CDUnknownBlockType)resultsSortingComparator;
- (BOOL)internalPerformRevision:(unsigned long long)arg1 inContext:(id)arg2 error:(id *)arg3;
- (void)applyConfigurationOfRequest:(id)arg1;
- (BOOL)warmUpRequestPerformer:(id)arg1 error:(id *)arg2;
- (id)newDefaultDetectorOptionsForRequestRevision:(unsigned long long)arg1;
- (id)description;
@property(nonatomic) unsigned long long imageCropAndScaleOption;
- (id)_applicableDetectorAndOptions:(id *)arg1 error:(id *)arg2;

@end

