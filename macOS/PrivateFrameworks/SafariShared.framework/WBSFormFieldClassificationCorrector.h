//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSSet, NSString, WBSFormAutoFillClassificationToCorrectionsTransformer, WBSFormMetadata;

@interface WBSFormFieldClassificationCorrector : NSObject
{
    WBSFormAutoFillClassificationToCorrectionsTransformer *_classificationToCorrectionsTransformer;
    NSSet *_uniqueIDsOfControlsThatWereAutoFilled;
    id <WBSFormFieldClassificationCorrectorDelegate> _delegate;
    NSString *_domain;
    WBSFormMetadata *_formMetadata;
    NSDictionary *_formValues;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSDictionary *formValues; // @synthesize formValues=_formValues;
@property(readonly, copy, nonatomic) WBSFormMetadata *formMetadata; // @synthesize formMetadata=_formMetadata;
@property(readonly, copy, nonatomic) NSString *domain; // @synthesize domain=_domain;
@property(nonatomic) __weak id <WBSFormFieldClassificationCorrectorDelegate> delegate; // @synthesize delegate=_delegate;
- (id)_classificationCorrectionsForControlWithMetadata:(id)arg1 wasIdentifiedAsAddressBookField:(char *)arg2;
- (void)processCorrections;
- (id)init;
- (id)initWithDomain:(id)arg1 formMetadata:(id)arg2 formValues:(id)arg3 uniqueIDsOfControlsThatWereAutoFilled:(id)arg4;

@end

