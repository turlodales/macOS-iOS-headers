//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NUIContainerGridView.h"

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface TLKKeyValueGridView : NUIContainerGridView
{
    NSMutableArray *_keyLabels;
    NSMutableArray *_valueLabels;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *valueLabels; // @synthesize valueLabels=_valueLabels;
@property(retain, nonatomic) NSMutableArray *keyLabels; // @synthesize keyLabels=_keyLabels;
- (void)updateWithTuples:(id)arg1 valueColumnIsTrailing:(BOOL)arg2 truncateKey:(BOOL)arg3;
- (id)init;

@end

