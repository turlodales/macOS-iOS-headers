//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSAttributedString, NSDictionary, TTTextStorage;

@protocol TTTextStorageStyler <NSObject>
- (void)resetGuessedFontSizes;
- (void)guessFontSizeThresholdsForTTStylesInAttributedString:(NSAttributedString *)arg1;
- (NSDictionary *)styleForModelAttributes:(NSDictionary *)arg1;
- (NSDictionary *)modelForStyleAttributes:(NSDictionary *)arg1 filterAttributes:(BOOL)arg2;
- (void)styleText:(TTTextStorage *)arg1 inRange:(struct _NSRange)arg2 fixModelAttributes:(BOOL)arg3;
@end

