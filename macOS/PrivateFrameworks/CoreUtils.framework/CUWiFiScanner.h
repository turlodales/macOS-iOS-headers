//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary, NSObject<OS_dispatch_queue>, NSObject<OS_dispatch_source>, NSString;

@interface CUWiFiScanner : NSObject
{
    BOOL _activateCalled;
    NSMutableDictionary *_devices;
    BOOL _invalidateCalled;
    BOOL _invalidateDone;
    BOOL _scanning;
    NSObject<OS_dispatch_source> *_scanTimer;
    BOOL _suspended;
    struct LogCategory *_ucat;
    unsigned int _changeFlags;
    unsigned int _scanFlags;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    NSString *_label;
    NSString *_ssid;
    CDUnknownBlockType _deviceFoundHandler;
    CDUnknownBlockType _deviceLostHandler;
    CDUnknownBlockType _deviceChangedHandler;
    CDUnknownBlockType _errorHandler;
    CDUnknownBlockType _invalidationHandler;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType invalidationHandler; // @synthesize invalidationHandler=_invalidationHandler;
@property(copy, nonatomic) CDUnknownBlockType errorHandler; // @synthesize errorHandler=_errorHandler;
@property(copy, nonatomic) CDUnknownBlockType deviceChangedHandler; // @synthesize deviceChangedHandler=_deviceChangedHandler;
@property(copy, nonatomic) CDUnknownBlockType deviceLostHandler; // @synthesize deviceLostHandler=_deviceLostHandler;
@property(copy, nonatomic) CDUnknownBlockType deviceFoundHandler; // @synthesize deviceFoundHandler=_deviceFoundHandler;
@property(copy, nonatomic) NSString *ssid; // @synthesize ssid=_ssid;
@property(nonatomic) unsigned int scanFlags; // @synthesize scanFlags=_scanFlags;
@property(copy, nonatomic) NSString *label; // @synthesize label=_label;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
@property(nonatomic) unsigned int changeFlags; // @synthesize changeFlags=_changeFlags;
- (void)_scanWiFiProcessResult:(id)arg1;
- (void)_scanWiFiFinished:(id)arg1 status:(int)arg2;
- (void)_scanWiFiStart;
- (void)resume;
- (void)suspend;
- (void)_invalidated;
- (void)invalidate;
- (void)activate;
- (void)_cleanup;
- (void)dealloc;
- (id)init;

@end

