//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CoreWLANKit/APFormatter.h>

@class NSCharacterSet, NSString;

__attribute__((visibility("hidden")))
@interface MACFormatter : APFormatter
{
    NSCharacterSet *_possibleSeparators;
    NSCharacterSet *_possibleSeparatorsInvertedSet;
    NSString *_userPreferredSeparator;
}

+ (BOOL)parseMACAddress:(const char *)arg1 intoHexString:(char *)arg2;
+ (id)macFormatter;
+ (id)sharedMACFormatter;
+ (id)macAddressSet;
- (id)userPreferredSeparator;
- (void)setUserPreferredSeparator:(id)arg1;
- (id)possibleSeparatorsInvertedSet;
- (void)setPossibleSeparatorsInvertedSet:(id)arg1;
- (id)possibleSeparators;
- (void)setPossibleSeparators:(id)arg1;
- (BOOL)isPartialStringValid:(id *)arg1 proposedSelectedRange:(struct _NSRange *)arg2 originalString:(id)arg3 originalSelectedRange:(struct _NSRange)arg4 errorDescription:(id *)arg5;
- (void)dealloc;
- (id)init;

@end

