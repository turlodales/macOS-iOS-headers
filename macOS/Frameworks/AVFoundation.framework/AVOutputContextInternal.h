//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AVWeakReference, NSObject<OS_dispatch_queue>;

@interface AVOutputContextInternal : NSObject
{
    NSObject<OS_dispatch_queue> *pickerQueue;
    struct OpaqueFigEndpointPicker *endpointPicker;
    struct __CFString *contextUUID;
    BOOL isSystemPicker;
    unsigned long long pickerFeature;
    AVWeakReference *weakReference;
    int applicationPID;
}

@end

