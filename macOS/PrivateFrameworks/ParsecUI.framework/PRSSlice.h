//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSImage, NSString;

@interface PRSSlice : NSObject
{
    BOOL _underlined;
    BOOL _stringValueFontIsLarge;
    NSString *_sliceType;
    NSString *_title;
    NSString *_stringValue;
    NSString *_stringValue2;
    NSImage *_image;
    double _floatValue;
}

- (void).cxx_destruct;
@property double floatValue; // @synthesize floatValue=_floatValue;
@property(retain) NSImage *image; // @synthesize image=_image;
@property(retain) NSString *stringValue2; // @synthesize stringValue2=_stringValue2;
@property(retain) NSString *stringValue; // @synthesize stringValue=_stringValue;
@property(retain) NSString *title; // @synthesize title=_title;
@property(retain) NSString *sliceType; // @synthesize sliceType=_sliceType;
@property BOOL stringValueFontIsLarge; // @synthesize stringValueFontIsLarge=_stringValueFontIsLarge;
@property(getter=isUnderlined) BOOL underlined; // @synthesize underlined=_underlined;

@end

