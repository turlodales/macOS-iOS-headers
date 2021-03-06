//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSArray, NSIndexSet;
@protocol MPLayerableSupport;

@protocol MPAutomaticLayerSupport
- (void)moveLayersFromIndices:(NSIndexSet *)arg1 toIndex:(long long)arg2;
- (void)removeLayersAtIndices:(NSIndexSet *)arg1;
- (void)removeAllLayers;
- (void)insertLayers:(NSArray *)arg1 atIndex:(long long)arg2;
- (void)addLayers:(NSArray *)arg1;
- (void)addLayer:(id <MPLayerableSupport>)arg1;
- (NSArray *)layers;
@end

