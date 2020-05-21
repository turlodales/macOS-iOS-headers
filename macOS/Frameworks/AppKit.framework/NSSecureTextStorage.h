//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSTextStorage.h"

@class NSFont;

__attribute__((visibility("hidden")))
@interface NSSecureTextStorage : NSTextStorage
{
    struct __CFAttributedString *_storage;
    NSFont *_font;
    long long _level;
    unsigned short _bulletCharacter;
}

+ (void)initialize;
- (unsigned long long)nextWordFromIndex:(unsigned long long)arg1 forward:(BOOL)arg2;
- (struct _NSRange)doubleClickAtIndex:(unsigned long long)arg1;
- (unsigned long long)lineBreakByHyphenatingBeforeIndex:(unsigned long long)arg1 withinRange:(struct _NSRange)arg2;
- (unsigned long long)lineBreakBeforeIndex:(unsigned long long)arg1 withinRange:(struct _NSRange)arg2;
- (id)attribute:(id)arg1 atIndex:(unsigned long long)arg2 longestEffectiveRange:(struct _NSRange *)arg3 inRange:(struct _NSRange)arg4;
- (id)attribute:(id)arg1 atIndex:(unsigned long long)arg2 effectiveRange:(struct _NSRange *)arg3;
- (id)attributesAtIndex:(unsigned long long)arg1 longestEffectiveRange:(struct _NSRange *)arg2 inRange:(struct _NSRange)arg3;
- (void)addAttribute:(id)arg1 value:(id)arg2 range:(struct _NSRange)arg3;
- (void)replaceCharactersInRange:(struct _NSRange)arg1 withAttributedString:(id)arg2;
- (void)setAttributes:(id)arg1 range:(struct _NSRange)arg2;
- (void)replaceCharactersInRange:(struct _NSRange)arg1 withString:(id)arg2;
- (id)attributesAtIndex:(unsigned long long)arg1 effectiveRange:(struct _NSRange *)arg2;
- (id)string;
- (id)font;
- (void)setFont:(id)arg1;
- (unsigned short)bullferCharacter;
- (void)setBulletCharacter:(unsigned short)arg1;
- (void)endSecureMode;
- (void)beginSecureMode;
- (void)dealloc;
- (id)init;

@end

