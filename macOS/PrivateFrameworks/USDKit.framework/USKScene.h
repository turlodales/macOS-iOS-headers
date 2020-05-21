//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <USDKit/USKObject.h>

@class NSURL, USKNode;

@interface USKScene : USKObject
{
    TfRefPtr_a9ae0d85 _usdStage;
    NSURL *_fileURL;
}

+ (id)newSceneWithURL:(id)arg1 error:(id *)arg2;
+ (id)newSceneWithURL:(id)arg1;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)dealloc;
- (void)dumpUSDA;
- (id)loadedNodeIterator;
- (id)nodeIterator;
- (id)customMetadataWithKey:(id)arg1;
- (id)dictionaryMetadataWithKey:(id)arg1 dictionaryKey:(id)arg2;
- (id)metadataWithKey:(id)arg1;
- (BOOL)setCustomMetadata:(id)arg1 value:(id)arg2;
- (BOOL)setDictionaryMetadataWithKey:(id)arg1 dictionaryKey:(id)arg2 value:(id)arg3;
- (BOOL)setMetadataWithKey:(id)arg1 value:(id)arg2;
- (id)metadata;
- (id)subLayerOffsets;
- (id)subLayerPaths;
- (void)addSubLayerWithPath:(id)arg1 offset:(id)arg2;
- (void)addSubLayerWithPath:(id)arg1;
@property(readonly, nonatomic) USKNode *rootNode;
- (id)newNodeAtPath:(id)arg1 type:(id)arg2 specifier:(id)arg3;
- (id)newNodeAtPath:(id)arg1 type:(id)arg2;
- (id)objectAtPath:(id)arg1;
- (id)propertyAtPath:(id)arg1;
- (id)nodeAtPath:(id)arg1;
- (void)saveAndCreateARKitUSDZPackageWithURL:(id)arg1;
- (void)saveAndCreateUSDZPackageWithURL:(id)arg1;
- (void)save;
- (TfRefPtr_a9ae0d85)usdStage;
- (id)initWithUsdStage:(TfRefPtr_a9ae0d85)arg1 fileURL:(id)arg2;
- (id)initSceneFromURL:(id)arg1 error:(id *)arg2;
- (id)initSceneFromURL:(id)arg1;

@end

