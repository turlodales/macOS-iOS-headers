//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "EFLoggable.h"

@class AWDServerConnection, NSString;

@interface MSDiagnosticManager : NSObject <EFLoggable>
{
    AWDServerConnection *_awdServerConnection;
}

+ (id)log;
- (void).cxx_destruct;
@property(readonly, nonatomic) AWDServerConnection *awdServerConnection; // @synthesize awdServerConnection=_awdServerConnection;
- (void)submitFetchMetricsReport:(id)arg1;
- (void)submitComposeAttachmentReport:(id)arg1;
- (void)submitMessageLoadingReport:(id)arg1;
- (BOOL)submitWithIdentifier:(unsigned int)arg1 metricGenerator:(CDUnknownBlockType)arg2;
- (void)submitSearchSessionWithSearchEngagement:(id)arg1 numberOfMessagesLeftToIndex:(unsigned long long)arg2 percentOfMessagesIndexed:(unsigned long long)arg3 emailProvider:(int)arg4;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

