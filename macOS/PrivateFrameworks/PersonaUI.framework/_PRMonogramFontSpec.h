//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface _PRMonogramFontSpec : NSObject
{
    NSString *_fontName;
    double _baseSize;
    double _tracking;
}

+ (id)specForFontWithName:(id)arg1 baseSize:(double)arg2 tracking:(double)arg3;
- (void).cxx_destruct;
@property(readonly) double tracking; // @synthesize tracking=_tracking;
@property(readonly) double baseSize; // @synthesize baseSize=_baseSize;
@property(readonly) NSString *fontName; // @synthesize fontName=_fontName;

@end

