//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Foundation/NSScanner.h>

@class NSCharacterSet, NSString;

__attribute__((visibility("hidden")))
@interface NSConcreteScanner : NSScanner
{
    NSString *scanString;
    NSCharacterSet *skipSet;
    NSCharacterSet *invertedSkipSet;
    id locale;
    unsigned long long scanLocation;
    struct {
        unsigned int caseSensitive:1;
        unsigned int :31;
    } flags;
}

- (void)dealloc;
- (BOOL)scanLongLong:(long long *)arg1;
- (BOOL)scanInt:(int *)arg1;
- (id)locale;
- (void)setLocale:(id)arg1;
- (BOOL)caseSensitive;
- (void)setCaseSensitive:(BOOL)arg1;
- (id)charactersToBeSkipped;
- (void)setCharactersToBeSkipped:(id)arg1;
- (unsigned long long)scanLocation;
- (void)setScanLocation:(unsigned long long)arg1;
- (id)_invertedSkipSet;
- (id)string;
- (id)initWithString:(id)arg1;

@end

