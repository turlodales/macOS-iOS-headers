//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NotesShared/TTFont.h>

@interface TTFont (UI)
+ (void)font:(id)arg1 isBold:(char *)arg2 isItalic:(char *)arg3;
+ (id)convertFont:(id)arg1 toBold:(BOOL)arg2 toItalic:(BOOL)arg3;
- (id)nativeFontForStyle:(unsigned int)arg1 contentSizeCategory:(id)arg2;
- (id)nativeFontForStyle:(unsigned int)arg1;
@end

