//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FinderKit/FI_IPropertyValueExtractor.h>

__attribute__((visibility("hidden")))
@interface FI_IPropertySizeExtractor : FI_IPropertyValueExtractor
{
    struct TFENodeVector _nodesToSize;
    struct map<TFENode, TNSRef<NSMutableDictionary, void>, std::__1::less<TFENode>, std::__1::allocator<std::__1::pair<const TFENode, TNSRef<NSMutableDictionary, void>>>> _nodesAndSizeMap;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)flush;
- (_Bool)updateNeededWithUpdateList:(const vector_614ab7ad *)arg1;
- (_Bool)updateNeededWithChangedMap:(const map_253f12d2 *)arg1;
- (id)value;
- (_Bool)isWaitingForPendingNode:(const struct TFENode *)arg1;
- (_Bool)isWaitingForPendingNodes;
- (long long)sumValueForProperty:(unsigned int)arg1;
- (long long)valueForProperty:(unsigned int)arg1 ofNode:(const struct TFENode *)arg2;
- (void)setValue:(long long)arg1 forProperty:(unsigned int)arg2 ofNode:(const struct TFENode *)arg3;
- (id)computeValue;
- (int)extractValueFromNode:(const struct TFENode *)arg1;
- (id)extractValueFromNodes:(const struct TFENodeVector *)arg1;
- (void)prefetchValueOnSecondaryThread:(const struct TFENodeVector *)arg1 cancelled:(const atomic_fa7affc3 *)arg2;
- (_Bool)isApplicableToNodes:(const struct TFENodeVector *)arg1;
- (_Bool)needsUpdateForProperty:(unsigned int)arg1;
- (id)init;

@end

