//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class WDCharacterProperties, WDTableProperties;

__attribute__((visibility("hidden")))
@interface WDTableRowProperties : NSObject <NSCopying>
{
    WDTableProperties *mTableProperties;
    WDCharacterProperties *mCharacterProperties;
    unsigned int mOriginal:1;
    unsigned int mTracked:1;
    unsigned int mResolved:1;
    CDStruct_43955328 mOriginalProperties;
    CDStruct_43955328 mTrackedProperties;
}

- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (BOOL)isHeaderOverridden;
- (void)setHeader:(BOOL)arg1;
- (BOOL)header;
- (BOOL)isHeightTypeOverridden;
- (void)setHeightType:(int)arg1;
- (int)heightType;
- (BOOL)isHeightOverridden;
- (void)setHeight:(long long)arg1;
- (long long)height;
- (BOOL)isWidthAfterTypeOverridden;
- (void)setWidthAfterType:(int)arg1;
- (int)widthAfterType;
- (BOOL)isWidthAfterOverridden;
- (void)setWidthAfter:(short)arg1;
- (short)widthAfter;
- (BOOL)isWidthBeforeTypeOverridden;
- (void)setWidthBeforeType:(int)arg1;
- (int)widthBeforeType;
- (BOOL)isWidthBeforeOverridden;
- (void)setWidthBefore:(short)arg1;
- (short)widthBefore;
- (void)addProperties:(id)arg1;
- (void)setResolveMode:(int)arg1;
- (int)resolveMode;
- (id)characterProperties;
- (id)tableProperties;
- (id)initWithDocument:(id)arg1;
- (id)init;
- (void)addPropertiesValues:(CDStruct_43955328 *)arg1 to:(CDStruct_43955328 *)arg2;

@end

