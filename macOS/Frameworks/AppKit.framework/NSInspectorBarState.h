//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

__attribute__((visibility("hidden")))
@interface NSInspectorBarState : NSObject
{
    id _familyName;
    id _faceName;
    double _pointSize;
    id _foregroundColor;
    id _backgroundColor;
    id _underlineStyle;
    id _strikeThrough;
    long long _alignment;
    id _lineSpacingStyle;
    id _textList;
    BOOL _boldTrait;
    BOOL _italicTrait;
}

@property BOOL italicTrait; // @synthesize italicTrait=_italicTrait;
@property BOOL boldTrait; // @synthesize boldTrait=_boldTrait;
@property(retain) id textList; // @synthesize textList=_textList;
@property(retain) id lineSpacingStyle; // @synthesize lineSpacingStyle=_lineSpacingStyle;
@property long long alignment; // @synthesize alignment=_alignment;
@property(retain) id strikeThrough; // @synthesize strikeThrough=_strikeThrough;
@property(retain) id underlineStyle; // @synthesize underlineStyle=_underlineStyle;
@property(retain) id backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(retain) id foregroundColor; // @synthesize foregroundColor=_foregroundColor;
@property double pointSize; // @synthesize pointSize=_pointSize;
@property(retain) id faceName; // @synthesize faceName=_faceName;
@property(retain) id familyName; // @synthesize familyName=_familyName;
- (void)dealloc;
- (id)init;

@end

