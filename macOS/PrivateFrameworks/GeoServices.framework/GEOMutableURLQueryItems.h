//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray;

@interface GEOMutableURLQueryItems : NSObject
{
    NSMutableArray *_items;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSMutableArray *items; // @synthesize items=_items;
- (void)addItemWithName:(id)arg1 uint64Value:(unsigned long long)arg2;
- (void)addItemWithName:(id)arg1 uintValue:(unsigned int)arg2;
- (void)addItemWithName:(id)arg1 intValue:(int)arg2;
- (void)addItemWithName:(id)arg1 value:(id)arg2;
- (void)addItem:(id)arg1;
- (void)addItemsFromArray:(id)arg1;
- (id)initWithItems:(id)arg1;
- (id)init;

@end

