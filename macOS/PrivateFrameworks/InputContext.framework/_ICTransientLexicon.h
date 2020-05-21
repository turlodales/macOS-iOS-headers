//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface _ICTransientLexicon : NSObject
{
    struct _LXLexicon *_lexicon;
    int _count;
    unsigned char _typeFlags;
    NSString *_name;
    unsigned long long _entryCount;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) unsigned long long entryCount; // @synthesize entryCount=_entryCount;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, nonatomic) unsigned char typeFlags; // @synthesize typeFlags=_typeFlags;
- (struct _LXLexicon *)getLexiconImplementation;
- (struct _LXEntry *)copyEntryForString:(id)arg1;
- (id)getSortKeyEquivalents:(id)arg1;
- (BOOL)contains:(id)arg1;
- (void)removeEntriesBySource:(unsigned char)arg1;
- (void)removeAllEntries;
- (void)removeEntry:(id)arg1 source:(unsigned char)arg2;
- (BOOL)addEntry:(id)arg1 source:(unsigned char)arg2 type:(unsigned char)arg3;
- (id)initWithName:(id)arg1 typeFlags:(unsigned char)arg2;
- (void)dealloc;
- (id)getUsageCount:(id)arg1;
- (id)getEntryRefCount:(id)arg1;
- (id)getEntries;

@end

