//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AppKit/NSAppearanceCustomization-Protocol.h>

@class NSAppearance, NSString;

__attribute__((visibility("hidden")))
@interface _NSAppearanceCustomizationProxy : NSObject <NSAppearanceCustomization>
{
    NSAppearance *_appearance;
}

+ (id)keyPathsForValuesAffectingEffectiveAppearance;
@property(retain) NSAppearance *appearance; // @synthesize appearance=_appearance;
@property(readonly) NSAppearance *effectiveAppearance;
- (void)dealloc;
- (id)initWithAppearance:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

