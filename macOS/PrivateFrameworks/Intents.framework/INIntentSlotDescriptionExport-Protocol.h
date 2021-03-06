//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Intents/JSExport-Protocol.h>
#import <Intents/NSObject-Protocol.h>

@class NSArray, NSString;

@protocol INIntentSlotDescriptionExport <NSObject, JSExport>
@property(readonly, copy, nonatomic) NSArray *resolveSelectorStrings;
@property(readonly, nonatomic) SEL deprecatedResolveSelector;
@property(readonly, nonatomic) SEL resolveSelector;
@property(readonly, nonatomic) BOOL isPrivate;
@property(readonly, nonatomic) BOOL isExtended;
@property(readonly, nonatomic) long long valueStyle;
@property(readonly, nonatomic) long long valueType;
@property(readonly, copy, nonatomic) NSString *dataPropertyName;
@property(readonly, copy, nonatomic) NSString *facadePropertyName;
@property(readonly, nonatomic) unsigned long long tag;
@property(readonly, copy, nonatomic) NSString *name;
- (id)init;
@end

