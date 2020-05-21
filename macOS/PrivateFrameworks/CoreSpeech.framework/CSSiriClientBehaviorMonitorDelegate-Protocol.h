//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CSAudioRecordContext, CSAudioStartStreamOption, CSAudioStopStreamOption, CSSiriClientBehaviorMonitor;

@protocol CSSiriClientBehaviorMonitorDelegate <NSObject>
- (void)siriClientBehaviorMonitor:(CSSiriClientBehaviorMonitor *)arg1 didStopStream:(CSAudioStopStreamOption *)arg2;
- (void)siriClientBehaviorMonitor:(CSSiriClientBehaviorMonitor *)arg1 willStopStream:(CSAudioStopStreamOption *)arg2;
- (void)siriClientBehaviorMonitor:(CSSiriClientBehaviorMonitor *)arg1 didStartStreamWithContext:(CSAudioRecordContext *)arg2 successfully:(BOOL)arg3 option:(CSAudioStartStreamOption *)arg4;
- (void)siriClientBehaviorMonitor:(CSSiriClientBehaviorMonitor *)arg1 willStartStreamWithContext:(CSAudioRecordContext *)arg2 option:(CSAudioStartStreamOption *)arg3;
@end

