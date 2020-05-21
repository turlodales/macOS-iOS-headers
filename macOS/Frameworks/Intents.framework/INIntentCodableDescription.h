//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Intents/INRootCodableDescription.h>

#import "NSCopying.h"
#import "NSSecureCoding.h"

@class INCodableAttribute, NSArray, NSString;

@interface INIntentCodableDescription : INRootCodableDescription <NSSecureCoding, NSCopying>
{
    BOOL _userConfirmationRequired;
    BOOL _configurable;
    BOOL _eligibleForSuggestions;
    NSString *_inputAttributeName;
    NSString *_keyAttributeName;
    NSString *_attributeKeyPrefix;
    NSString *_attributesKeyPrefix;
    NSString *_title;
    NSString *_titleLocID;
    NSString *_descriptiveText;
    NSString *_descriptiveTextLocID;
    NSString *_defaultImageName;
    long long _intentCategory;
    NSString *_verb;
    NSArray *_entityVerbs;
}

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
@property(copy, nonatomic) NSArray *entityVerbs; // @synthesize entityVerbs=_entityVerbs;
@property(nonatomic, getter=isEligibleForSuggestions) BOOL eligibleForSuggestions; // @synthesize eligibleForSuggestions=_eligibleForSuggestions;
@property(nonatomic, getter=isConfigurable) BOOL configurable; // @synthesize configurable=_configurable;
@property(nonatomic) BOOL userConfirmationRequired; // @synthesize userConfirmationRequired=_userConfirmationRequired;
@property(copy, nonatomic) NSString *verb; // @synthesize verb=_verb;
@property(nonatomic) long long intentCategory; // @synthesize intentCategory=_intentCategory;
@property(copy, nonatomic) NSString *defaultImageName; // @synthesize defaultImageName=_defaultImageName;
@property(copy, nonatomic) NSString *descriptiveTextLocID; // @synthesize descriptiveTextLocID=_descriptiveTextLocID;
@property(copy, nonatomic) NSString *descriptiveText; // @synthesize descriptiveText=_descriptiveText;
@property(copy, nonatomic) NSString *titleLocID; // @synthesize titleLocID=_titleLocID;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(copy, nonatomic, setter=_setKeyAttributeName:) NSString *_keyAttributeName; // @synthesize _keyAttributeName;
@property(copy, nonatomic, setter=_setInputAttributeName:) NSString *_inputAttributeName; // @synthesize _inputAttributeName;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)_reestablishReferencedCodableDescriptionsUsingTypes:(id)arg1 intentResponseCodableDescription:(id)arg2;
- (void)_establishReferencedCodableDescriptionsUsingTypes:(id)arg1 intentResponseCodableDescription:(id)arg2;
- (void)_updateWithIntentCodableDescription:(id)arg1;
- (id)dictionaryRepresentationWithLocalizer:(id)arg1;
- (void)updateWithDictionary:(id)arg1;
- (id)_attributesKeyPrefix;
- (id)_attributeKeyPrefix;
- (id)keyPrefix;
- (id)_ignoredAttributeTags;
- (id)localizedDescriptiveTextWithLocalizer:(id)arg1;
@property(readonly, copy) NSString *localizedDescriptiveText;
- (id)localizedTitleWithLocalizer:(id)arg1;
@property(readonly, copy) NSString *localizedTitle;
@property(readonly, nonatomic) INCodableAttribute *keyAttribute;
@property(readonly, nonatomic) INCodableAttribute *inputAttribute;
- (id)resolvableParameterCombinationsWithParameterCombinations:(id)arg1;
- (id)attributes;

@end

