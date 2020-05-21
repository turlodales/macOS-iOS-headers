//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ContactsFoundation/CNObservable.h>

@class NSMutableArray;

@interface _CNBufferingObservable : CNObservable
{
    id <_CNBufferingStrategy> _strategy;
    id <CNObservable> _observable;
    NSMutableArray *_results;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *results; // @synthesize results=_results;
@property(retain, nonatomic) id <CNObservable> observable; // @synthesize observable=_observable;
@property(retain, nonatomic) id <_CNBufferingStrategy> strategy; // @synthesize strategy=_strategy;
- (void)sendBufferedResultsToObserver:(id)arg1;
- (id)subscribe:(id)arg1;
- (id)initWithBufferingStrategy:(id)arg1 observable:(id)arg2;
- (id)initWithLength:(unsigned long long)arg1 timeInterval:(double)arg2 scheduler:(id)arg3 observable:(id)arg4;
- (id)initWithTimeInterval:(double)arg1 scheduler:(id)arg2 observable:(id)arg3;
- (id)initWithLength:(unsigned long long)arg1 observable:(id)arg2;

@end

