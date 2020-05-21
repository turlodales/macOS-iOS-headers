//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSAppearance, NSColor;

@interface PXGViewEnvironment : NSObject <NSCopying>
{
    BOOL _accessibilityEnabled;
    BOOL _emphasized;
    NSColor *_backgroundColor;
    NSColor *_tintColor;
    id _traitCollection;
    long long _userInterfaceStyle;
    struct CGColor *_selectionHighlightColor;
    NSAppearance *_effectiveAppearance;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSAppearance *effectiveAppearance; // @synthesize effectiveAppearance=_effectiveAppearance;
@property(readonly, nonatomic) BOOL emphasized; // @synthesize emphasized=_emphasized;
@property(readonly, nonatomic) BOOL accessibilityEnabled; // @synthesize accessibilityEnabled=_accessibilityEnabled;
@property(readonly, nonatomic) struct CGColor *selectionHighlightColor; // @synthesize selectionHighlightColor=_selectionHighlightColor;
@property(readonly, nonatomic) long long userInterfaceStyle; // @synthesize userInterfaceStyle=_userInterfaceStyle;
@property(readonly, nonatomic) id traitCollection; // @synthesize traitCollection=_traitCollection;
@property(readonly, nonatomic) NSColor *tintColor; // @synthesize tintColor=_tintColor;
@property(readonly, nonatomic) NSColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (BOOL)isEqual:(id)arg1;
- (void)dealloc;
- (id)initWithView:(id)arg1 accessibilityEnabled:(BOOL)arg2;

@end

