//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMapTable;

@interface ABActionAutovalidatorCache : NSObject
{
    NSMapTable *_entries;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMapTable *entries; // @synthesize entries=_entries;
- (id)description;
- (void)setEntry:(id)arg1 forAction:(SEL)arg2;
- (id)entryForAction:(SEL)arg1;
- (id)setAlwaysInvalidEntryForAction:(SEL)arg1;
- (id)setAlwaysValidlEntryForAction:(SEL)arg1;
- (id)setMenuEntryWithSelector:(SEL)arg1 forAction:(SEL)arg2;
- (id)setSimpleSelector:(SEL)arg1 forAction:(SEL)arg2;
- (id)init;

@end

