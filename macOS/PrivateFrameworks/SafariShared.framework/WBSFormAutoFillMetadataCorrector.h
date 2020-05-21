//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSCache, NSMutableSet, NSString, WBSFormAutoFillClassificationToCorrectionsTransformer;

@interface WBSFormAutoFillMetadataCorrector : NSObject
{
    id <WBSFormAutoFillCorrectionsStore> _correctionsStore;
    NSCache *_fingerprintsToCorrections;
    WBSFormAutoFillClassificationToCorrectionsTransformer *_classificationToCorrectionsTransformer;
    NSMutableSet *_correctedFormMetadataID;
    NSString *_domain;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *domain; // @synthesize domain=_domain;
- (id)bestAvailableMetadataFromControlMetadata:(id)arg1;
- (id)bestAvailableMetadataFromMetadata:(id)arg1;
- (BOOL)hasAttemptedToCorrectMetadata:(id)arg1;
- (void)enqueueCorrectionsRequestForFormMetadata:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_commonInitWithDomain:(id)arg1 correctionsStore:(id)arg2;
- (id)init;
- (id)initWithDomain:(id)arg1;

@end

