//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSOperationQueue.h>

@interface PLInstrumentedOperationQueue : NSOperationQueue
{
    CDUnknownBlockType _pl_operationCountChangedBlock;
}

- (void).cxx_destruct;
@property(copy) CDUnknownBlockType pl_operationCountChangedBlock; // @synthesize pl_operationCountChangedBlock=_pl_operationCountChangedBlock;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)dealloc;
- (id)init;

@end

