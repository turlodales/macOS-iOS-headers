//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpriteKit/SKNode.h>

@class NSColor;

@interface SKLightNode : SKNode
{
    struct SKCLightNode *_skcLightNode;
}

+ (id)debugHierarchyValueForPropertyWithName:(id)arg1 onObject:(id)arg2 outOptions:(id *)arg3 outError:(id *)arg4;
+ (id)debugHierarchyPropertyDescriptions;
+ (BOOL)supportsSecureCoding;
@property(nonatomic, getter=isEnabled) BOOL enabled;
@property(retain, nonatomic) NSColor *shadowColor;
@property(retain, nonatomic) NSColor *ambientColor;
@property(retain, nonatomic) NSColor *lightColor;
@property(nonatomic) unsigned int categoryBitMask;
- (void)setLightCategoryBitMask:(unsigned int)arg1;
- (unsigned int)lightCategoryBitMask;
- (void)setLightDecay:(double)arg1;
- (double)lightDecay;
@property(nonatomic) double falloff;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (BOOL)isEqualToNode:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;
- (void)commonInit;
- (void)_didMakeBackingNode;
- (struct SKCNode *)_makeBackingNode;

@end

