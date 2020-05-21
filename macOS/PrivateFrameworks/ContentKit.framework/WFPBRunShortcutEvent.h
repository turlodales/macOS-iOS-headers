//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface WFPBRunShortcutEvent : PBCodable <NSCopying>
{
    unsigned int _actionCount;
    NSString *_automationType;
    NSString *_key;
    NSString *_runSource;
    int _source;
    BOOL _completed;
    struct {
        unsigned int actionCount:1;
        unsigned int source:1;
        unsigned int completed:1;
    } _has;
}

- (void).cxx_destruct;
@property(nonatomic) BOOL completed; // @synthesize completed=_completed;
@property(nonatomic) unsigned int actionCount; // @synthesize actionCount=_actionCount;
@property(retain, nonatomic) NSString *automationType; // @synthesize automationType=_automationType;
@property(retain, nonatomic) NSString *runSource; // @synthesize runSource=_runSource;
@property(retain, nonatomic) NSString *key; // @synthesize key=_key;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) BOOL hasCompleted;
@property(nonatomic) BOOL hasActionCount;
@property(readonly, nonatomic) BOOL hasAutomationType;
@property(readonly, nonatomic) BOOL hasRunSource;
- (int)StringAsSource:(id)arg1;
- (id)sourceAsString:(int)arg1;
@property(nonatomic) BOOL hasSource;
@property(nonatomic) int source; // @synthesize source=_source;
@property(readonly, nonatomic) BOOL hasKey;

@end

