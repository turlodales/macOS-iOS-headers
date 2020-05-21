//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCRLocaleInfoProviding.h"

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface SCRLocaleCommon : NSObject <SCRLocaleInfoProviding>
{
    unsigned long long characterDirection;
    NSArray *preferredLanguages;
    NSString *preferredLanguage;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *preferredLanguage; // @synthesize preferredLanguage;
@property(readonly, nonatomic) NSArray *preferredLanguages; // @synthesize preferredLanguages;
@property(readonly, nonatomic) unsigned long long characterDirection; // @synthesize characterDirection;
@property(readonly, nonatomic) BOOL isLocaleCharacterDirectionRightToLeft; // @dynamic isLocaleCharacterDirectionRightToLeft;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

