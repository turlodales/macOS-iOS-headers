//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ContactsFoundation/CNObservable.h>

@class NSArray, NSMutableArray, NSMutableIndexSet;
@protocol CNScheduler;

@interface _CNCombineLatestObservable : CNObservable
{
    NSArray *_observables;
    NSMutableArray *_results;
    NSMutableArray *_tokens;
    NSMutableIndexSet *_activeObservableIndexes;
    NSMutableIndexSet *_silentObservableIndexes;
    id <CNScheduler> _resultScheduler;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) id <CNScheduler> resultScheduler; // @synthesize resultScheduler=_resultScheduler;
@property(readonly, nonatomic) NSMutableIndexSet *silentObservableIndexes; // @synthesize silentObservableIndexes=_silentObservableIndexes;
@property(readonly, nonatomic) NSMutableIndexSet *activeObservableIndexes; // @synthesize activeObservableIndexes=_activeObservableIndexes;
@property(readonly, nonatomic) NSMutableArray *tokens; // @synthesize tokens=_tokens;
@property(readonly, nonatomic) NSMutableArray *results; // @synthesize results=_results;
@property(readonly, nonatomic) NSArray *observables; // @synthesize observables=_observables;
- (void)observableAtIndex:(unsigned long long)arg1 didFailWithError:(id)arg2 forObserver:(id)arg3;
- (void)observableAtIndexDidComplete:(unsigned long long)arg1 forObserver:(id)arg2;
- (void)observableAtIndex:(unsigned long long)arg1 didReceiveResult:(id)arg2 forObserver:(id)arg3;
- (id)subscribe:(id)arg1;
- (void)performWithResourceLock:(CDUnknownBlockType)arg1;
- (id)initWithObservables:(id)arg1 resultScheduler:(id)arg2 schedulerProvider:(id)arg3;
- (id)initWithObservables:(id)arg1;

@end

