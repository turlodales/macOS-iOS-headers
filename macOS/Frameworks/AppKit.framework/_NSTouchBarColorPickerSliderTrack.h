//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSView.h>

@class NSArray, NSColor, NSTouchBarColorPickerSliderArtworkProvider;

__attribute__((visibility("hidden")))
@interface _NSTouchBarColorPickerSliderTrack : NSView
{
    NSTouchBarColorPickerSliderArtworkProvider *_artworkProvider;
    NSArray *_allowedColorSpaces;
    NSColor *_displayedColor;
    id _autounbinder;
    BOOL _valueIsFlipped;
}

+ (id)keyPathsForValuesInvalidatingDisplay;
@property(copy) NSArray *allowedColorSpaces; // @synthesize allowedColorSpaces=_allowedColorSpaces;
@property BOOL valueIsFlipped; // @synthesize valueIsFlipped=_valueIsFlipped;
@property(copy) NSTouchBarColorPickerSliderArtworkProvider *artworkProvider; // @synthesize artworkProvider=_artworkProvider;
@property(copy) NSColor *displayedColor; // @synthesize displayedColor=_displayedColor;
- (void)updateLayer;
- (BOOL)wantsLayer;
- (struct CGSize)intrinsicContentSize;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (BOOL)_shouldDoLayerPerformanceUpdates;
- (id)_autounbinder;
- (oneway void)release;

@end

