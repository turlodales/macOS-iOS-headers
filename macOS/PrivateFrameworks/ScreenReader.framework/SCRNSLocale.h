//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ScreenReader/SCRLocaleCommon.h>

@class NSLocale;

__attribute__((visibility("hidden")))
@interface SCRNSLocale : SCRLocaleCommon
{
    NSLocale *__locale;
}

+ (id)autoupdatingCurrentLocale;
+ (id)currentLocale;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSLocale *_locale; // @synthesize _locale=__locale;
- (id)initWithAutoUpdate:(BOOL)arg1;
- (id)preferredLanguage;
- (id)preferredLanguages;
@property(nonatomic) unsigned long long characterDirection; // @dynamic characterDirection;

@end

