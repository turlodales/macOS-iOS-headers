//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

@interface _CNAutocompleteObservableBuilderBatchingHelper : NSObject
{
    NSArray *_batches;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSArray *batches; // @synthesize batches=_batches;
- (id)batchedObservables;
- (void)addObservable:(id)arg1 toBatchAtIndex:(unsigned long long)arg2;
- (id)initWithBatchCount:(unsigned long long)arg1;

@end

