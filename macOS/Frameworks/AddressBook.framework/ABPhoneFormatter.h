//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSFormatter.h>

@class CNCache;

@interface ABPhoneFormatter : NSFormatter
{
    CNCache *_formattedPhoneNumbersCache;
}

+ (id)stringForPhoneNumber:(id)arg1 options:(unsigned long long)arg2;
+ (id)localizedStringByStandardizingPhoneNumber:(id)arg1;
+ (id)phoneNumberDetector;
+ (id)generateOnlyPhoneCharactersSet;
+ (id)onlyPhoneCharactersSet;
+ (BOOL)stringContainsOnlyPhoneCharacters:(id)arg1;
+ (id)formatRawPhoneNumber:(id)arg1;
+ (id)sharedPhoneFormatter;
- (void).cxx_destruct;
@property(readonly, nonatomic) CNCache *formattedPhoneNumbersCache; // @synthesize formattedPhoneNumbersCache=_formattedPhoneNumbersCache;
- (BOOL)getObjectValue:(id *)arg1 forString:(id)arg2 errorDescription:(id *)arg3;
- (id)stringForObjectValue:(id)arg1;
- (void)setFormatAutosaveName:(id)arg1;
- (id)init;

@end

