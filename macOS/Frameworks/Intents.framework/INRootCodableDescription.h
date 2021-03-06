//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Intents/INCodableDescription.h>

@class NSArray, NSDictionary;

@interface INRootCodableDescription : INCodableDescription
{
    NSDictionary *_referencedCodableDescriptionsByClassName;
    NSArray *_referencedCodableDescriptions;
}

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
@property(retain, nonatomic, setter=_setReferencedCodableDescriptions:) NSArray *referencedCodableDescriptions; // @synthesize referencedCodableDescriptions=_referencedCodableDescriptions;
- (void)_reestablishReferencedCodableDescriptionsUsingTypes:(id)arg1;
- (void)_establishReferencedCodableDescriptionsUsingTypes:(id)arg1;
@property(readonly, nonatomic) NSDictionary *_referencedCodableDescriptionsByClassName; // @synthesize _referencedCodableDescriptionsByClassName;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end

