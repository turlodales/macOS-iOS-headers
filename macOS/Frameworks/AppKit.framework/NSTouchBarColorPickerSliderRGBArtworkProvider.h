//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSTouchBarColorPickerSliderArtworkProvider.h>

__attribute__((visibility("hidden")))
@interface NSTouchBarColorPickerSliderRGBArtworkProvider : NSTouchBarColorPickerSliderArtworkProvider
{
    long long _rgbComponent;
    long long _entryMode;
}

+ (id)blueArtworkProviderWithEntryMode:(long long)arg1;
+ (id)greenArtworkProviderWithEntryMode:(long long)arg1;
+ (id)redArtworkProviderWithEntryMode:(long long)arg1;
- (double)lightnessForValue:(double)arg1 baseColor:(id)arg2 horizontallyFlipped:(BOOL)arg3 allowedColorSpaces:(id)arg4;
- (id)sliderLabel;
- (id)formattedValue:(double)arg1;
- (id)accessibilityValueStringForValue:(double)arg1;
- (double)valueFromAccessibilityValueString:(id)arg1;
- (void)updateRootTrackLayer:(id)arg1 color:(id)arg2 horizontallyFlipped:(BOOL)arg3 allowedColorSpaces:(id)arg4;
- (BOOL)isEqual:(id)arg1;
- (id)initWithComponent:(long long)arg1 entryMode:(long long)arg2;

@end

