//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Intents/NSObject-Protocol.h>

@class NSString, _INPBIntentSlotValue;

@protocol _INPBSelectionItem <NSObject>
@property(readonly, nonatomic) BOOL hasVocabularyValue;
@property(copy, nonatomic) NSString *vocabularyValue;
@property(readonly, nonatomic) BOOL hasValue;
@property(retain, nonatomic) _INPBIntentSlotValue *value;
@property(readonly, nonatomic) BOOL hasUuid;
@property(copy, nonatomic) NSString *uuid;
@end

