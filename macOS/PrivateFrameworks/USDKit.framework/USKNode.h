//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <USDKit/USKObject.h>

@class NSArray, NSDictionary, NSString, USKToken;

@interface USKNode : USKObject
{
    struct UsdPrim _prim;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)parent;
@property(readonly, nonatomic) NSArray *schemaTypes;
@property(readonly, nonatomic) USKToken *typeName;
@property(readonly, nonatomic) NSString *type;
- (id)propertyList;
- (id)loadedSubtreeIterator;
- (id)loadedChildIterator;
- (id)subtreeIterator;
- (id)childIterator;
- (id)path;
- (id)name;
- (id)newCustomPropertyWithName:(id)arg1 type:(id)arg2 role:(id)arg3;
- (id)newPropertyWithName:(id)arg1 type:(id)arg2 role:(id)arg3 variability:(BOOL)arg4;
- (id)newPropertyWithName:(id)arg1 type:(id)arg2 role:(id)arg3;
- (void)setSpecifier:(id)arg1;
- (id)specifier;
- (id)masterNode;
- (BOOL)isInstanceNode;
- (BOOL)removeProperty:(id)arg1;
- (id)property:(id)arg1;
@property(readonly, nonatomic) NSDictionary *properties;
- (id)inheritedProperty:(id)arg1;
- (id)inheritedSkeletonAnimationBinding;
- (id)inheritedSkeletonBinding;
- (id)inheritedMaterialBinding;
- (BOOL)editVariant:(id)arg1 variantSet:(id)arg2 block:(CDUnknownBlockType)arg3;
- (BOOL)selectVariant:(id)arg1 variantSet:(id)arg2;
- (id)variantsWithVariantSet:(id)arg1;
- (id)variantSets;
- (BOOL)hasVariantSet:(id)arg1;
- (BOOL)hasVariantSets;
- (void)addVariant:(id)arg1 variantSet:(id)arg2;
- (void)addVariantSet:(id)arg1;
- (void)clearReferences;
- (void)addReferenceWithPath:(id)arg1 nodePath:(id)arg2 offset:(id)arg3;
- (void)addReferenceWithPath:(id)arg1 nodePath:(id)arg2;
- (void)addReferenceWithURL:(id)arg1 nodePath:(id)arg2;
- (id)customMetadataWithKey:(id)arg1;
- (id)dictionaryMetadataWithKey:(id)arg1 dictionaryKey:(id)arg2;
- (id)metadataWithKey:(id)arg1;
- (BOOL)setCustomMetadata:(id)arg1 value:(id)arg2;
- (BOOL)setDictionaryMetadataWithKey:(id)arg1 dictionaryKey:(id)arg2 value:(id)arg3;
- (BOOL)setMetadataWithKey:(id)arg1 value:(id)arg2;
- (id)metadata;
- (BOOL)hasSchemaType:(id)arg1;
- (void)applyType:(id)arg1;
- (struct UsdPrim)usdPrim;
- (id)initWithUsdPrim:(struct UsdPrim)arg1;

@end

