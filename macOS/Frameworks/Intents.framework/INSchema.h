//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"

@class NSDictionary, NSMutableDictionary;

@interface INSchema : NSObject <NSSecureCoding>
{
    BOOL _system;
    NSMutableDictionary *_schemaDictionary;
    NSMutableDictionary *_parameterCombinationDictionary;
    NSMutableDictionary *_configurableParameterCombinationDictionary;
    NSDictionary *_typeForClassDictionary;
    NSDictionary *_typeForSemanticKeypathDictionary;
    NSMutableDictionary *_enums;
    NSMutableDictionary *_types;
}

+ (BOOL)supportsSecureCoding;
+ (id)_supportedTypesDictionary;
+ (void)_resetCache;
+ (id)_cache;
+ (id)_defaultSchemaForBundle:(id)arg1;
+ (id)_schemaWithIntentDefinitionURLs:(id)arg1 bundleIdentifier:(id)arg2 contentOptions:(unsigned long long)arg3;
+ (id)_defaultSchemaForBundle:(id)arg1 contentOptions:(unsigned long long)arg2;
+ (id)systemSchema;
+ (id)defaultSchema;
+ (BOOL)_defaultSchemaCanSupportIntent:(id)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic, getter=isSystem) BOOL system; // @synthesize system=_system;
@property(readonly, nonatomic) NSMutableDictionary *_types; // @synthesize _types;
@property(readonly, nonatomic) NSMutableDictionary *_enums; // @synthesize _enums;
@property(readonly, nonatomic) NSDictionary *_typeForSemanticKeypathDictionary; // @synthesize _typeForSemanticKeypathDictionary;
@property(readonly, nonatomic) NSDictionary *_typeForClassDictionary; // @synthesize _typeForClassDictionary;
@property(readonly, nonatomic) NSMutableDictionary *_configurableParameterCombinationDictionary; // @synthesize _configurableParameterCombinationDictionary;
@property(readonly, nonatomic) NSMutableDictionary *_parameterCombinationDictionary; // @synthesize _parameterCombinationDictionary;
@property(readonly, nonatomic) NSMutableDictionary *_schemaDictionary; // @synthesize _schemaDictionary;
- (id)_dictionaryRepresentation;
- (id)descriptionAtIndent:(unsigned long long)arg1;
- (id)description;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)_objectDescriptionWithSemanticKeypath:(id)arg1;
- (id)_dictionaryRepresentationForIntentCodableDescription:(id)arg1 intentResponseCodableDescription:(id)arg2 appInfo:(id)arg3 localizer:(id)arg4;
- (id)dictionaryRepresentationForIntent:(id)arg1 localizer:(id)arg2;
- (id)dictionaryRepresentationForIntent:(id)arg1;
- (id)_objectDescriptionForTypeOfClass:(Class)arg1;
- (id)_codableDescriptionsForClass:(Class)arg1;
- (id)_classNamesForClass:(Class)arg1;
- (id)_configurableParameterCombinationsForClassName:(id)arg1;
- (id)_parameterCombinationsForClassName:(id)arg1;
- (id)_parameterCombinationsForClass:(Class)arg1;
- (id)_objectDescriptionForClass:(Class)arg1 identifier:(id)arg2;
- (void)_setObjectDescription:(id)arg1 forClass:(Class)arg2 identifier:(id)arg3;
- (void)_loadIntentsFromArrayOfDictionaries:(id)arg1 intentDefinitionNamespace:(id)arg2 fromFile:(id)arg3 bundleIdentifier:(id)arg4 referencedCodableDescriptions:(id)arg5 contentOptions:(unsigned long long)arg6;
- (id)_intentResponseWithDictionary:(id)arg1 intentDefinitionNamespace:(id)arg2 className:(id)arg3 filename:(id)arg4 bundleIdentifier:(id)arg5 referencedCodableDescriptions:(id)arg6;
- (id)_intentWithDictionary:(id)arg1 intentDefinitionNamespace:(id)arg2 filename:(id)arg3 bundleIdentifier:(id)arg4;
- (id)_typesWithDictionary:(id)arg1 filename:(id)arg2 bundleIdentifier:(id)arg3;
- (id)_codableDescriptionWithDictionary:(id)arg1 intentDefinitionNamespace:(id)arg2 filename:(id)arg3 bundleIdentifier:(id)arg4 codableDescriptionClass:(Class)arg5;
- (id)intentWithName:(id)arg1;
- (id)_initWithContentsOfURLs:(id)arg1;
- (id)_initWithContentsOfURLs:(id)arg1 bundleIdentifier:(id)arg2 contentOptions:(unsigned long long)arg3;
- (id)_initWithContentsOfURLs:(id)arg1 bundleIdentifier:(id)arg2;
- (id)init;
- (id)intentResponseCodableDescriptionWithIntentResponseClassName:(id)arg1;
- (id)intentResponseCodableDescriptionWithIntentClassName:(id)arg1;
- (id)intentCodableDescriptionWithIntentClassName:(id)arg1;

@end

