//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <MetalTools/MTLToolsSharedEvent.h>

@class NSMapTable;

@interface MTLDebugSharedEvent : MTLToolsSharedEvent
{
    struct mutex _resourceMapLock;
    struct unordered_map<unsigned long long, unsigned long long, std::__1::hash<unsigned long long>, std::__1::equal_to<unsigned long long>, std::__1::allocator<std::__1::pair<const unsigned long long, unsigned long long>>> _valueToCountMap;
    NSMapTable *_valueToResourcesMap;
    BOOL _isStandardEvent;
}

+ (id)sharedListener;
- (id).cxx_construct;
- (void).cxx_destruct;
@property(nonatomic) BOOL isStandardEvent; // @synthesize isStandardEvent=_isStandardEvent;
- (void)releaseWritableResourcesForValue:(unsigned long long)arg1;
- (void)retainWritableResourcesForValue:(unsigned long long)arg1;
- (void)_retainWritableResourcesForValue:(unsigned long long)arg1;
- (id)removeWritableResourcesForValue:(unsigned long long)arg1;
- (void)setWritableResources:(id)arg1 forValue:(unsigned long long)arg2;
- (void)setSignaledValue:(unsigned long long)arg1;
- (void)dealloc;
- (id)initWithBaseObject:(id)arg1 parent:(id)arg2;

@end

