//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface EFWatchdog : NSObject
{
    NSString *_monitoredBundleIdentifier;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *monitoredBundleIdentifier; // @synthesize monitoredBundleIdentifier=_monitoredBundleIdentifier;
- (void)invalidate;
- (void)start;
- (id)initWithMonitoredBundleIdentifier:(id)arg1;

@end

