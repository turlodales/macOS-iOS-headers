//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AutoBugCaptureCore/DiagnosticReportGenerator.h>

#import "NetDiagnosticsShimDelegate.h"

@class NSDate, NSDictionary, NSMutableDictionary, NSString, NetDiagnosticsShim;

__attribute__((visibility("hidden")))
@interface NetworkDiagnosticsReportGenerator : DiagnosticReportGenerator <NetDiagnosticsShimDelegate>
{
    NetDiagnosticsShim *_netDiags;
    NSMutableDictionary *_options;
    NSDictionary *_netDiagsResults;
    NSDate *_reportStart;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSDate *reportStart; // @synthesize reportStart=_reportStart;
@property(retain, nonatomic) NSDictionary *netDiagsResults; // @synthesize netDiagsResults=_netDiagsResults;
@property(retain, nonatomic) NSMutableDictionary *options; // @synthesize options=_options;
- (id)createDefaultTaskDictionaryWithTaskName:(const char *)arg1;
- (void)netDiagnosticTaskStatusChangedFor:(id)arg1 toStatus:(int)arg2;
- (BOOL)startReportGeneration;
- (BOOL)startNetDiagnosticsTaskWithReply:(CDUnknownBlockType)arg1;
@property(retain, nonatomic) NetDiagnosticsShim *netDiags; // @synthesize netDiags=_netDiags;
- (id)initWithQueue:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

