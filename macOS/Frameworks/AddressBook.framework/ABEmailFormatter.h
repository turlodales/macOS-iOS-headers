//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AddressBook/ABSearchHighlightFormatter.h>

@class CNCache;

@interface ABEmailFormatter : ABSearchHighlightFormatter
{
    CNCache *_formattedEmailsCache;
}

+ (id)formatEmailAddress:(id)arg1;
+ (id)sharedEmailAddressScanner;
+ (id)sharedEmailFormatter;
- (void).cxx_destruct;
@property(readonly, nonatomic) CNCache *formattedEmailsCache; // @synthesize formattedEmailsCache=_formattedEmailsCache;
- (id)stringForObjectValue:(id)arg1;
- (id)init;

@end

