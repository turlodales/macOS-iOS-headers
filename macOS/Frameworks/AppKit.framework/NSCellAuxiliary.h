//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSAppearanceContentStyle, NSAttributedString, NSControl, NSFont, NSFormatter, NSImage, NSMenu, NSMutableDictionary, NSString, NSTimer, NSTouch;

__attribute__((visibility("hidden")))
@interface NSCellAuxiliary : NSObject
{
    struct {
        unsigned int writingDirection:2;
        unsigned int backgroundStyleIsSet:1;
        unsigned int imageInterpolation:3;
        unsigned int hasMouseTrackingInfo:1;
        unsigned int okToTrack:1;
        unsigned int reserved:24;
    } auxCFlags;
    NSControl *_controlView;
    NSImage *_image;
    NSFont *_font;
    NSMutableDictionary *_textAttributes;
    NSFormatter *_formatter;
    id _representedObject;
    NSString *_userInterfaceItemIdentifier;
    NSMenu *_menu;
    long long _cachedAttributedStringGeneration;
    NSAttributedString *_cachedAttributedStringValue;
    NSTouch *_trackingTouch;
    NSTimer *_touchContinuousTimer;
    NSAppearanceContentStyle *_cachedContentStyle;
}

@property(retain) NSAppearanceContentStyle *cachedContentStyle; // @synthesize cachedContentStyle=_cachedContentStyle;
@property(retain) NSTimer *touchContinuousTimer; // @synthesize touchContinuousTimer=_touchContinuousTimer;
@property(retain) NSTouch *trackingTouch; // @synthesize trackingTouch=_trackingTouch;
@property(retain) NSAttributedString *cachedAttributedStringValue; // @synthesize cachedAttributedStringValue=_cachedAttributedStringValue;
@property long long cachedAttributedStringGeneration; // @synthesize cachedAttributedStringGeneration=_cachedAttributedStringGeneration;
@property(retain) NSMenu *menu; // @synthesize menu=_menu;
@property(copy) NSString *userInterfaceItemIdentifier; // @synthesize userInterfaceItemIdentifier=_userInterfaceItemIdentifier;
@property(retain) id representedObject; // @synthesize representedObject=_representedObject;
@property(retain) NSFormatter *formatter; // @synthesize formatter=_formatter;
@property(retain) NSMutableDictionary *textAttributes; // @synthesize textAttributes=_textAttributes;
@property(retain) NSFont *font; // @synthesize font=_font;
@property(retain) NSImage *image; // @synthesize image=_image;
@property NSControl *controlView; // @synthesize controlView=_controlView;
- (id)cachedAttributedStringWithGeneration:(long long)arg1;
- (void)dealloc;

@end

