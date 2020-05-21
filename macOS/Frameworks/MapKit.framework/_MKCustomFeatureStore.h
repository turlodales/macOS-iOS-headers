//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "VKCustomFeatureDataSource.h"

@class GEOFeatureStyleAttributes, MKQuadTrie, NSHashTable, NSString;

@interface _MKCustomFeatureStore : NSObject <VKCustomFeatureDataSource>
{
    MKQuadTrie *_annotationsTrie;
    NSHashTable *_observers;
    BOOL _isClusteringEnabled;
    GEOFeatureStyleAttributes *_clusterStyleAttributes;
    NSString *_annotationText;
    NSString *_annotationLocale;
    unsigned char _sceneID;
    unsigned char _sceneState;
    id <MKCustomFeatureStoreDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <MKCustomFeatureStoreDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) unsigned char sceneID; // @synthesize sceneID=_sceneID;
@property(copy, nonatomic) GEOFeatureStyleAttributes *clusterStyleAttributes; // @synthesize clusterStyleAttributes=_clusterStyleAttributes;
@property(readonly, nonatomic) BOOL isClusteringEnabled; // @synthesize isClusteringEnabled=_isClusteringEnabled;
- (unsigned char)sceneState;
- (void)getClusterAnnotationTextForClusterFeatureCount:(unsigned long long)arg1 text:(id *)arg2 locale:(id *)arg3;
- (void)getClusterImageTextForClusterFeatureCount:(unsigned long long)arg1 text:(id *)arg2 locale:(id *)arg3;
- (id)annotationsInMapRect:(CDStruct_02837cd9)arg1;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (void)_setSceneState:(unsigned char)arg1;
- (void)_invalidateRect:(CDStruct_02837cd9)arg1;
- (id)allAnnotations;
- (unsigned long long)annotationCount;
- (void)_clearAnnotations;
- (void)removeAnnotations:(id)arg1;
- (void)addAnnotations:(id)arg1;
- (void)setAnnotations:(id)arg1;
- (void)setClusterAnnotationText:(id)arg1 locale:(id)arg2;
- (void)hideScene;
- (void)showScene;
- (id)init;
- (id)initWithClustering:(BOOL)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

