//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSBlockOperation.h>

@class ICNFMCActivityMonitor;

@interface ICNFMCTaskOperation : NSBlockOperation
{
    ICNFMCActivityMonitor *_parentMonitor;
    ICNFMCActivityMonitor *_monitor;
}

+ (void)setTaskDescription:(const char *)arg1;
- (void).cxx_destruct;
@property(retain) ICNFMCActivityMonitor *monitor; // @synthesize monitor=_monitor;
@property(retain) ICNFMCActivityMonitor *parentMonitor; // @synthesize parentMonitor=_parentMonitor;
- (void)cancel;
- (void)dealloc;
- (void)main;
- (id)setTaskName:(id)arg1 priority:(unsigned char)arg2 canCancel:(BOOL)arg3;
- (void)setParentMonitor:(id)arg1 taskName:(id)arg2;

@end

