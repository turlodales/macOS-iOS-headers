//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface AXMTask : NSObject
{
    BOOL _complete;
    CDUnknownBlockType _taskCompleteBlock;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType taskCompleteBlock; // @synthesize taskCompleteBlock=_taskCompleteBlock;
@property(nonatomic, getter=isComplete) BOOL complete; // @synthesize complete=_complete;
- (void)markAsComplete:(BOOL)arg1;

@end

