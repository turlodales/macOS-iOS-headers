//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AssistiveControlSupport/ACSHAction.h>

@interface ACSHActionScroll : ACSHAction
{
    long long _scrollSpeed;
    unsigned long long _scrollDirection;
}

+ (id)actionWithDirection:(unsigned long long)arg1 speed:(long long)arg2;
@property(nonatomic) unsigned long long scrollDirection; // @synthesize scrollDirection=_scrollDirection;
@property(nonatomic) long long scrollSpeed; // @synthesize scrollSpeed=_scrollSpeed;
- (id)paramDescription;
- (void)performWithEventSourceData:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)paramDictionaryForSaving;
- (void)_configureWithPlistDictionary:(id)arg1;
- (id)init;

@end

