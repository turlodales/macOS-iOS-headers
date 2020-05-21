//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSDynamicColorModifier.h"

@class NSDictionary, NSString;

__attribute__((visibility("hidden")))
@interface NSColorSystemEffectModifier : NSObject <NSDynamicColorModifier>
{
    long long _systemEffect;
    NSDictionary *_optionsCache;
}

+ (id)modifierForEffect:(long long)arg1;
@property(readonly) long long systemEffect; // @synthesize systemEffect=_systemEffect;
- (id)colorByApplyingToColor:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (id)initWithSystemEffect:(long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

