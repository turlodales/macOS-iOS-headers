//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class SMWindowsCopyPathAction, XMFile;

@protocol SMNWindowsCopyPathActionDelegate
- (BOOL)copyActionShouldContinue:(SMWindowsCopyPathAction *)arg1;
- (void)copyAction:(SMWindowsCopyPathAction *)arg1 finishedFile:(XMFile *)arg2 length:(unsigned long long)arg3;
- (void)copyAction:(SMWindowsCopyPathAction *)arg1 updatedFile:(XMFile *)arg2 partialLength:(unsigned long long)arg3;
@end

