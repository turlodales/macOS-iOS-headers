//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSOperationQueue.h"

@interface MSVOperationQueue : NSOperationQueue
{
    id <MSVOperationQueueDelegate> _delegate;
}

@property(nonatomic) __weak id <MSVOperationQueueDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)addOperations:(id)arg1 waitUntilFinished:(BOOL)arg2;
- (void)addOperation:(id)arg1;
- (void)dealloc;

@end

