//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface CRKStudentdIDSBackedFacade : NSObject
{
    id <CRKRequestPerformingProtocol> _daemonProxy;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) id <CRKRequestPerformingProtocol> daemonProxy; // @synthesize daemonProxy=_daemonProxy;
- (id)operationForMessage:(id)arg1 recipients:(id)arg2;
- (id)initWithDaemonProxy:(id)arg1;

@end

